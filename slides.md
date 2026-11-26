---
theme: neversink
routerMode: hash
title: IoT
class: text-center
transition: slide-left
comark: true
slide_info: false
neversink_slug: '物聯網課程教材'
---

<h1 style="font-size: 5rem; font-weight: bold;">物聯網課程</h1>


---
transition: slide-left
layout: intro
color: dark
routeAlias: Outline
---

<div style="font-size: 0.8rem; display: grid; grid-template-columns: repeat(3, minmax(0, 1fr)); gap: 1rem;">
    <div>
        <h1><Link to="w1">第一周教材</Link></h1>
        <h1><Link to="w2">第二周教材</Link></h1>
        <h1><Link to="w3">第三周教材</Link></h1>
        <h1><Link to="w4">第四周教材</Link></h1>
        <h1><Link to="w5">第五周教材</Link></h1>
        <h1><Link to="w6">第六周教材</Link></h1>
    </div>
    <div>
        <h1><Link to="w7">第七周教材</Link></h1>
        <h1><Link to="w10">第十周教材</Link></h1>
        <h1><Link to="w12">第十二周教材</Link></h1>
        <h1><Link to="w13">第十三周教材</Link></h1>
    </div>
</div>

---
transition: slide-left
layout: top-title
color: dark
routeAlias: w1
---
::title::

<h1 style="font-size: 2.5rem; font-weight: bold;">What is IoT?</h1>

::content::
<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; align-items: flex-start; box-sizing: border-box;">
        <div style="width: 66%; padding-right: 20px; box-sizing: border-box;">
            <h2>現今是所謂「大人物」時代<br>
            <span style="background:#FFE45E; color:black;">大</span>數據(Big Data)<br>
            <span style="background:#FFE45E; color:black;">人</span>工智慧(Artificial Intelligence, AI)<br>
            <span style="background:#FFE45E; color:black;">物</span>聯網(Internet of Things, IoT)<br>
            已經成為生活的一部份</h2> 
        </div>
        <div style="width: 34%; display: flex; flex-direction: column; align-items: center; text-align: center; box-sizing: border-box;">
            <p><a href="https://commons.wikimedia.org/wiki/File:YouBike_2.0.jpg#/media/File:YouBike_2.0.jpg"><img src="https://thumb.wikimedia.org/wikipedia/commons/thumb/1/15/YouBike_2.0.jpg/1280px-YouBike_2.0.jpg?utm_source=zh.wikipedia.org&amp;utm_campaign=imageinfo&amp;utm_content=thumbnail" alt="YouBike 2.0.jpg" height="1280" width="1280"></a><span style="font-size: 0.8rem;">由 <a href="//commons.wikimedia.org/w/index.php?title=User:Andy_Sou&amp;action=edit&amp;redlink=1" class="new" title="User:Andy Sou (page does not exist)">Andy Sou</a> - <span class="int-own-work" lang="zh-tw">自己的作品</span>, <a href="https://creativecommons.org/licenses/by-sa/4.0" title="Creative Commons Attribution-Share Alike 4.0">CC BY-SA 4.0</a>, <a href="https://commons.wikimedia.org/w/index.php?curid=85991765">連結</a></span><p>微笑單車 (YouBike/Ubike) 就是個經典的物聯網應用</p></p>
        </div>
    </div>
</div>

---
transition: slide-left
layout: top-title
color: dark
---
::title::

<h1 style="font-size: 2.5rem; font-weight: bold;">How it work?</h1>

::content::
<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; align-items: flex-start; box-sizing: border-box;">
        <div style="width: 66%; padding-right: 20px; box-sizing: border-box;">
            <h2><span style="background:#FFE45E; color:black;">微控制器</span>接收並分析數據再透過通訊與雲端電腦或是同系統其他裝置進行互動，藉由設定的邏輯進行後續的互動。<br>
            以 Ubike 悠遊卡借車為例，按鈕喚醒微控制器後更新顯示器，讀取悠遊卡 ID 並與站點資訊、車輛資訊與時間一同送到雲端系統，雲端系統判斷沒問題後控制車鎖解鎖。</h2> 
        </div>
        <div style="width: 34%; display: flex; flex-direction: column; align-items: center; text-align: center; box-sizing: border-box;">
            <p><a href="https://commons.wikimedia.org/wiki/File:Youbike_2.0%E8%BB%8A%E6%A9%9F.jpg#/media/File:Youbike_2.0%E8%BB%8A%E6%A9%9F.jpg"><img src="https://thumb.wikimedia.org/wikipedia/commons/thumb/6/6b/Youbike_2.0%E8%BB%8A%E6%A9%9F.jpg/1280px-Youbike_2.0%E8%BB%8A%E6%A9%9F.jpg?utm_source=zh.wikipedia.org&amp;utm_campaign=imageinfo&amp;utm_content=thumbnail" alt="Youbike 2.0車機.jpg" height="720" width="1280"></a><span style="font-size: 0.8rem;">由 <a href="//commons.wikimedia.org/w/index.php?title=User:Rryyaann0523&amp;action=edit&amp;redlink=1" class="new" title="User:Rryyaann0523 (page does not exist)">Rryyaann0523</a> - <span class="int-own-work" lang="zh-tw">自己的作品</span>, <a href="https://creativecommons.org/licenses/by-sa/4.0" title="Creative Commons Attribution-Share Alike 4.0">CC BY-SA 4.0</a>, <a href="https://commons.wikimedia.org/w/index.php?curid=128650660">連結</a></span>
            <a href="https://commons.wikimedia.org/wiki/File:YouBike_2.0E_display.jpg#/media/File:YouBike_2.0E_display.jpg"><img src="https://thumb.wikimedia.org/wikipedia/commons/thumb/e/ed/YouBike_2.0E_display.jpg/1280px-YouBike_2.0E_display.jpg?utm_source=zh.wikipedia.org&amp;utm_campaign=imageinfo&amp;utm_content=thumbnail" alt="YouBike 2.0E display.jpg" height="853" width="1280"></a><span style="font-size: 0.8rem;">由 嘉義市政府, Attribution, <a href="https://commons.wikimedia.org/w/index.php?curid=112965358">連結</a></span></p>
        </div>
    </div>
</div>

---
transition: slide-left
layout: top-title
color: dark
---
::title::

<h1 style="font-size: 2.5rem; font-weight: bold;">MCU?</h1>

::content::
<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; align-items: flex-start; box-sizing: border-box;">
        <div style="width: 66%; padding-right: 20px; box-sizing: border-box;">
            <h2><span style="background:#FFE45E; color:black;">微控制器 (Microcontroller Unit, MCU)</span>是將輸入輸出與運算所需要的單位整合的<span style="background:#FFE45E; color:black;">微型電腦。</span><br>
            Arduino UNO R3 就是將微控制器與電源、針腳等整合起來，經典的<span style="background:#FFE45E; color:black;">開發板 (Development Board)</span>。</h2>
            <h2 style="font-weight: bold;" v-click="1">
            什麼是微控制器?
            </h2>
            <h2 v-click="2">控制什麼? <text style="color: #00878f; background-color: #ffffff; font-weight: bold;" v-click="3">執行器 (Actuator)</text></h2>
            <h2 v-click="4">怎麼控制? <text style="color: #00878f; background-color: #ffffff; font-weight: bold;" v-click="5">程式邏輯</text></h2>
            <h2 v-click="6">怎麼互動? <text style="color: #00878f; background-color: #ffffff; font-weight: bold;" v-click="7">感測器 (Sensor)</text></h2>
        </div>
        <div style="width: 34%; display: flex; flex-direction: column; align-items: center; text-align: center; box-sizing: border-box;">
            <div style="width: 100%; border-radius: 12px; box-shadow: 0 10px 25px rgba(0,0,0,0.3); overflow: hidden; background: #1e293b;">    
            <img src="./public/PXL_20260622_045854510.jpg" alt="Arduino UNO" style="width: 100%; aspect-ratio: 4/3; object-fit: cover; display: block;">
            <div class="flex items-center justify-center gap-3 py-4">
                <span class="text-[10px] font-bold text-white bg-[#00878f] px-2 py-1 rounded uppercase tracking-wider">
                    Hardware
                </span>
                <span class="text-sm font-semibold text-gray-300 tracking-wide">
                    Arduino UNO R3
                </span>
            </div>
        </div>
        </div>
    </div>
</div>

---
transition: slide-left
layout: top-title
color: dark
---
::title::

<h1 style="font-size: 2.5rem; font-weight: bold;">要使用開發板需要有哪些能力</h1>

::content::

<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; align-items: flex-start; box-sizing: border-box;">
        <div style="width: 66%; padding-right: 20px; box-sizing: border-box;">
            <ul style="font-size: 2rem;">
                <li>程式邏輯 (C++)</li>
                <li>基礎電路知識</li>
            </ul>
            <div v-click="1">
                <h2>BUT!<br>
                程式邏輯還是要有，程式能力可以藉由 Blockly (積木化程式) 克服。<br>
                過往需要反覆查找資料確認接線，現在也可以依靠 AI 跳過中間的過程。</h2>
            </div>
        </div>
        <div style="width: 34%; display: flex; flex-direction: column; align-items: center; text-align: center; box-sizing: border-box;">
            <img src="https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEizggLpSktWLtBC0bPawP1VYISrWrbp5n1dMCtUSzBSoTvP-UVQM8d86nwuLYbZdGaWG5ennI1Wz-hM9UJ5j2OodYlXvNPBnRJIQMVOuORqLff-vpPr-FBlyh8s8k9dbHD7CKildGtIT94/s800/computer_one-board_microcomputer.png">
        </div>
    </div>
</div>

---
transition: slide-left
layout: top-title
color: dark
---
::title::

<h1 style="font-size: 2.5rem; font-weight: bold;">課程中會使用的工具</h1>

::content::

<div style="font-size: 1.8rem">
    整合開發環境
    <ul>
        <li><a href="https://support.arduino.cc/hc/en-us/articles/360019833020-Download-and-install-Arduino-IDE">Arduino IDE</a></li>
    </ul>
    接線模擬
    <ul>
        <li><a href="https://wokwi.com/projects/new/arduino-nano">Wokwi</a></li>
    </ul>
    blockly 程式
    <ul>
        <li><a href="https://www.tinkercad.com/dashboard">tinkercad</a></li>
        <li><a href="https://marketplace.visualstudio.com/items?itemName=Singular-Ray.singular-blockly">Singular Blockly (in Visual Studio Code)</a></li>
    </ul>
</div>

---
transition: slide-left
layout: top-title
color: dark
routeAlias: w2
---
::title::

<h1 style="font-size: 2.5rem; font-weight: bold;">感測器</h1>

::content::

<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; align-items: flex-start; box-sizing: border-box;">
        <div style="width: 66%; padding-right: 20px; box-sizing: border-box;">
            <h2>如果把 <span style="background:#FFE45E; color:black;">MCU 當作大腦</span>，感測器 (Sensor) 就等同於<span style="background:#FFE45E; color:black;">受器</span>。<br>
            常見的感測器有：按鈕開關、可變電阻、RFID 讀取器、紅外線接收器、人體紅外線感測器、超音波感測器、聲音感測器等、三軸感測器、雙軸按鍵搖桿......<br>
            </h2>
        </div>
        <div style="width: 34%; display: flex; flex-direction: column; align-items: center; text-align: center; box-sizing: border-box;">
            <img src="https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEgPmlT7NIW40GepVavpKc4QvDSw_e9xV77P0us-r6tp2IOozgyjgxvzo7nGCpZJI-RWm6AK9zH4EnvpqOc0ViY1kN3V60lqbUeSpHfr03s4p2-ltZlFmHQp7YE7QbkdXko6hOR9XcmrWlRJ/s400/game_controller.png">
            搖桿是融合許多感測器的經典例子
        </div>
    </div>
</div>

---
transition: slide-left
layout: top-title
color: dark
---
::title::

<h1 style="font-size: 2.5rem; font-weight: bold;">感測器的作用</h1>

::content::

<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; align-items: flex-start; box-sizing: border-box;">
        <div style="width: 66%; padding-right: 20px; box-sizing: border-box;">
            <h2>感測器在一個裝置中通常會利用電位差、計時器等，<span style="background:#FFE45E; color:black;">給予微控制器不同的數值</span>，微控制器再根據不同的數值進行對應的行為。<br>
            現今的開發板會有<span style="background:#FFE45E; color:black;">針對不同 Sensor 的專屬程式/函式庫 (Library)</span>，函式庫會根據 Sensor 的特性，<span style="background:#FFE45E; color:black;">使讀取到的數值變成通用的數值單位</span>或是使控制變簡單。
            </h2>
        </div>
        <div style="width: 34%; display: flex; flex-direction: column; align-items: center; text-align: center; box-sizing: border-box;">
            <img src="https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEimjjYnxsvJFJ_gToa9_Z8MJsOOw5CtHmCcKziDUmwCp-1IQ4CPx7j2L-pI1IizKvafONVMCzyaL0ue4m4lZLRSGCiTcgOqcyXIrl0LDutOeqDOehNqJpjA7U10LO48tUEbudrWAvANVWk/s800/character_program_smart.png">
        </div>
    </div>
</div>

---
transition: slide-left
layout: top-title
color: dark
---

::title::

<h1 style="font-size: 2.5rem; font-weight: bold;">感測器介紹——RFID 讀取器</h1>

::content::

<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; align-items: flex-start; box-sizing: border-box;">
        <div style="width: 66%; padding-right: 20px; box-sizing: border-box;">
            <h2>RFID 讀取器是透過發射<span style="background:#FFE45E; color:black;">無線電波</span>，激活要讀取的(無源)標籤並<span style="background:#FFE45E; color:black;">接收標籤回傳的資料</span>，標籤內的<span style="background:#FFE45E; color:black;">資料則通常以一個微小的晶片儲存</span>。<br>
            RFID 掃描距離視不同的讀取器與標籤組合而定，被動式標籤最長距離可到十公尺左右 (超高頻 RFID)。<br>
            RFID 常見的用法是<span style="background:#FFE45E; color:black;">利用標籤的不同 ID 區分</span>不同人、車，如悠遊卡與 e-tag。<br>
            也能用來<span style="background:#FFE45E; color:black;">判斷是否有目標經過/靠近</span>，如防盜門。</h2>
        </div>
        <div style="width: 34%; display: flex; flex-direction: column; align-items: center; text-align: center; box-sizing: border-box;">
            <img src="https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEiLtIfis2XO3IW6ulFAM_N9vLiWIVN825Du-0G79AzoTmxbEc9f-4chonJjjyYM6PnZjpfAqtVEJ8fMgrBj62rf8TGxJTpJue4mFCnz2IjNyG78c9LDI5ICudBPVfAZKbXaK0bN9qEwhqD7/s400/rfid_card_reader_touch.png">
        </div>
    </div>
</div>

---
transition: slide-left
layout: top-title
color: dark
---

::title::

<h1 style="font-size: 2.5rem; font-weight: bold;">感測器介紹——超音波感測器</h1>

::content::

<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; align-items: flex-start; box-sizing: border-box;">
        <div style="width: 66%; padding-right: 20px; box-sizing: border-box;">
            <h2>超音波感測器是透過<span style="background:#FFE45E; color:black;">發射聲波和接收回彈聲波的時間差估算距離</span>。<br>
            超音波感測器常見的用法是透過多方向的反覆偵測距離，<span style="background:#FFE45E; color:black;">描繪出特定方向的障礙物/牆面輪廓</span>，如聲納。<br>
            也能利用偵測到的距離變化，做出示警，如倒車雷達。</h2>
        </div>
        <div style="width: 34%; display: flex; flex-direction: column; align-items: center; text-align: center; box-sizing: border-box;">
            <img src="https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEgBCsL6V3yKuxzCLEuypsRPl7szv-ZSpTaY6JOviPXhIVkQSoKiL1WWuedDtCQi18THkI1GoyJKfhEfUvPlgIZMT-ZX67IEbJQdVBf3ZSxXZ4jYRNuKLHPS81vN1-YHUjQwz-fASVzdvs0/s800/car_back4_hazard.png">
        </div>
    </div>
</div>

---
transition: slide-left
layout: top-title
color: dark
---

::title::

<h1 style="font-size: 2.5rem; font-weight: bold;">超音波感測器實驗</h1>

::content::

<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; align-items: flex-start; box-sizing: border-box;">
        <div style="width: 66%; padding-right: 20px; box-sizing: border-box;">
            <h2>
            使用超音波感測器與一顆單色 LED 模擬倒車雷達運作<br><br>
            要求：<br>
            LED燈在10公分內閃爍 <span style="background:#FFE45E; color:black;">(delay(200);)</span><br>
            LED燈在10~30公分間閃爍更慢 <span style="background:#FFE45E; color:black;">(delay(400);)</span><br>
            LED燈在30公分以上時不亮
            </h2>
        </div>
        <div style="width: 34%; display: flex; flex-direction: column; align-items: center; text-align: center; box-sizing: border-box;">
            <img src="https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEgBCsL6V3yKuxzCLEuypsRPl7szv-ZSpTaY6JOviPXhIVkQSoKiL1WWuedDtCQi18THkI1GoyJKfhEfUvPlgIZMT-ZX67IEbJQdVBf3ZSxXZ4jYRNuKLHPS81vN1-YHUjQwz-fASVzdvs0/s800/car_back4_hazard.png">
        </div>
    </div>
</div>

---
transition: slide-left
layout: top-title
color: dark
routeAlias: w3
---
::title::

<h1 style="font-size: 2.5rem; font-weight: bold;">執行器</h1>

::content::

<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; align-items: flex-start; box-sizing: border-box;">
        <div style="width: 66%; padding-right: 20px; box-sizing: border-box;">
            <h2>如果把 <span style="background:#FFE45E; color:black;">MCU 當作大腦</span>，感測器 (Actuator) 就等同於<span style="background:#FFE45E; color:black;">動器</span>。<br>
            常見的執行器有：LED、燈泡、蜂鳴器、喇叭、電磁閥、馬達......<br>
            </h2>
        </div>
        <div style="width: 34%; display: flex; flex-direction: column; align-items: center; text-align: center; box-sizing: border-box;">
            <img src="https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEhoClNQVMqWBWGB0qFeZSNdfGEDsDegwIRCd68SROxfz1Jrb9Y9lXs0zUQxl5kCTan0Jg8L8atVzx5tINGCiydZAXiWOnbpDE34RuDtC9YOZvMXd9iCiBJPBuz0FxnG5JiHZc4Wn8SnNJColIgTPpP2tbDotK3fFBNSSGzjFlhzv5j5_Q5suFchNiVerw/s778/restaurant_haizen_robot.png">
            送餐機器人是融合許多執行器例子
        </div>
    </div>
</div>

---
transition: slide-left
layout: top-title
color: dark
---

::title::

<h1 style="font-size: 2.5rem; font-weight: bold;">超音波感測器實作作業</h1>

::content::

<h2>
# 本日作業<br>
要求：<br>
綠燈在30公分以上長亮<br>
黃燈在10~30公分間快速閃爍(delay(300);)<br>
紅燈在10公分內快速閃爍 <span style="background:#FFE45E; color:black;">(delay(150);)</span><br>
作業要求：<br>
接線：繳交 <span style="background:#FFE45E; color:black;">wokwi 的 diagram.json</span> (於下載的 project.zip 中)<br>
程式：本次作業燒錄(上傳)的<span style="background:#FFE45E; color:black;">程式檔</span> (*使用 Arduino IDE 燒錄的為 .ino 檔，使用 Singular Blockly 燒錄的為 main.cpp 檔)<br>
運作：<span style="background:#FFE45E; color:black;">現場檢查</span>運作<br><br>
詳見 Classroom 中作業說明
</h2>

---
transition: slide-left
layout: top-title
color: dark
routeAlias: w4
---

::title::

<h1 style="font-size: 2.5rem; font-weight: bold;">顯示器</h1>

::content::

<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; align-items: flex-start; box-sizing: border-box;">
        <div style="width: 66%; padding-right: 20px; box-sizing: border-box;">
            <h2>顯示器是生活中常見的輸出裝置，在物聯網應用中，常用於呈現雲端資訊或感測器數據。然而，由於微控制器本身的<span style="background:#FFE45E; color:black;">記憶體與運算資源有限</span>，通常難以甚至無法渲染高解析度的複雜畫面。因此，實務上常需要藉由電腦等設備協助處理，或是盡可能簡化畫面內容並減少細節，才能將資訊順利顯示。
            </h2>
        </div>
        <div style="width: 34%; display: flex; flex-direction: column; align-items: center; text-align: center; box-sizing: border-box;">
            <img src="https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEj5ID9UpHr05bO8K8i0HwMQ9q_2b06Xro13lxAcO1-ysLHvItI9MOaNHBTon1J-WBVgnMyXcL0beZshv0AhVaUvF-LKcJO58txXA559dgX-lIOangwixkYJC246y4bxr-p-F4mQQNn0XJJO/s1600/display_monitor_tv.png">
            電視就屬於顯示器的一種
        </div>
    </div>
</div>

---
transition: slide-left
layout: top-title
color: dark
---

::title::

<h1 style="font-size: 2.5rem; font-weight: bold;">1602LCD 實作</h1>

::content::

<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; align-items: flex-start; box-sizing: border-box;">
        <div style="width: 66%; padding-right: 20px; box-sizing: border-box;">
            <h2>
            使用 library: LiquidCrystal I2C<br>
            </h2>
        </div>
        <div style="width: 34%; display: flex; flex-direction: column; align-items: center; text-align: center; box-sizing: border-box;">
            <img src="">
        </div>
    </div>
</div>

---
transition: slide-left
layout: top-title
color: dark
---

::title::

<h1 style="font-size: 2.5rem; font-weight: bold;">"Internet" of Things</h1>

::content::

<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; align-items: flex-start; box-sizing: border-box;">
        <div style="width: 66%; padding-right: 20px; box-sizing: border-box;">
            <h2><span style="background:#FFE45E; color:black;">網際網路 (Internet)</span> 是現代資訊傳遞與裝置連線的核心基石。在物聯網的應用場景中，為了讓感測器、微控制器與雲端平台能夠順暢溝通，發展出了多種<span style="background:#FFE45E; color:black;">專門的通訊協定與模式</span>，如藍芽、Wi-Fi 與 MQTT。其中，Wi-Fi 是建立網路連線的關鍵技術；而 MQTT 則是依靠網路連線，作為訊息傳輸的應用協定。
            </h2>
        </div>
        <div style="width: 34%; display: flex; flex-direction: column; align-items: center; text-align: center; box-sizing: border-box;">
            <img src="https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEgwgl0cMC82wco1Na4bUEsiIgOCi9cQUxkTt-eKnOTZqhTfi_YdfU0ECx2bUesUctfAKhau_QaV-5T62XHzfq1fR52gZki0TMdYZfxwG2RzjD276k7J-A2bFmtuDFxCwwn4bbhuth8SgMpk/s800/wifi_yes.png">
            Wi-Fi 已是生活不可或缺的一部份
        </div>
    </div>
</div>

---
transition: slide-left
layout: top-title
color: dark
---

::title::

<h1 style="font-size: 2.5rem; font-weight: bold;">SoftAP + 1602LCD 實作作業</h1>

::content::

<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; align-items: flex-start; box-sizing: border-box;">
        <div style="width: 66%; padding-right: 20px; box-sizing: border-box;">
            <h2>
            # 本日作業<br>
            要求：<br>
            1.<span style="background:#FFE45E; color:black;">修改</span>範例程式並燒錄進 Nano 33 IoT 中<br>
            2.連線網路並進入 1602 LCD 顯示的 ip <br>
            3.輸入座號與<span style="background:#FFE45E; color:black;">Happy Moon festival!</span><br><br>
            繳交要求與配分：<br>
            <span style="background:#FFE45E; color:black;">diagram.json</span> (30%)<br>
            程式檔 (.ino檔) (30%)<br>
            送出訊息後的手機截圖 (20%)<br>
            LCD 執行結果 照片(20%)<br>
            </h2>
        </div>
        <div style="width: 34%; display: flex; flex-direction: column; align-items: start; text-align: start; box-sizing: border-box;">
            範例程式：<br>

```cpp
#include <SPI.h>
#include <WiFiNINA.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

char ssid[] = "兩人班級座號 e.g:201**201**";
char pass[] = "半形英數 >= 8 位";
int status = WL_IDLE_STATUS;

WiFiServer server(80);
LiquidCrystal_I2C lcd(0x27, 16, 2);

String currentLine = "";
String seats = "Seat No.";
String message = "No Msg";

String urlDecode(String input) {
    String decoded = "";
    char c;
    for (unsigned int i = 0; i < input.length(); i++) {
        c = input.charAt(i);
        if (c == '+') {
            decoded += ' ';
        } else if (c == '%' && i + 2 < input.length()) {
            char hex1 = input.charAt(i + 1);
            char hex2 = input.charAt(i + 2);
            int value = 0;
            if (hex1 >= '0' && hex1 <= '9') value += (hex1 - '0') * 16;
            else if (hex1 >= 'A' && hex1 <= 'F') value += (hex1 - 'A' + 10) * 16;
            else if (hex1 >= 'a' && hex1 <= 'f') value += (hex1 - 'a' + 10) * 16;

            if (hex2 >= '0' && hex2 <= '9') value += (hex2 - '0');
            else if (hex2 >= 'A' && hex2 <= 'F') value += (hex2 - 'A' + 10);
            else if (hex2 >= 'a' && hex2 <= 'f') value += (hex2 - 'a' + 10);

            decoded += (char)value;
            i += 2;
        } else {
            decoded += c;
        }
    }
    return decoded;
}

void updateLCD() {
    lcd.clear();

    String fullText = seats + " " + message;

    String line1 = "";
    if (fullText.length() > 0) {
        line1 = fullText.substring(0, min((int)fullText.length(), 16));
    }

    String line2 = "";
    if (fullText.length() > 16) {
        line2 = fullText.substring(16, min((int)fullText.length(), 32));
    }

    lcd.setCursor(0, 0);
    lcd.print(line1);

    if (line2.length() > 0) {
        lcd.setCursor(0, 1);
        lcd.print(line2);
    }
}

void setup() {
    Wire.begin();
    lcd.init();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Starting AP...");

    if (WiFi.status() == WL_NO_MODULE) {
        lcd.clear();
        lcd.print("WiFi Mod Failed");
        while (true);
    }

    status = WiFi.beginAP(ssid, pass);
    if (status != WL_AP_LISTENING) {
        lcd.clear();
        lcd.print("AP Start Failed");
        while (true);
    }

    delay(10000);
    server.begin();

    updateLCD();
}

void loop() {
    WiFiClient client = server.available();

    if (client) {
        currentLine = "";
        while (client.connected()) {
            if (client.available()) {
                char c = client.read();
                if (c == '\n') {
                    if (currentLine.length() == 0) {
                        client.println("HTTP/1.1 200 OK");
                        client.println("Content-Type: text/html");
                        client.println("Connection: close");
                        client.println();
                        client.println("<!DOCTYPE HTML>");
                        client.println("<html>");
                        client.println("<head><meta name=\"viewport\" content=\"width=device-width, initial-scale=1\"></head>");
                        client.println("<body><h1>Nano 33 IoT Controller</h1>");
                        client.println("<p>Current Seats: " + seats + "</p>");
                        client.println("<p>Current Message: " + message + "</p>");
                        client.println("<form action=\"/submit\" method=\"GET\">");
                        client.println("Seats (e.g. 10 11): <input type=\"text\" name=\"seats\" value=\"" + seats + "\"><br><br>");
                        client.println("Message: <input type=\"text\" name=\"msg\" value=\"" + message + "\"><br><br>");
                        client.println("<input type=\"submit\" value=\"Send\">");
                        client.println("</form>");
                        client.println("</body></html>");
                        break;
                    } else {
                        if (currentLine.startsWith("GET /submit?")) {
                            int seatsParam = currentLine.indexOf("seats=");
                            int msgParam = currentLine.indexOf("&msg=");
                            int endIdx = currentLine.indexOf(" HTTP/");

                            if (seatsParam != -1 && msgParam != -1 && endIdx != -1) {
                                String rawSeats = currentLine.substring(seatsParam + 6, msgParam);
                                String rawMsg = currentLine.substring(msgParam + 5, endIdx);

                                seats = urlDecode(rawSeats);
                                message = urlDecode(rawMsg);

                                updateLCD();
                            }
                        }
                        currentLine = "";
                    }
                } else if (c != '\r') {
                    currentLine += c;
                }
            }
        }
        delay(1);
        client.stop();
    }
}
```

</div>
    </div>
</div>


---
transition: slide-left
layout: top-title
color: dark
---

::title::

<h1 style="font-size: 2.5rem; font-weight: bold;">補充：網頁 html 碼</h1>

::content::

```html
<!DOCTYPE HTML>
<html>
<head>
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <title>Nano 33 IoT Controller</title>
</head>
<body>
    <h1>Nano 33 IoT Controller</h1>
    
    <p>Current Seats: Seat No.</p>
    <p>Current Message: No Msg</p>
    
    <form action="/submit" method="GET">
        Seats (e.g. 10 11): <input type="text" name="seats" value="Seat No."><br><br>
        Message: <input type="text" name="msg" value="No Msg"><br><br>
        <input type="submit" value="Send">
    </form>
</body>
</html>
```


---
transition: slide-left
layout: top-title
color: dark
routeAlias: w5
---

::title::

<h1 style="font-size: 2.5rem; font-weight: bold;">MQTT</h1>

::content::

<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; align-items: flex-start; box-sizing: border-box;">
        <div style="width: 50%; padding-right: 20px; box-sizing: border-box;">
            <h2>相較於 <span style="background:#FFE45E; color:black;">AP (Access Point)</span> 模式，<span style="background:#FFE45E; color:black;">STA (Station)</span> 模式更常用於物聯網裝置，主因是它能讓裝置連線至區域網路與網際網路，進而實現雲端資料同步與遠端遙控。<br>而在 STA 模式下，MQTT 是最常使用的通訊協定，其<span style="background:#FFE45E; color:black;">極輕量化的訊息標頭</span>特別適合頻寬有限或網路環境較差的物聯網場景。
            </h2>
        </div>
        <div style="width: 50%; display: flex; flex-direction: column; align-items: center; text-align: center; box-sizing: border-box;">
            <img src="https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEiMkWTgmV9BYroLHK2MVxrXr8Usa5P_qDomSj9mGDrh3HbPaxg13mAVbbNTGhk41KyAE7p4L4k-LZtH-ltPXQVt9tiKwzX0OH6c2lnLGuS1cQ3P2rgEuU4AVhlYLz6s68L-H6CxqOuzlg8/s800/internet_mono_things.png">
            物聯「網」
        </div>
    </div>
</div>

---
transition: slide-left
layout: top-title
color: dark
---

::title::

<h1 style="font-size: 2.5rem; font-weight: bold;">MQTT 原理</h1>

::content::

<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; align-items: flex-start; box-sizing: border-box;">
        <div style="width: 60%; padding-right: 20px; box-sizing: border-box;">
            <h2>MQTT 結構較為特殊，以 Broker (代理伺服器) 為核心，<span style="background:#FFE45E; color:black;">透過「發布/訂閱」機制進行訊息調度</span>。使用者可對特定的 Topic (主題) 進行 Publish (發布) 或 Subscribe (訂閱)。
            由於 Topic 支援多層級結構，物聯網架構常藉此將不同區域、感測器種類與應用情境進行清晰劃分與管理。
            </h2>
            <p v-click="1"><a href="https://jetsion.com/dashboard.html">捷上科技儀表板</a></p>
        </div>
        <div style="width: 40%; display: flex; flex-direction: column; align-items: center; text-align: center; box-sizing: border-box;">
            <img src="https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEgFEkDApOkwJSKRr0WAp-B9ieG43cMuZQCB-6yQqX7GArn1WRbl1_kUw5O-CZRpGUM9TCguNSiSKDh-mJuzmkfN8BQKMFzUZsFK6biKA7sOZFzLBkmWoOOoIo0slDxChZF0Q7twBJPfjSbL/s800/computer_cloud_system.png">
            Broker 是 MQTT 的核心
        </div>
    </div>
</div>


---
transition: slide-left
layout: top-title
color: dark
routeAlias: w6
---

::title::

<h1 style="font-size: 2.5rem; font-weight: bold;">Side Project 解說 (Ⅰ)</h1>

::content::

<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; align-items: flex-start; box-sizing: border-box;">
        <div style="width: 60%; padding-right: 20px; box-sizing: border-box;">
            <h2>Side Project (個人專案) 發想</h2>
            <h2 v-click="1">1. 觀察生活、找出問題、拆解問題</h2>
            <h2 v-click="2">e.g. 當我想要在桌上有個 <span style="background:#FFE45E; color:black;">TODO list 或是 dashboard (儀錶板)</span>，同時也想要有個能夠當我不在座位時，來到我座位的人<span style="background:#FFE45E; color:black;">能知道我可能在哪</span>
            </h2>
            <h2 v-click="3">標起來的都需要一個螢幕 (顯示器)<br><span  v-click="4">也需要知道我人在不在座位</span><br><span style="background:#FFE45E; color:black;" v-click="5">But HOW?</span></h2>
        </div>
        <div style="width: 40%; display: flex; flex-direction: column; align-items: center; text-align: center; box-sizing: border-box;">
            <img style="width: 100%; height: auto;" src="https://cdn.7tv.app/emote/01F6W9KDJ00007WR3JGSXZVR14/4x.webp">
        </div>
    </div>
</div>


---
transition: slide-left
layout: top-title
color: dark
---

::title::

<h1 style="font-size: 2.5rem; font-weight: bold;">Side Project 解說 (Ⅱ)</h1>

::content::

<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; align-items: flex-start; box-sizing: border-box;">
        <div style="width: 60%; padding-right: 20px; box-sizing: border-box;">
            <h2>Side Project (個人專案) 發想</h2>
            <h2>2. 尋找解方</h2>
<h2 v-click="1">

- 顯示 TODO list / Dashboard 和人的大致位置 — 使用顯示器顯示
  - 大致位置可以分成行事曆安排與臨時活動
- 人在/不在怎樣判斷? 

<span v-click="2">(WIFI, Bluetooth, CoAP, LoRa, RFID...)</span>


</h2>
        </div>
        <div style="width: 40%; display: flex; flex-direction: column; align-items: center; text-align: center; box-sizing: border-box;">
            <img style="width: 100%; height: auto;" src="https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEgaG-Dft9EvaMucq8nwD6HGoUEuOTpcdx0DLcP4wgCzW7tgc0LIAcZd9tucsTIscTFrVUpK9JULHzEeR_DtNyDdAoTAFlKg1qq0elh7ymZX2IJaSEaGp0YArAhJwuqnAz4cuxXOU2_oi5VA/s800/computer_search_kensaku.png">
        </div>
    </div>
</div>

---
transition: slide-left
layout: top-title
color: dark
---

::title::

<h1 style="font-size: 2.5rem; font-weight: bold;">Side Project 解說 (Ⅳ)</h1>

::content::

<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; align-items: flex-start; box-sizing: border-box;">
        <div style="width: 60%; padding-right: 20px; box-sizing: border-box;">
            <h2>Side Project (個人專案) 發想</h2>
            <h2>3. 處理問題</h2>
            <h2 v-click="1">找到適合的[裝置](https://docs.waveshare.net/ESP32-S3-Touch-LCD-7B/)</h2>
            <h2 v-click="2">使用藍芽作為人在 / 不在判斷依據
            </h2>
            <h2 style="background:#FFE45E; color:black;" v-click="3">手機的藍芽會一直開著，而且能根據 RSSI 作為判斷距離的依據
            </h2>
            <h2 v-click="4">使用 MQTT 傳送行事曆資訊與手動更新資訊
            </h2>
            <h2 v-click="5">使用程式解決位置判斷、UI 控制、資料抓取與發佈 MQTT 訊息等
            </h2>
        </div>
        <div style="width: 40%; display: flex; flex-direction: column; align-items: center; text-align: center; box-sizing: border-box;">
            <img style="width: 100%; height: auto;" src="https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEgJWP8a9vbGKmeUKbagxvtnL6XsYxKaKeQ01Vm8uiQPdkAdpUQtSGaICZO9MY5P-uzPFhJ_i6txSb8aSjOlxNEgMTJEi8bh0QkHNv8L-96G4uERtiwIEDn7F9dj8Vie7_vCLxqOIH6Qtt0B/s800/job_programmer.png">
        </div>
    </div>
</div>

---
transition: slide-left
layout: top-title
color: dark
---

::title::

<h1 style="font-size: 2.5rem; font-weight: bold;">Side Project 判斷邏輯解說</h1>

::content::

<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; align-items: flex-start; box-sizing: border-box;">
<div style="width: 100%; padding-right: 20px; box-sizing: border-box; max-height: 400px; overflow-y: auto;">

```mermaid
flowchart TD
    Start([開始: update_ui_status]) --> CheckBLE{ BLE 裝置近場偵測<br/>millis - lastTargetFoundTime &lt; 30s ? }
    CheckBLE -->|是: 人在| SetPresent[isPresent = true]
    CheckBLE -->|否: 人不在| SetAbsent[isPresent = false]
    
    SetPresent --> CheckUploadRecent
    SetAbsent --> CheckUploadRecent
    
    CheckUploadRecent{ 是否有 P1 留言且收受時間 &lt; 5分鐘 ? }
    CheckUploadRecent -->|是| ModeP1[模式: P1 upload 留言<br/>內容: mqttUploadMsg<br/>顏色: 黃色 #FACC15<br/>型態: 單行跑馬燈]
    CheckUploadRecent -->|否| CheckCal{ 日曆是否有事件<br/>calendarStatus != '人不在' ? }
    
    CheckCal -->|是| ModeP2[模式: P2 日曆排程<br/>內容: calendarStatus<br/>顏色: 天藍色 #38BDF8<br/>型態: 單行跑馬燈]
    CheckCal -->|否| CheckPresence{ isPresent 為真 人在 ? }
    
    CheckPresence -->|是| ModeP3[模式: P3 人在儀表板<br/>顯示: Dashboard 視覺化容器<br/>內容: 7天 Coding 圖表 + 今日進度環]
    CheckPresence -->|否| CheckUploadExpired{ 是否有 P4 舊留言<br/>過期但尚未自動清除 ? }
    
    CheckUploadExpired -->|是| ModeP4[模式: P4 upload 過期舊留言<br/>內容: mqttUploadMsg<br/>顏色: 紅色 #F87171<br/>型態: 單行跑馬燈]
    CheckUploadExpired -->|否| ModeP5[模式: P5 人不在預設<br/>內容: calendarStatus 人不在<br/>顏色: 灰藍色 #94A3B8<br/>型態: 單行跑馬燈]
    
    ModeP1 --> SwitchUI[切換及繪製 UI 畫面]
    ModeP2 --> SwitchUI
    ModeP3 --> SwitchUI
    ModeP4 --> SwitchUI
    ModeP5 --> SwitchUI
    
    SwitchUI --> End([結束本次 UI 檢查])
```

</div>
        <!-- <div style="width: 40%; display: flex; flex-direction: column; align-items: center; text-align: center; box-sizing: border-box;">
            <img style="width: 100%; height: auto;" src="https://cdn.7tv.app/emote/01F6W9KDJ00007WR3JGSXZVR14/4x.webp">
        </div> -->
    </div>
</div>


---
transition: slide-left
layout: top-title
color: dark
---

::title::

<h1 style="font-size: 2.5rem; font-weight: bold;">MQTT 實作 (ESP32 × MQTTGO.io)</h1>

::content::

<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; align-items: flex-start; box-sizing: border-box;">
        <div style="width: 100%; padding-right: 20px; box-sizing: border-box;">
            <h2><h1>作業要求：</h1><br>正確接線，使用上課教的 Blockly 程式做到以下事項：<br>1. 連線 Wifi (限2.4G)<br>2. 使用 MQTT 通訊協定連線至 mqttgo.io，client-ID 為 WFSH_201** (**為座號)<br>3. MQTT 之帳號與密碼不需要<br>4. 每隔一秒，發送訊息至 WFSH/IoT/201**/Ultrasonic_dis 中<br>5. 於 https://mqttgo.io/ 中訂閱自己發布的訊息並顯示在儀表板中，儀表板類型為折線圖，名稱為距離，數值區間為 0~400，單位為cm<br><br><h1>繳交要求與配分詳見 Classroom</h1></h2>
        </div>
    </div>
</div>

---
transition: slide-left
layout: top-title
color: dark
routeAlias: w7
---
::title::

<h1 style="font-size: 2.5rem; font-weight: bold;">MQTT 實作 (Ⅱ)</h1>

::content::

<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; align-items: flex-start; box-sizing: border-box;">
        <div style="width: 100%; padding-right: 20px; box-sizing: border-box;">
            <h2><h1>作業要求：</h1><br>正確接線，使用上課教的程式做到以下事項：<br>1. 連線 Wifi (限2.4G)<br>2. 使用 MQTT 通訊協定連線至 mqttgo.io，client-ID 為 WFSH_201** (**為座號)<br>3. 訂閱頻道 WFSH/IoT/201**/Subscribe <br>4. 正確將收到的訊息展示在 1602LCD 上<br>5. 拍照紀錄後在收到訊息後的一分鐘內至 WFSH/IoT/201**/Publish 發布(推播)收到的訊息<br><br><h1>繳交要求與配分詳見 Classroom</h1></h2>
        </div>
    </div>
</div>


---
layout: iframe
url: ./passboard.html
---

---
transition: slide-left
layout: top-title
color: dark
routeAlias: w10
---
::title::

<h1 style="font-size: 2.5rem; font-weight: bold;">程式整合</h1>

::content::

<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; align-items: flex-start; box-sizing: border-box;">
        <div style="width: 60%; padding-right: 20px; box-sizing: border-box;">
            <h2>
                整合兩個以上的功能進同一份程式中，<span style="background:#FFE45E; color:black;">需要理解每段程式的作用與程式的基礎架構</span>。<br>
                以 Arduino 程式為例，有 C/C++ 的<span style="background:#FFE45E; color:black;">引用 (#include) 段落</span>和固定兩個<span style="background:#FFE45E; color:black;">名為 setup() 與 loop() 的函式 (function)</span>。<br>
                <p v-click="1">簡單來說，要整合多份程式的話：</p><p v-click="2">引用區段放一起</p><p v-click="3">setup() 裡的放一起</p><p v-click="4">loop() 裡的放一起</p>
            </h2>
        </div>
        <div style="width: 40%; display: flex; flex-direction: column; align-items: center; text-align: center; box-sizing: border-box;">
            <img style="width: 100%; height: auto;" src="https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEjWSW1L4jHqO45p529f-2nIpM9oGfmTZEF7HDPSXPEVSxPefi5I7X1jus4ZHG2eG56S4sf5CjYipSprY8YbLZTCm7AQYCfOhI9OMwJgip_J7jtM_nSMXkvTsz2wicBW3bgIPpe4nGWAEkM/s800/copy_and_paste.png">
        </div>
    </div>
</div>

---
transition: slide-left
layout: top-title
color: dark
---
::title::

<h1 style="font-size: 2.5rem; font-weight: bold;">藍芽點亮 LED</h1>

::content::

<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; align-items: flex-start; box-sizing: border-box;">
        <div style="width: 60%; padding-right: 20px; box-sizing: border-box;">
            <h2>
                整合兩個以上的功能進同一份程式中，<span style="background:#FFE45E; color:black;">需要理解每段程式的作用與程式的基礎架構</span>。<br>
                以 Arduino 程式為例，有 C/C++ 的<span style="background:#FFE45E; color:black;">引用 (#include) 段落</span>和固定兩個<span style="background:#FFE45E; color:black;">名為 setup() 與 loop() 的函式 (function)</span>。<br>
                <p v-click="1">簡單來說，要整合多份程式的話：</p><p v-click="2">引用區段放一起</p><p v-click="3">setup() 裡的放一起</p><p v-click="4">loop() 裡的放一起</p>
            </h2>
        </div>
        <div style="width: 40%; display: flex; flex-direction: column; align-items: center; text-align: center; box-sizing: border-box;">
            <img style="width: 100%; height: auto;" src="https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEjWSW1L4jHqO45p529f-2nIpM9oGfmTZEF7HDPSXPEVSxPefi5I7X1jus4ZHG2eG56S4sf5CjYipSprY8YbLZTCm7AQYCfOhI9OMwJgip_J7jtM_nSMXkvTsz2wicBW3bgIPpe4nGWAEkM/s800/copy_and_paste.png">
        </div>
    </div>
</div>


---
transition: slide-left
layout: top-title
color: dark
routeAlias: w12
---
::title::

<h1 style="font-size: 2.5rem; font-weight: bold;">判斷邏輯</h1>

::content::

<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; align-items: flex-start; box-sizing: border-box;">
        <div style="width: 60%; padding-right: 20px; box-sizing: border-box;">
            <h2>
                在決定一件事情時，通常不會只依靠單一條件就能定案。<br>例如 Blockly 遊戲：小鳥 - 第八關
            </h2><br>
            <img style="width: 100%; height: auto;" src="./public/bird-8-sol.png" v-click="1">
        </div>
        <div style="width: 40%; display: flex; flex-direction: column; align-items: center; text-align: center; box-sizing: border-box;">
            <img style="width: 100%; height: auto;" src="./public/bird-8.png">
        </div>
    </div>
</div>

---
transition: slide-left
layout: top-title
color: dark
---
::title::

<h1 style="font-size: 2.5rem; font-weight: bold;">判斷邏輯</h1>

::content::

<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; align-items: flex-start; box-sizing: border-box;">
        <div style="width: 40%; padding-right: 20px; box-sizing: border-box;">
            <h2>
                設計物聯網等程式邏輯時，核心在於針對多維度的環境條件，確立「單一情境對單一行為」的明確映射關係；以數學語言描述，就是針對所有輸入變數的狀態組合，窮舉並求解出完整的輸出空間。
            </h2>
        </div>
        <div style="width: 50%; display: flex; flex-direction: column; align-items: center; text-align: center; box-sizing: border-box;">
            <table>
                <thead>
                    <tr>
                    <th>A (還沒吃到蟲)</th>
                    <th>B (x &lt; 50)</th>
                    <th>C (y &lt; 50)</th>
                    <th>方向</th>
                    </tr>
                </thead>
                <tbody>
                    <tr>
                    <td>0</td>
                    <td>0</td>
                    <td>0</td>
                    <td>右上</td>
                    </tr>
                    <tr>
                    <td>0</td>
                    <td>0</td>
                    <td>1</td>
                    <td>左上</td>
                    </tr>
                    <tr>
                    <td>0</td>
                    <td>1</td>
                    <td>0</td>
                    <td>不做動作</td>
                    </tr>
                    <tr>
                    <td>0</td>
                    <td>1</td>
                    <td>1</td>
                    <td>不做動作</td>
                    </tr>
                    <tr>
                    <td>1</td>
                    <td>0</td>
                    <td>0</td>
                    <td>右下</td>
                    </tr>
                    <tr>
                    <td>1</td>
                    <td>0</td>
                    <td>1</td>
                    <td>不做動作</td>
                    </tr>
                    <tr>
                    <td>1</td>
                    <td>1</td>
                    <td>0</td>
                    <td>不做動作</td>
                    </tr>
                    <tr>
                    <td>1</td>
                    <td>1</td>
                    <td>1</td>
                    <td>右上</td>
                    </tr>
                </tbody>
            </table>
        </div>
    </div>
</div>

---
transition: slide-left
layout: top-title
color: dark
---
::title::

<h1 style="font-size: 2.5rem; font-weight: bold;">現實生活中的例外</h1>

::content::

<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; align-items: flex-start; box-sizing: border-box;">
        <div style="width: 60%; padding-right: 20px; box-sizing: border-box;">
            <h2>
                但我們來看一個例子
            </h2>
            <table>
                <thead>
                    <tr>
                    <th>溫度 (&gt;26°C)</th>
                    <th>濕度 (&gt;70%)</th>
                    <th>行為</th>
                    </tr>
                </thead>
                <tbody>
                    <tr>
                        <td>0</td>
                        <td>0</td>
                        <td>不開冷氣</td>
                    </tr>
                    <tr>
                        <td>0</td>
                        <td>1</td>
                        <td>開除濕 / 送風</td>
                    </tr>
                    <tr>
                        <td>1</td>
                        <td>0</td>
                        <td>開冷氣（低風速）</td>
                    </tr>
                    <tr>
                        <td>1</td>
                        <td>1</td>
                        <td>開冷氣（強力運轉）</td>
                    </tr>
                </tbody>
            </table>
            <h2 v-click="1">室溫 25.9°C、濕度 88%<br>室溫 32°C、濕度 55%<br>感受看看，原先的邏輯合理嗎?</h2>
        </div>
        <div style="width: 40%; display: flex; flex-direction: column; align-items: center; text-align: center; box-sizing: border-box;">
            <img style="width: 100%; height: auto;" src="https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEjlDzi0cq7pccEy403bZD1Sh8Snnt9dTYNOwCHvALQNZpfTwVMSgrX3z5b6Nyis-tu13thcuoU-Vdz_PYmsjTg3OWYm4ccgBCnVpZZyzyYeMAYHqw77LXfyiEt-MuRx6tk9o6UOUAG5HHw/s800/setsuden_airconditioner_man.png">
        </div>
    </div>
</div>

---
transition: slide-left
layout: top-title
color: dark
---
::title::

<h1 style="font-size: 2.5rem; font-weight: bold;">模糊控制</h1>

::content::

<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; align-items: flex-start; box-sizing: border-box;">
        <div style="width: 60%; padding-right: 20px; box-sizing: border-box;">
            <h2>
                模糊控制 (Fuzzy Control) 的做法，是先將原本非冷即熱的大分類拆解為平滑的漸層區間，以 0 ~ 1 的小數量化「有多冷或多熱」；接著結合濕度的程度比例進行綜合評估，最終推算出最貼近體感需求的冷氣功率。
                <br>
                這項技術早期便廣泛落地於民生與交通領域，例如智慧家電（洗衣機、冷氣）以及日本仙台地下鐵的<a href="https://doi.org/10.1109/AIIA.1988.13336">電車自動駕駛系統</a>，都是模糊控制的經典代表。
            </h2>
        </div>
        <div style="width: 40%; display: flex; flex-direction: column; align-items: center; text-align: center; box-sizing: border-box;">
            <img style="width: 100%; height: auto;" src="https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEjlDzi0cq7pccEy403bZD1Sh8Snnt9dTYNOwCHvALQNZpfTwVMSgrX3z5b6Nyis-tu13thcuoU-Vdz_PYmsjTg3OWYm4ccgBCnVpZZyzyYeMAYHqw77LXfyiEt-MuRx6tk9o6UOUAG5HHw/s800/setsuden_airconditioner_man.png">
        </div>
    </div>
</div>

---
transition: slide-left
layout: top-title
color: dark
---
::title::

<h1 style="font-size: 2.5rem; font-weight: bold;">冷氣的例子</h1>

::content::

<FuzzyAcDemo />

---
transition: slide-left
layout: top-title
color: dark
routeAlias: w13
---
::title::

<h1 style="font-size: 2.5rem; font-weight: bold;">物聯網的下一階段</h1>

::content::

<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; align-items: flex-start; box-sizing: border-box;">
        <div style="width: 50%; padding-right: 20px; box-sizing: border-box;">
            <h2>傳統物聯網聚焦於「區域性自動化」(如空調控溫、自動窗簾)，其運作高度仰賴人工預設的<span style="background:#FFE45E; color:black;">數位邏輯與專家系統</span>。然而，面對日益複雜的環境變數與多元的使用需求，僅憑固定規則已難以做到精準的動態調整。<br>為突破這項瓶頸，業界開始<span style="background:#FFE45E; color:black;">將 AI 的自主判斷能力</span>部署於終端裝置，這股趨勢也催生了「邊緣 AI (Edge AI)」。</h2>
        </div>
        <div style="width: 50%; display: flex; flex-direction: column; align-items: center; text-align: center; box-sizing: border-box;">
        <a data-flickr-embed="true" href="https://www.flickr.com/photos/dullhunk/7214525854" title="Engineering flowchart 🔨 Does it Move? Should it? #WD40 vs. Duct Tape (original artist unknown)" style="display: flex; justify-content: left; align-items: center; height: 100%; width: 100%;">
            <img src="https://live.staticflickr.com/8160/7214525854_733237dd83_z.jpg" alt="Engineering flowchart 🔨 Does it Move? Should it? #WD40 vs. Duct Tape (original artist unknown)" style="height: auto; width: auto; object-fit: contain; display: block;" />
        </a>
        專家系統示意圖
        </div>
    </div>
</div>

---
transition: slide-left
layout: top-title
color: dark
---
::title::

<h1 style="font-size: 2.5rem; font-weight: bold;">機器學習?</h1>

::content::

<h2>機器學習的出現解決了專家系統的缺點，<span style="background:#FFE45E; color:black;">給予機器處理過的資料進行學習</span>。<span v-click="2">後續又衍生出了<span style="background:#FFE45E; color:black;">模仿人類大腦運作模式</span>以讓機器<span style="background:#FFE45E; color:black;">自行處理資料並學習</span>的深度學習。</span></h2>
<Admonition title="Note" width="100%" icon="pixel:notebook" color=cyan-light>
    <h2 style="font-size: 2rem;">人工智慧 <span style="font-size: 1.5rem;">在機器中模擬或複製人類智慧。</span></h2>
    <Admonition title="Note" width="auto" style="margin-left: 50px;" v-click="1" icon="pixel:notebook" color=blue-light>
        <h2 style="font-size: 2rem;">機器學習 (Machine Learning)</h2>
        <h2>讓機器從資料中學習，準確執行特定工作。</h2>
        <Admonition title="Note" width="auto" style="margin-left: 50px;" v-click="2" icon="pixel:notebook" color=indigo-light>
            <h2 style="font-size: 2rem;">深度學習 (Deep Learning)</h2>
            <h2>自動從資料中學習特徵，藉此提高準確度並處理更複雜的模式 </h2>
        </Admonition>
    </Admonition>
</Admonition>

---
transition: slide-left
layout: top-title
color: dark
---
::title::

<h1 style="font-size: 2.5rem; font-weight: bold;">機器學習?</h1>

::content::

<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; align-items: center; box-sizing: border-box;">
        <div style="width: 60%; padding-right: 20px; box-sizing: border-box;">
            <h2> 人類學習：

```mermaid
flowchart LR
    A1[規則與例題] --> A2((人類)) --> A3[規則 / 知識]
```

程式設計：

```mermaid
flowchart LR
    B1[資料與規則] --> B2((程式)) --> B3[結果]
```

機器學習：

```mermaid
flowchart LR
    C1[資料與正確結果] --> C2((機器學習
    演算法)) --> C3[規則 / 模型]
```
            
</h2>
		</div>
        <div style="width: 40%; box-sizing: border-box;">
            <img src="https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEg2dvuvi_VSVGkzORLeRYSzJid_WnW87vr8evE0R3UsfUvf-Mp5A9Ck5A6z5Nf8MwklomuG4s8lBtqE0EMieboxTAhyphenhyphenXzN8OGY_DfnFhsA_adweiu-CyYNWHRPrEf9rQ2C2-FAl6h2cTJfB/s800/ai_study_kikaigakusyu.png">
		</div>
	</div>
</div>

---
transition: slide-left
layout: top-title
color: dark
---

::title::

<h1 style="font-size: 2.5rem; font-weight: bold;">機器如何學習?</h1>

::content::

<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; align-items: center; box-sizing: border-box;">
        <div style="width: 60%; padding-right: 20px; box-sizing: border-box;">
            <h2>簡單來說，機器學習就是拿輸入和輸出回推過程，以攝氏溫標與華氏溫標為例。</h2>
            <script setup>
                import { ref } from 'vue'
                const copied = ref(false)
                const rawData = `0	32
10	50
20	68
25	77
30	86
35	95
40	104
50	122
100	212
-10	14`
                const copyData = () => {
                navigator.clipboard.writeText(rawData)
                copied.value = true
                setTimeout(() => copied.value = false, 2000)
                }
            </script>
體驗網站 (Ⅰ): <a href="https://www.graphpad.com/quickcalcs/linear1/">Liner Regulation Calculator</a><div style="margin-top: 20px;">
  <button @click="copyData" style="background: rgba(255, 255, 255, 0.1); color: #ccc; border: 1px solid rgba(255, 255, 255, 0.2); padding: 6px 12px; border-radius: 4px; cursor: pointer; font-size: 0.85em; font-family: monospace;">
    {{ copied ? '已複製' : '複製資料' }}
  </button>
</div>
            <h2><br>理論上，資料越多，機器歸納出的規則/模型就越好。</h2>
            體驗網站 (Ⅱ): <a href="https://quickdraw.withgoogle.com">Quick Draw!</a>
		</div>
        <div style="width: 40%; box-sizing: border-box;">
            <table style="background: rgba(255, 255, 255, 0.05); color: #fff; border-collapse: collapse; font-family: monospace; font-size: 0.9em;">
    <thead>
        <tr>
            <th style="padding: 6px 16px; border-bottom: 1px solid rgba(255,255,255,0.2); text-align: left;">℃</th>
            <th style="padding: 6px 16px; border-bottom: 1px solid rgba(255,255,255,0.2); text-align: left;">℉</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td style="padding: 4px 16px;">0</td>
            <td style="padding: 4px 16px;">32</td>
        </tr>
        <tr>
            <td style="padding: 4px 16px;">10</td>
            <td style="padding: 4px 16px;">50</td>
        </tr>
        <tr>
            <td style="padding: 4px 16px;">20</td>
            <td style="padding: 4px 16px;">68</td>
        </tr>
        <tr>
            <td style="padding: 4px 16px;">25</td>
            <td style="padding: 4px 16px;">77</td>
        </tr>
        <tr>
            <td style="padding: 4px 16px;">30</td>
            <td style="padding: 4px 16px;">86</td>
        </tr>
        <tr>
            <td style="padding: 4px 16px;">35</td>
            <td style="padding: 4px 16px;">95</td>
        </tr>
        <tr>
            <td style="padding: 4px 16px;">40</td>
            <td style="padding: 4px 16px;">104</td>
        </tr>
        <tr>
            <td style="padding: 4px 16px;">50</td>
            <td style="padding: 4px 16px;">122</td>
        </tr>
        <tr>
            <td style="padding: 4px 16px;">100</td>
            <td style="padding: 4px 16px;">212</td>
        </tr>
        <tr>
            <td style="padding: 4px 16px;">-10</td>
            <td style="padding: 4px 16px;">14</td>
        </tr>
    </tbody>
</table>
        </div>
	</div>
</div>

---
transition: slide-left
layout: top-title
color: dark
---

::title::

<h1 style="font-size: 2.5rem; font-weight: bold;">機器學習的弱點?</h1>

::content::

<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; align-items: center; box-sizing: border-box;">
        <div style="width: 60%; padding-right: 20px; box-sizing: border-box;">
            <h2>從 Quick Draw! 的體驗中，我們可以大致得知：機器<span style="background:#FFE45E; color:black;">在影像辨識上，主要仰賴的是「特徵」</span>。<br>
            接下來，試試 Google 推出的機器學習工具 <a href="https://teachablemachine.withgoogle.com/">Teachable Machine</a>。主題限定為形狀、顏色等外觀相近的不同事物。<br>例如：<a href="https://www.freecodecamp.org/news/chihuahua-or-muffin-my-search-for-the-best-computer-vision-api-cbda4d6b425d/">吉娃娃 & 葡萄乾馬芬</a>、<a href="https://today.line.me/tw/v3/article/ROPEXw">貴賓狗 & 炸雞</a></h2>
		</div>
        <div style="width: 40%; box-sizing: border-box;">
            <img src="https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEin_b5LhyeYSIgVjFCFJofWGihwfekPhVzYgh6nKvkB-_u_k8Nc3BtXdvGNcLEeMa4i8opPvdEY8H0Uzi4ZnVkf-n4PsrTzq7xOh5RoetP0SF2E5me1vlxGlOfKsVRoKxqifewWUQ7ysKSu/s800/ai_computer_sousa_robot.png">
		</div>
	</div>
</div>

---
transition: slide-left
layout: top-title
color: dark
---

::title::

<h1 style="font-size: 2.5rem; font-weight: bold;">深度學習?</h1>

::content::

<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; box-sizing: border-box;">
        <div style="width: 60%; padding-right: 20px; box-sizing: border-box;">
            <h2>深度學習是機器學習的一個分支，透過<span style="background:#FFE45E; color:black;">類神經網路 (Neural Network)</span> 模擬大腦神經運作，利用多層次結構自動從資料中萃取特徵與規律。而在處理圖像辨識時，表現最為出色的經典架構就是 <span style="background:#FFE45E; color:black;">CNN (Convolutional Neural Network, 卷積神經網路)</span>，我們透過一個實際範例來看看它是如何運作的。
            </h2><br><a href="https://poloclub.github.io/cnn-explainer/">CNN Explainer</a>
		</div>
    <script setup>
import { onMounted } from 'vue'
onMounted(() => {
  // 動態載入 Instagram 嵌入腳本
  if (!document.querySelector('script[src*="instagram.com/embed.js"]')) {
    const script = document.createElement('script')
    script.src = '//www.instagram.com/embed.js'
    script.async = true
    document.body.appendChild(script)
  } else if (window.instgrm) {
    // 如果腳本已存在，手動觸發 IG 重新掃描渲染
    window.instgrm.Embeds.process()
  }
})
</script>
        <div style="width: 40%; box-sizing: border-box; margin: auto;">
            <blockquote class="instagram-media" data-instgrm-permalink="https://www.instagram.com/reel/DFsMvixsAO5/?utm_source=ig_embed&amp;utm_campaign=loading" data-instgrm-version="14" style="background:#FFF; border:0; border-radius:3px; box-shadow:0 0 1px 0 rgba(0,0,0,0.5),0 1px 10px 0 rgba(0,0,0,0.15); margin: 1px; max-width:540px; min-width:326px; padding:0; width:99.375%; width:-webkit-calc(100% - 2px); width:calc(100% - 2px);">
            </blockquote>
        </div>
	</div>
</div>

---
transition: slide-left
layout: top-title
color: dark
---

::title::

<h1 style="font-size: 2.5rem; font-weight: bold;">機器學習的應用</h1>

::content::

<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; align-items: flex-start; box-sizing: border-box;">
        <div style="width: 50%; padding-right: 20px; box-sizing: border-box;">
            <h2><span style="background:#FFE45E; color:black;"></span>現今機器學習在影像辨識領域的常見應用包括：利用物件辨識實現科技執法，以及結合物件辨識與文字辨識，實現車牌辨識的自助停車等。</h2>
            Google 推出的機器學習框架: <br><a href="https://developers.google.com/edge/mediapipe/solutions/vision/object_detector">MediaPipe</a><br><a href="https://developers.google.com/edge/mediapipe/solutions/vision/object_detector">MediaPipe 網頁版</a>
        </div>
        <div style="width: 50%; display: flex; flex-direction: column; align-items: center; text-align: center; box-sizing: border-box;">
        <p><a href="https://commons.wikimedia.org/wiki/File:Detected-with-YOLO--Schreibtisch-mit-Objekten.jpg#/media/File:Detected-with-YOLO--Schreibtisch-mit-Objekten.jpg"><img src="https://thumb.wikimedia.org/wikipedia/commons/thumb/3/38/Detected-with-YOLO--Schreibtisch-mit-Objekten.jpg/1280px-Detected-with-YOLO--Schreibtisch-mit-Objekten.jpg?utm_source=en.wikipedia.org&amp;utm_campaign=imageinfo&amp;utm_content=thumbnail" alt="Detected-with-YOLO--Schreibtisch-mit-Objekten.jpg" height="823" width="1280"></a><br>By (<a href="//commons.wikimedia.org/wiki/User:MTheiler" title="User:MTheiler">MTheiler</a>) - <span class="int-own-work" lang="en">Own work</span>, <a href="https://creativecommons.org/licenses/by-sa/4.0" title="Creative Commons Attribution-Share Alike 4.0">CC BY-SA 4.0</a>, <a href="https://commons.wikimedia.org/wiki/Special:Redirect/page/75843378">Link</a></p>
        使用 YOLOv3 進行物件識別的範例
        </div>
    </div>
</div>