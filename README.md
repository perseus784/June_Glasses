# STILL WRITING THE README COMEBACK LATER?  
# June Glasses
A Wireless DIY Smart glass using ESP8266 to send text from any client in the network using a get request.
<p align="left">
<img src="https://github.com/perseus784/June_Glasses/blob/master/media_files/device(2).jpg" width="600" height="400">
<img src="https://github.com/perseus784/June_Glasses/blob/master/media_files/hud(2).jpg" width="200" height="400" style="transform:rotate(90deg);">
</p>

#  DIY Smart Glasses
The project started as a fantasy. Though it is not ideal, It'll get the job done. It took me 40-45 hours totally to do it. 
The name is beacuse I started the project by June and can't think of a cool name..What's wrong with June Glasses anyways?

**What it can do:**  
It can display text which can be sent from any client wirelessly.

## Acknowledement: 
This project is inspired from ![this guy](https://hackaday.io/project/12211-arduino-glasses-a-hmd-for-multimeter). He posted the problems he faced in each stage and how to fix it which was very helpful when I am building it. Please do check his site.

But we are going to only take the design aspect from his project and build our own custom glasses to fit our needs.

## Features:  

* 30-40 minutes Continous operation time.
* Fully wireless.
* Very Extensible/ Flexible for any kind of interface. 
* Easy to build, cheap ($22/ Rs.1400).
* It's Cool.

## Parts Required:   

* ESP8266-01.
* 3.7v LiPo Battery 300 mAh.(Can be increased to adopt more )
* A TP4056 LiPo  Charge And Discharge Protection.(Please double check whether it has discharge protection too)
* 128 x 64 (0.96 inches) OLED Display.
* A simple Soldering setup.
* Glue Gun (It's really helpful for many household works).
* A dotted PCB, Wire bits, a switch and a female socket(4x2) for esp8266.


## Design:  
<p align="center">
<img src="https://github.com/perseus784/June_Glasses/blob/master/media_files/june_glasses.png" width="800" height="400">
</p>

The design consist of all the above mentioned parts. The text from the display is refelected the mirror that is placed 45 degree to the axis and then magnified using a fresnel lens and then projected to a acrylic piece or any transparent reflective surface.
<p align="left">
<img src="https://github.com/perseus784/June_Glasses/blob/master/media_files/planning(1).jpg" width="300" height="400">
<img src="https://github.com/perseus784/June_Glasses/blob/master/media_files/planning(2).jpg" width="300" height="400">
</p>
The magnification is required to increase the focus because human eyes cannot read or focus anything with in 10cm.
<p align="center">
<img src="https://github.com/perseus784/June_Glasses/blob/master/media_files/making1.jpg" width="800" height="400">
</p>

The initial prototypes were done with cardboard, easy to dismantle and put together.   

<p align="left">
<img src="https://github.com/perseus784/June_Glasses/blob/master/media_files/cardboard(1).jpg" width="300" height="400">
<img src="https://github.com/perseus784/June_Glasses/blob/master/media_files/cardboard(2).jpg" width="300" height="400">
</p>  

<p align="left">
<img src="https://github.com/perseus784/June_Glasses/blob/master/media_files/cardboard(3).jpg" width="300" height="400">
<img src="https://github.com/perseus784/June_Glasses/blob/master/media_files/cardboard(4).jpg" width="300" height="400">
</p>

The final one is done using plastic from a CD holder box with soft plastic which can cut using scissors and stick all together using a glue gun. 

<p align="center">
<img src="https://github.com/perseus784/June_Glasses/blob/master/media_files/making2.jpg" width="800" height="400">
</p>
<p align="center">
<img src="https://github.com/perseus784/June_Glasses/blob/master/media_files/device(3).jpg" width="800" height="400">
</p>
The clarity of the text can be improved using a real plano-convex lens, but it will make it heavy, bulky and it is not easy to cut. So, using a fresnel lens is kind of a good trade off.  

<p align="left">
<img src="https://github.com/perseus784/June_Glasses/blob/master/media_files/device(1).jpg" width="800" height="400">
<img src="https://github.com/perseus784/June_Glasses/blob/master/media_files/device(4).jpg" width="800" height="400">
</p>

## Circuit Diagram:  
<p align="center">
<img src="https://github.com/perseus784/June_Glasses/blob/master/media_files/circuit2.png" width="700" height="400">
</p> 

The tp4056 takes care of charging as well as discharging and gives protection to your battery. If you are going for a bigger battery then you have to modify the resister.
Put the switch between the tp4056 and the circuit. Make sure you connect scl and sda properly to esp8266.  

<p align="left">
<img src="https://github.com/perseus784/June_Glasses/blob/master/media_files/circuit(1).jpg" width="400" height="400">
<img src="https://github.com/perseus784/June_Glasses/blob/master/media_files/circuit(2).jpg" width="400" height="400">
</p>

Solder the layout properly  and try to make it as small as possible.  
<p align="center">
<img src="https://github.com/perseus784/June_Glasses/blob/master/media_files/circuit(3).jpg" width="700" height="400">
</p>

## Programs:
The ESP8266 is programmed in arduino IDE. You can get the Arduino code ![here](https://github.com/perseus784/June_Glasses/blob/master/esp8266.ino).
You may need ssd1306.h library which can be added using Manage Libraries section.
ESP8266 Libraries obviuosly.

To demostrate I used a python client, which code can be found ![here](https://github.com/perseus784/June_Glasses/blob/master/send_text.py).

## Working:

I think these photos would do..  
<p align="center">
<img src="https://github.com/perseus784/June_Glasses/blob/master/media_files/hud(1).jpg" width="800" height="400">
<img src="https://github.com/perseus784/June_Glasses/blob/master/media_files/hud(2).jpg" width="800" height="400">
 <img src="https://github.com/perseus784/June_Glasses/blob/master/media_files/hud(3).jpg" width="800" height="400">
<img src="https://github.com/perseus784/June_Glasses/blob/master/media_files/hud(4).jpg" width="800" height="400">
 <img src="https://github.com/perseus784/June_Glasses/blob/master/media_files/hud(5).jpg" width="800" height="400">
 <img src="https://github.com/perseus784/June_Glasses/blob/master/media_files/hud(6).jpg" width="800" height="400">
<img src="https://github.com/perseus784/June_Glasses/blob/master/media_files/hud(7).jpg" width="800" height="400">
</p>
<p align="center">
<img src="https://github.com/perseus784/June_Glasses/blob/master/media_files/working(1).jpg" width="800" height="400">
 <img src="https://github.com/perseus784/June_Glasses/blob/master/media_files/working(3).jpg" width="800" height="400">
</p>

## Future ideas:
 Possibilities are endless, we can make it more robust by giving it a 3d printed body. We can customize the circuit even more to combine tp4056 and our esp8266 circuit board to become a single board to make it more compact. Have a battery upgrade with same weight. Better quality lens, mirror and display maybe.

