---
title: "Custom-Lora-board"
author: "Ayush sen"
description: "It's a custom 4-layer Lora(long-range) board which can transmit data without any tower or network upto 15kms+ using very low power and it cannot be detected easily and not even be jammed because it can change its frequency very frequently . AS it dosn't use high power detecting its presence is likely Impossible which can be used in defence systems"
created_at: "2026-10-25"
---

# 26 October: Designed part 1 of schematic 

Spent the time researching on Lora board it's schematic which IC to use 
why we are using 32MHz oscillator , why 52 decoupling capacitors are needed and all
I faced many problems as the guide i am following is using KICAD 
and i am more familiar with EasyEDA std , So the schematic footprint wasn't matching for Both RP2040 and SX1262 
Although i managed to found it .Placed 2 decoupling capacitors one inductors and did the wiring between SX1262 and RP2040
Timelapse = https://lapse.hackclub.com/timelapse/a3xEVcMzM3OZ

<img width="1917" height="1078" alt="image" src="https://github.com/user-attachments/assets/98ffc4e7-a169-4546-8999-98d6973a9a5f" />


**Total time spent: 2 hours and 5 minutes**

# 29 October: Designed part 2 of SCHEMATIC

First i opened up my EasyEDA schematic page and rechecked all the footprints and connection 
and then i proceeded to the next part of the page . I understood why we need a  balun 
I understood that as an antenna has only one pin 
BUT RF signals are transferred from pins so we need to merge it that's why we need balun 
why we need 
Impedance Matching and filtering of signals 
One of the major issues i faced is 
The guide i was following was using Kicad and i am EasyEDA guy 
so in KICAD the unused PHYSICAL PINS FOR support or the ones which are internally connected are showed as one 
But in EASYEDA it follows the real hardware and shows all the pins 
Where u faced problem identifying which pins does what 
After some research i interconnected those same pins and used it as a PORT as it was in the guide
I was following a previous guide of Blueprint program of hackclub 
Here is the guide link = https://blueprint.hackclub.com/starter-projects/lora
After understanding the Filtering and Impedance matching i found out that 
there is one chip 0900FM15D0039  which does all for it 
so placed in my schematic put up all the ports as it was 
IN the last part i added one 12Mhz oscillator for RP2040 placed some decoupling capacitors some pull up resistors 
and what was given in the end part of guide 
then put W25Q128JVSIQ for External Flash memory 
and put the USB-C Receptable port and with AP2112K-3.3TRG1
This finished my schematic 
It almost took me 2hrs 30 mins 
but timelapse is recorded of 1hr 50mins 
SOme parts were cutt off due to my bad internet connection 
timelapse = https://lapse.hackclub.com/timelapse/OLFczxmGvfcU


<img width="1058" height="737" alt="image" src="https://github.com/user-attachments/assets/16996f4a-73b2-4dfe-9353-068891aa9228" />


**Total time spent: 2 hours and 30 minutes**

# 30 October: Assigning Footprints and placing components

When i rechecked my schematic i found that i missed some parts like some importants part that i fixed it in 1hr
Like from placing some inductors to some ICs.
Here First i started off by Assigning the footprints of the components and then placing them as it was shown 
the problems i faced In EasyEDA it comes with the prefixes of components but in KICAD it dosn't so when i was following the guide
It didn't exactly have the prefixes there 
so what i did is i followed how the blue lines which show how to connect where and gussed which component will be placed where 
Obviously it was so much confusing But somehow i managed to do 
so. After placing all the components i faced one more weird challenge that is 
I couldn't find the 2 more Decoup capacitors on 3v3 and GND rails 
Like they were vanished 
I rechecked my whole schematic , then updated PCB nothing changed and i was so stressed out 
A ongoing hardware help huddle was going on in half-life i joined their , showed my screen and they tried to help me 
but as the problem was so weird noone could help me and i lost hope and i decided too restart from scratch from tomorrow and will shift to Kicad 
i researched through the guide so AI bots too but nope not a single one of them helped me , so i slept a bit hopele
and some of the part which i will be providing the time lapse of didn't captured my extra 30mins due to my network issuse
timelapse = https://lapse.hackclub.com/timelapse/z8QKk3-AnuQC
timelapse = https://lapse.hackclub.com/timelapse/MUEcelZgJXrq

<img width="865" height="387" alt="image" src="https://github.com/user-attachments/assets/c434df09-8a5c-4351-bc1f-ffc0d166b19f" />
<img width="1023" height="480" alt="image" src="https://github.com/user-attachments/assets/e5ba9028-f32e-4dd4-8712-f5748a1080b1" />



**Total time spent: 4 hours and 30 minutes**


# 31 October: lost hope and somehow found my path again

As i opened up my EasyEDA to only close it 
i gave it one chance all this hours meant something I deleted my Whole PCB file and rechecked my schematic 
and i rechecked my whole Schematic too see what went wrong 
I calculated total number of Caps and it was 24 or 25 and
with the guide schematic it matched , yes it did but then why 2-3 caps were not there 
by the way ,Caps = capacitors. So i generated the PCB again to see what went wrong 
I placed all my components again and this time even noting all of them 
Then somehow i dont know this time 1 missing cap , atleast not like before 3 missing caps
I counted rechecked my whole schematic again
then i noticed there is one extra 1v1 cap and i dont have one 3v3 cap 
somehow in the guide i think there was a fault and it was named 3v3 there but according to schematic it should be 1v1 
so i placed that 1v1 cap where the missing cap would go 
obviously it was near 1v1 pin . Then i found what width should be the copper trace for RF signals 
then i routed some free GPIO pins from RP2040 to use it for prototyping .
And i got that in my board . I routed all of them then when i clicked DRC 
I got thousands of errors but i solved many of them 
But some last errors were in RP2040 chip and solving it was hell of a job 
and i thought i will again re-route that part and somehow it will be done.So i stopped my timelapse took a break and now i am heading to do my this Week half-life project
i hope tomorrow the board will be finished and i really want to prototype it and see how it will come out.
Timelapse = https://lapse.hackclub.com/timelapse/6ymR4BfQB3wd
as usual 30 mins counting extra for network issue.You know today i needed to review some projects but yea i didn't got time lol.

<img width="1867" height="985" alt="image" src="https://github.com/user-attachments/assets/656cf250-8dc4-478f-a30a-6ee08f4af276" />
<img width="1916" height="981" alt="image" src="https://github.com/user-attachments/assets/773ccd2d-21a0-4720-924e-750584fd91dc" />



**Total time spent: 3 hours and 30 minutes**



# 1st november: Finalized PCB with 0 DRC

First i opened my EasyEDA project and started from where I left 
I started of by fixing the RP2040 placement and wiring issue as there i couldn't wire 1v1 rail vCC and other rails 
I cleaned that Part routed it cleanly while shifting the resistors and one Decop caps a bit lower 
Than in the guide i realized that it was written to keep the DC regulator trace a bit more 
but what was DC regulator i didnt know that cause there was no IC named liked that obviously i knew it was with RP2040 pins or something like that but which one 
I googled and researched so it says the VREG_OUT pin is the DC regulator 
and as it is the DC-regulator i need to route that line with wires of more than 0.4mm width so i routed the 1v1 trail as its the VREG_Out pin and finalized it 
After that I run DRC it was not 0 some Vias didn't have enough GAP so i managed that and give the gap it required .
then i placed the GND fencing VIAS across the RF signal trace and then put Vias through the Whole boarddddddddd.
you know what is most important in PCB 
SIlkscreen ARTttttttttttttttttttttttttt
So i did it and it was so fun to find the best stickers for my boarddd
NOW i realized when i will actually build the board i will be totally messed up cause none of the components have their prefixes placed correctly so what i did is i searched that if there was a auto tool or something like that and it says EASYEDA pro has it so i downloaded it and loaded my project and searched for the tool took me a bit like 10-15mins but yea got it 
Then i used it and generated my gerber and source files , after it was done.
I rechecked DRC and it was 2 
which was intentional cause the Charging port type C holes dosn't have clearance enough but yes in blueprint guide it was mentioned that it is not a problem you can generate gerber there won't be any problem so yea i generated it and gathered all the files needed.
I finally did my Dream build Lora board in a week 
Looks awesome now it's time to get my BOM and submitting the project yayaya
timelapse = https://lapse.hackclub.com/timelapse/QMmVImql6nhg
<img width="1895" height="1072" alt="image" src="https://github.com/user-attachments/assets/51e6129d-caa4-43c8-b8a9-50d3c2468130" />
<img width="1917" height="1078" alt="image" src="https://github.com/user-attachments/assets/e6a58192-b12e-4530-aa13-2d056f5987c6" />
<img width="1917" height="1078" alt="image" src="https://github.com/user-attachments/assets/755c4cb4-7810-4aac-850c-a6369023cb7c" />
<img width="1877" height="1073" alt="image" src="https://github.com/user-attachments/assets/52dab28d-12e2-46e1-a5e8-60cfbe789353" />


**Total time spent: 2 hours and 47 minutes**

# 1rd november: Maybe i can't build my Lora board


So as usual everything was done from Silckscreen to generating gerbers 
i thought i will make the BOM ready and git push it 
But who knew that it will be one of the nightmares i will encounter 
I assigned LCSC parts and got my BOM.csv file 
i uploaded it in LCSC to make a final billing order with LCSC and submit my project 
Then it showed me the bill $71 which was insaneeeeeeeeee 
like $71 in which $48 is just for shipping like what the hellllll.
Maybe hackclub would fund that that's not a problem but 
The thing is who will pay those heavy taxes as hackclub never pays that 
also even if i order from LCSC half of the parts where not available like 32MHz crystal some decoup caps and resistors 
like howw why isnt it available in LCSC also then i took a break and went to LCSCINDIA website to find the parts 
BOOM: 8 parts out of stock how the hell will i get those things 
Well luckily i Was in a lockin huddle hosted in #half-life by me
like as my daily schedule i have to do it. Never though in hardware help huddle someone will help me instead but someone did 
his name is Slackbot (like not the real one,his username is only slackbot),everyday he rots my brain but today he helped me a lot 
he said that give me the components part number and i will find an alternative and he did 
He found me several of them 
What our plan was to order things from LCSC india so i dont need to pay taxes but the ones which are not availablee like not in any local website we will order from LCSC
so yea that was our plan we kept on searching through all the stuffs i changed some components stilll we couldnt find some specfic things neither in LCSC nor in any other website 
Yesterday night i thought leave it i can't build all i can do is to virtually design it 
I was very sad from morning 
But yea somehow like somehow i had hopes and said to myself that maybe tomorrow I will put one last effort towards it and search every part in local and get things 
yes this felt very dreamy but the only thing i like in myself that i dont give up 
I paused my lapse 
went to sleep with my sad heart .
Tomorrow morning ,
I opened EasyEDA std. opened my files 
I was ready with 4-5 different websites and gemini to assist me if i cant find any component and use it's similar version 
Well at starting i found almost all caps in robu.in 
But 2 of the capacitors were impossible to find out 1nF 0402 capacitors , i was so stressed out and i searched almost every website but yea it was not available anywhere so i shifted to 0603(updated my PCB and schematic ) and yea i got some 
next problem i faced was 10uF 0402 capacitor , not even a single variant was available like 0402 ,0603 literally none 
so what i did is i used 2.2uF x 5 in parallel where ever 10uF was needed and yea i got 2.2uF  resistors 
Next capacitors was done .
now the main challenge inductors 
Not even a single inductor i got in any website so yea i felt very hopeless untill i tried mouser 
which was a life savour literally every component like every component which was not available i got all of them there 
I felt so happy
yea some of them werent available but i used the alternatives and changed my PCB that way 
Now i am gonna start my next session where i finally gonna make a clear BOM , a Firmware and then ship the project 
Timelapse = https://lapse.hackclub.com/timelapse/3ow7pHAA3Coj


**Total time spent: 4 hours and 10 minutes**
