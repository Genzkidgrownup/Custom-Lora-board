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
