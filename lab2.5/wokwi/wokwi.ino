#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN 10
#define RST_PIN 9

MFRC522 rfid(SS_PIN, RST_PIN);

byte authorizedUID[4] = {0x01, 0x02, 0x03, 0x04};

#include <Servo.h>

Servo myServo;

#define NOTE_C5  523

int melody[] = {
    NOTE_C5, NOTE_C5
};

int noteDurations[] = {
    16, 16
};

void setup() {
    Serial.begin(115200);
    SPI.begin();
    rfid.PCD_Init();
    myServo.attach(3);
    myServo.write(0);
}

void loop() {
    if (!rfid.PICC_IsNewCardPresent()) return;
    if (!rfid.PICC_ReadCardSerial()) return;

    bool isAuthorized = true;
    for (byte i = 0; i < 4; i++) {
        if (rfid.uid.uidByte[i] != authorizedUID[i]) {
            isAuthorized = false;
            break;
        }
    }

    if (isAuthorized) {
        for (int a = 0; a <= 180; a ++){
            // myServo.write(constrain(a, 0, 180));
            myServo.write(a);
            delay(5);
        }
        delay(1000);
        for (int a = 180; a >= 0; a --){
            // myServo.write(constrain(a, 0, 180));
            myServo.write(a);
            delay(5);
        }
    } else {
        for (int thisNote = 0; thisNote < 2; thisNote++) {
            int noteDuration = 1000 / noteDurations[thisNote];
            tone(8, melody[thisNote], noteDuration);

            int pauseBetweenNotes = noteDuration * 1.50;
            delay(pauseBetweenNotes);
            noTone(8);
        }
    }

    rfid.PICC_HaltA();
    rfid.PCD_StopCrypto1();
}