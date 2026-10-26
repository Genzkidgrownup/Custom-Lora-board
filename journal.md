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

**Total time spent: 2 hours and 5 minutes**
