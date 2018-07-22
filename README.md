# June_Glasses STILL WRITING THE README COMEBACK LATER?
A Wireless DIY Smart glass using ESP8266 to send text from any client in the network using a get request.

#  DIY Smart Glasses

The project started as a fantasy. Though it is not ideal, It'll get the job done.

**What it can do:**  
It can display text which can be sent from any client wirelessly.

## Acknowledement: 
This project is inspired from this guy. He posted the problems he faced in each stage and how to fix it which was very helpful when I am building it. Please do check his site.

But we are going to only take the design aspect from his project and build our own custom glasses.

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
The design consist of all the above parts. The text from the display is refelected the mirror that is placed 45 degree to the axis and then magnified using a fresnel lens and then projected to a acrylic piece or any transparent reflective surface.
The magnification is required to increase the focus because human eyes cannot read or focus anything with in 10cm.
The initial prototypes were done with cardboard, easy to dismantle and put together.  

The final one is done using plastic from a CD holder box with soft plastic which can cut using scissors and stick all together using a glue gun.  

The clarity of the text can be improved using a real plano-convex lens, but it will make it heavy, bulky and it is not easy to cut. So, using a fresnel lens is kind of a good trade off.  


## Circuit Diagram:  
The tp4056 takes care of charging as well as discharging and gives protection to your battery. If you are going for a bigger battery then you have to modify the resister.     
Put the switch between the tp4056 and the circuit.
Solder the layout properly  and try to make it as small as possible.  
make sure you connect scl and sda properly to esp8266.  

## Programs:
The ESP8266 is programmed in arduino IDE. You can get the Arduino code here.
You may need ssd1306.h library which can be added using Manage Libraries section.
ESP8266 Libraries obviuosly.

To demostrate I used a python client, which code can be found here.


## Working:

I think these photos would do..  

## Future ideas:
 Possibilities are endless, we can make it more robust by giving it a 3d printed body. We can customize the circuit even more to combine tp4056 and our esp8266 circuit board to become a single board to make it more compact. Have a battery upgrade with same weight. Better quality lens, mirror and display maybe.

