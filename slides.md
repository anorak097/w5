---
theme: neversink
routerMode: hash
title: \#6 AI 的實體手腳
class: text-center
transition: slide-left
comark: true
slide_info: false
neversink_slug: 'AI 概論與實作體驗 #6 AI 的實體手腳'
---

<h1 style="font-size: 2.5rem; font-weight: bold;">AI 概論與實作體驗</h1>
<h1 style="font-size: 5rem; margin-top: 0px; font-weight: bold;">#6 AI 的實體手腳</h1>

---
transition: slide-left
layout: top-title
color: dark
---

::title::

<h1 style="font-size: 3rem; padding-top: 10px; padding-bottom: 10px; font-weight: bold;  display: flex; justify-content: space-between;">
   <span>AI 的發展歷程</span><span style="font-size: 2rem; color: gray;">四個關鍵階段</span>
</h1>

::content::

<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; align-items: flex-start; box-sizing: border-box;">
        <div style="width: 25%; padding-right: 20px; box-sizing: border-box;">
            <Admonition title="Discriminative AI" width="auto" icon="pixel:search" color=cyan-light>
                <h2 style="font-size: 2rem;">鑑別式 AI</h2>
                <h2>像人類一樣能「看」、「聽」，並做出基本判斷</h2>
            </Admonition>
		</div>
        <div style="width: 25%; padding-right: 20px; box-sizing: border-box;">
            <Admonition title="Generative AI" width="auto" icon="pixel:message-dots" color=sky-light>
                <h2 style="font-size: 2rem;">生成式 AI</h2>
                <h2>理解「自然語言」與圖像並「創造」新內容</h2>
            </Admonition>
		</div>
        <div style="width: 25%; padding-right: 20px; box-sizing: border-box;">
            <Admonition title="Agentic AI" width="auto" icon="pixel:user-headset" color=blue-light>
                <h2 style="font-size: 2rem;">代理式 AI</h2>
                <h2>目標導向，能自主行動以達成目的</h2>
            </Admonition>
		</div>
        <div style="width: 25%; padding-right: 20px; box-sizing: border-box;">
            <Admonition title="Physical AI" width="auto" icon="pixel:robot-solid" color=indigo-light>
                <h2 style="font-size: 2rem;">實體 AI</h2>
                <h2>在現實環境中以實體自主執行任務</h2>
            </Admonition>
		</div>
	</div>
</div>
<h2>近代 AI 大致依照著鑑別式 AI → 生成式 AI → 代理式 AI 這樣的順序發展，而<span style="background:#FFE45E; color:black;">實體 AI</span> 則是領域內專家預測 <span style="background:#FFE45E; color:black;">AI 發展的最後階段</span>。<br>
這階段的 AI 要能在現實世界中以其硬體自主達成任務，預期可用於<span style="background:#FFE45E; color:black;">自動駕駛</span>、<span style="background:#FFE45E; color:black;">自主搬運車</span>和<span style="background:#FFE45E; color:black;">通用機器人</span>等。</h2>

---
transition: slide-left
layout: top-title
color: dark
---

::title::

<h1 style="font-size: 3rem; padding-top: 10px; padding-bottom: 10px; font-weight: bold;  display: flex; justify-content: space-between;">
   <span>機器人</span><span style="font-size: 2rem; color: gray;">各國與各企業現今的目標</span>
</h1>

::content::

<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; align-items: flex-start; box-sizing: border-box;">
        <div style="width: 66%; padding-right: 20px; box-sizing: border-box;">
            <h2>機器人的雛形最早可追溯至達文西手稿的<span style="background:#FFE45E; color:black;">達文西機械人</span>，以及雅克德羅 (Jaquet Droz) 的<span style="background:#FFE45E; color:black;">自動機械人偶 (Automaton，或譯作自動人形)</span>，兩者皆透過精密的齒輪連桿來模仿生物動作。</h2>
            <h2>到了現代，無論是工業手臂、四足機器狗，或近年各大科技廠爭相發表的人形機器人，驅動它們活動的核心關鍵，正是「馬達」——也就是<span style="background:#FFE45E; color:black;">高度模組化的精密齒輪致動元件</span>。</h2>
		</div>
		<div style="width: 25%; min-width: 200px; display: flex; flex-direction: column; align-items: center; text-align: center; box-sizing: border-box; margin: 0 auto;">
            <a href="https://commons.wikimedia.org/wiki/File:Parents_of_Earth,_are_your_children_fully_immunized_(4647268251)_(cropped)_auto_color_(cropped_to_R2-D2).jpg">
                <img src="https://thumb.wikimedia.org/wikipedia/commons/thumb/6/61/Parents_of_Earth%2C_are_your_children_fully_immunized_%284647268251%29_%28cropped%29_auto_color_%28cropped_to_R2-D2%29.jpg/500px-Parents_of_Earth%2C_are_your_children_fully_immunized_%284647268251%29_%28cropped%29_auto_color_%28cropped_to_R2-D2%29.jpg" 
                    alt="R2-D2" 
                    style="max-width: 100%; height: auto; display: block;">
            </a>
            <p style="font-size: 12px; margin-top: 8px;">
                By <a rel="nofollow" class="external text" href="https://www.flickr.com/people/47756470@N03">National Library of Medicine</a> (Public Domain)
            </p>
        </div>
	</div>
</div>

---
transition: slide-left
layout: top-title
color: dark
---

::title::

<h1 style="font-size: 3rem; padding-top: 10px; padding-bottom: 10px; font-weight: bold;  display: flex; justify-content: space-between;">
   <span>伺服馬達</span><span style="font-size: 2rem; color: gray;">高度模組化的馬達</span>
</h1>

::content::

<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; align-items: flex-start; box-sizing: border-box;">
        <div style="width: 66%; padding-right: 20px; box-sizing: border-box;">
            <h2>伺服馬達 (Servo Motor) 是一種<span style="background:#FFE45E; color:black;">能夠精準控制旋轉角度</span>的馬達，由傳統馬達、電路板與齒輪機構模組化。<br>
            相較於傳統馬達多了一條<span style="background:#FFE45E; color:black;">控制訊號線</span>，可隨時讀取並調整轉動位置。<br>
            因此，它被廣泛應用於遙控飛機、遙控船、機械手臂以及各類需要<span style="background:#FFE45E; color:black;">高精度角度控制的智慧機器</span>中。</h2>
		</div>
		<div style="width:34%; display: flex; flex-direction: column; align-items: center; text-align: center; box-sizing: border-box;">
			<img src="https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEhws-HBZYP7-qqeK9LSGykqpxNpsn6WuvjXX2yPBPdySXW3LiQjKtQa-d2hFA_MYDw33UP5fZnndPS9avoyC8-BQsiIzDrR44jnZ8HWw1v_5wMh6YvUjxirLsQh010pK0T2KKAO7oSWxM5i/s1600/motor_servo_motor_small_horn.png">
            SG-90<br>最為常見與經典的伺服馬達
    	</div>
	</div>
</div>