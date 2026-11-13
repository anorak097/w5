#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN 10
#define RST_PIN 9

MFRC522 rfid(SS_PIN, RST_PIN);

byte authorizedUID[4] = {0x01, 0x02, 0x03, 0x04};

void setup() {
    Serial.begin(9600);
    SPI.begin();
    rfid.PCD_Init();
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
        Serial.println("驗證成功");
    } else {
        Serial.println("驗證失敗");
    }

    rfid.PICC_HaltA();
    rfid.PCD_StopCrypto1();
}