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
<img width="1058" height="737" alt="image" src="https://github.com/user-attachments/assets/16996f4a-73b2-4dfe-9353-068891aa9228" />


**Total time spent: 2 hours and 30 minutes**
