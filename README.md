# Custom-Lora-board
 
It's a custom 4-layer Lora(long-range) board which can transmit data without cellular networks or towers up to 15kms+ using ultra-low power and low probability of detection and it's jam-resistant due to rapid   frequency hopping . AS it dosen't use high power detecting its signal is virtually impossible which can be used in defence systems   
RP2040chip acts as the micro-controller here. It reads commands, checks attached sensors or buttons.   
SX1262 LoRa radio chip sends data as Radio waves using Chirp Spread Spectrum (CSS) which allows it to change its frequency rapidly making it hard to detect and to be jammed.  
SOUNDS SO COOL RIGHT ??
WELL IT ISSSSSSSSSSSSSSSS


### Why i made this ??
>In remote defense operations and disaster zones, communication lines routinely fail. Traditional networks rely on vulnerable cell towers, leaving tactical teams isolated and exposed to signal jamming.  
>I wanted a solution and here it isssssssssssssss

## PROJECT SHOWCASE:
<img width="35%" height="1078" alt="image" src="https://github.com/user-attachments/assets/e7cc7e0a-1171-401c-937c-4365303467ee" /> <img width="35%" height="1078" alt="image" src="https://github.com/user-attachments/assets/773f2c48-ca22-4b5f-b7b5-c8886b334ad3" /> 
<img width="35%" height="796" alt="image" src="https://github.com/user-attachments/assets/3d5d4d1f-0fa9-4032-b5c9-ab1c0e65a5b3" /> <img width="35%" height="786" alt="image" src="https://github.com/user-attachments/assets/5c728a19-fde5-4b36-88db-7be6d927d5dc" />


## PCB specifications:

**PCB OUTLINE : 50mmx42mm**  

**ISM Band -** a license-free section of frequencies for "Industrial, Scientific, and Medical" using the one between 902-928 MHz.

**Frequency :** is 915 MHz

**USER** :Can transmit data over 15+kms without any tower signal or network  

**PCB copper trace width:** 0.205mm width for maintaining 50ohm impedance  

**GROUND COPPER PLATES:** has 2 ground copper plates in both the sides for reducing electrical noise

**GROUND Vias railing** I HAVE railed the RF track with Ground Vias for noise clearance and other free parts of the board too for noise clearance 

**PCB layers** Top and bottom layer are the signal layer, Inner1 is for GND and Inner2 is for VCC

**GPIO pins:** Has 6 GPIO pins for external sensors 

**SILKSCREEN(BEST PART):** HAS random ahh stickers which i love and also has a TCA sticker(where i started learning about robotics) .IT also has my dream company's logo "AVERO"


# How its works

This board is a custom designed wireless communication module for long range applications. It is based on the dual-core Raspberry Pi RP2040 microcontroller and SX1262 LoRa transceiver.


- Power & Connectivity. 5V power and data thru USB-C port. An AP2112K-3.3 LDO regulator efficiently steps this down to a stable 3.3V for the system.

- Processing & Memory - The RP2040 is the brain. The RP2040 requires external memory, so it’s coupled with a W25Q16JV SPI Flash chip to store your firmware.

- Long-Range RF The SX1262 provides sub-GHz LoRa wireless communication. The RF path is controlled by a PE4259 RF switch and a Johanson Balun to condition the signal for the antenna.

- Internal Routing: The RP2040 uses its SPI busses to talk to the Flash memory and the SX1262 LoRa chip.


```text
[ USB-C ] ──5V──► [ AP2112K-3.3 LDO ] ──3.3V──┐
                                              ▼
[ W25Q16 Flash ] ◄──SPI── [ RP2040 ] ──SPI──► [ SX1262 LoRa ]
                        (Main Brain)                │
                                                    ▼
                                            [ PE4259 Switch ]
                                                    │
                                                    ▼
                                                [ Antenna ]
                                                    📡

```


## SCHEMATIC DIAGRAM:

<img width="1057" height="737" alt="image" src="https://github.com/user-attachments/assets/cf31f455-4841-4bc7-bc78-7c0bd2f8db83" />



## Firmware
>The firmware is just barebones
>which will be transmitting Touch signal and led will blink if received in another Lora board  
>Once i get the Lora board i will change the code significantly and make the code better with more sensor following up
>TILL then you can checkout the code i have provided  
 
### MAKE sure to read the Journal.MD to know my journey Thank you.

## Total physical components used:

| Designator | Component Name / Part Number | Description |
| :--- | :--- | :--- |
| **U6** | RP2040 | Microcontroller |
| **U5** | SX1262 | Radio transceiver |
| **U2** | W25Q128JVSIQ | Flash memory |
| **U7** | PE4259 / PE4239A-Z | RF switch |
| **U10** | AP2112K-3.3TRG1 | Voltage regulator |
| **U9** | UJ20-C-H-G-MSMT-4B-P16-TR | USB-C connector |
| **U1** | 12 MHz Crystal | System clock |
| **X1** | 32 MHz Crystal | Radio clock |
| **L3** | 0900FM15D0039001E | RF balun |
| **L5** | 1k Ohm(MMZ1005S102ETD25) | Ferrite bead |
| **L1, L2, L4** | 15uH, 47nH, 9.1nH | Inductors |
| **U3, U4** | Tactile Switches (TS-1071AD) | Buttons |
| **H1** | 1x8 Header Pin Strip | Header |
| **C1 – C25** | Decoupling Capacitors (0402) and two (0603) | Capacitors |
| **R1 – R8** | Resistors (0402) | Resistors |


# Bill of Materials (BOM)

> Physical components won't match with this BOM due to MOQ(minimum order quantity)
> and shipment charges are high due to DHL(express) which is only available in INDIA from mouser

| QTY | NAME | STATUS | LINK | PRICE_EACH ($) | TOTAL_PRICE ($) |
|---:|:---|:---|:---|---:|---:|
| 1 | PCB | DONE | [LionCircuits](https://www.lioncircuits.com/quote) | $28.07 | $28.07 |
| 30 | 100nF 0402 | DONE | [Robu.in](https://robu.in/product/0402b104j250nt-fh-25v-100nf-x7r%C2%B15-0402-multilayer-ceramic-capacitors-mlcc-smd-smt-rohs/) | $0.0081 | $0.24 |
| 72 | 15pF 50V 0402 SMD | DONE | [Robu.in](https://robu.in/product/15-pf-50v-0402-smd-multilayer-ceramic-capacitors-cc0402jrnpo9bn150-yageo-pack-of-20/) | $0.0034 | $0.24 |
| 76 | 0.1uf Capacitor SMD:C 0402 | DONE | [Robu.in](https://robu.in/product/1uf-capacitor-smdc-0402-pack-of-50/) | $0.0032 | $0.25 |
| 32 | 16V 470nF X7R±10% 0402 | DONE | [Robu.in](https://robu.in/product/grm155r71c474ke01d-murata-16v-470nf-x7r%C2%B110-0402-multilayer-ceramic-capacitors-mlcc-smd-smt-rohs/) | $0.0078 | $0.25 |
| 54 | 47 pF 50V 0402 | DONE | [Robu.in](https://robu.in/product/47-pf-50v-0402-smd-multilayer-ceramic-capacitors-cc0402jrnpo9bn470-yageo-pack-of-20/) | $0.0046 | $0.25 |
| 20 | 39pF 25V 0402 | DONE | [Robu.in](https://robu.in/product/mc0402n390k250ct-murata-smd-multilayer-ceramic-capacitor-39-pf-25-v-0402-1005-metric-%c2%b1-10-c0g-np0-mc/) | $0.0163 | $0.33 |
| 60 | 3.3 pF 50 0402 | DONE | [Robu.in](https://robu.in/product/0402hq3r3c500nt-fh-smd-multilayer-ceramic-capacitor-3-3-pf-50-v-0402-1005-metric-%25c2%25b1-0-25pf-c0g/) | $0.0079 | $0.47 |
| 2 | 1nF 0402 | DONE | [Sharvi](https://sharvielectronics.com/product/1nf-1000pf-50v-capacitor-5-tolerance-cc0402krx7r9bb102-0402-package/) | $0.0163 | $0.03 |
| 4 | 10uF 0402 | DONE | [Sharvi](https://sharvielectronics.com/product/10uf-50v-capacitor-10-tolerance-0402-package/) | $0.0389 | $0.16 |
| 4 | male header | DONE | [Robu.in](https://robu.in/product/2-54mm-1x40-pin-male-single-row-straight-short-header-strip-pack-of-3/) | $0.1078 | $0.43 |
| 2 | 15uH L0402 | DONE | [Sharvi](https://sharvielectronics.com/product/mlz1608n150lt000-15-%c2%b5h-250ma-shielded-multilayer-inductor-with-%c2%b120-tolerance-0603-package/) | $0.0772 | $0.15 |
| 2 | 0402 47nH | DONE | [Sharvi](https://sharvielectronics.com/product/lqw15an47nj00d-47nh-210ma-power-inductor-with-%c2%b15-tolerance-0402-package/) | $0.0832 | $0.17 |
| 2 | 0900FM15D0039001E Balun | DONE | [Mouser](https://www.mouser.in/en/ProductDetail/Johanson-Technology/0900FM15D0039001E?qs=jRuttqqUwMQquGokVtFFxg%3D%3D) | $0.5629 | $1.13 |
| 16 | 9.1nH L0402 | DONE | [Robu.in](https://robu.in/product/lqg15hn9n1j02d-murata-electronics-500ma-9-1nh-%25c2%25b15-270m%25cf%2589-0402-inductors-smd-rohs/) | $0.0176 | $0.28 |
| 2 | 1k ohm L0402 | DONE | [Sharvi](https://sharvielectronics.com/product/1k-ohm-350ma-100-mhz-ferrite-beads-blm15ax102sn1d-0402-package/) | $0.2635 | $0.53 |
| 126 | 1k ohm R0402 | DONE | [Robu.in](https://robu.in/product/1k-resistor-smdr-0402-pack-of-50/) | $0.0019 | $0.24 |
| 300 | 27.4ohm 0402 | DONE | [Robu.in](https://robu.in/product/rc0402fr-0727r4l-yageo-62-5mw-thick-film-resistors-50v-%25c2%25b1100ppm-%25e2%2584%2583-%25c2%25b11-27-4%25cf%2589-0402-chip-resistor-surface-mount-rohs/) | $0.0010 | $0.29 |
| 100 | 10k ohm 0402 | DONE | [Robu.in](https://robu.in/product/10k-resistor-smdr-0402-pack-of-50/) | $0.0040 | $0.40 |
| 314 | 100ohm 0402 | DONE | [Robu.in](https://robu.in/product/rc0402jr-07100rl-yageo-res-thick-film-0402-100-ohm-5-0-063w1-16w-%25c2%25b1100ppm-c-pad-smd-t-r/) | $0.0008 | $0.26 |
| 144 | 5.1k ohm resistor | DONE | [Robu.in](https://robu.in/product/rc0402fr-075k1l-yageo-smd-chip-resistor/) | $0.0017 | $0.24 |
| 4 | 12MHz Surface Mount Crystal | DONE | [Robu.in](https://robu.in/product/cm4012m00008001-huaxindianzi/) | $0.2156 | $0.86 |
| 2 | W25Q128JVSIQ flash 16mb memory chip | DONE | [Sharvi](https://sharvielectronics.com/product/w25q128-flash-chip-128mbit-16mb-soic-8-package/) | $2.0150 | $4.03 |
| 4 | switches | DONE | [Robu.in](https://robu.in/product/tsa010a2026b-bzcn-3mm-2mm-50ma-round-button-standing-paste-3-9mm-260gf-12v-smd-tactile-switches-rohs/) | $0.0479 | $0.19 |
| 2 | RP2040 | DONE | [Robu.in](https://robu.in/product/raspberry-pi-rp2040/) | $0.7665 | $1.53 |
| 2 | RF-switch - PE4259 | DONE | [Sharvi](https://sharvielectronics.com/product/4259-63-spdt-high-power-ultracmos-10mhz-to-3-0ghz-rf-switch-ic-sc-70-6-package/) | $0.6707 | $1.34 |
| 2 | Lora Antenna 915mhz | DONE | [Robu.in](https://robu.in/product/lora-antenna-915mhz/) | $0.9461 | $1.89 |
| 2 | USB-C-16P- | DONE | [Sharvi](https://sharvielectronics.com/product/16-pin-c-type-usb-connector-smd-package/) | $0.2090 | $0.42 |
| 2 | AP2112K-3.3TRG1 -USB step down | DONE | [Sharvi](https://sharvielectronics.com/product/ap2112k-3-3trg1-3-3v-600ma-ldo-voltage-regulator-sot-25-5-package/) | $0.2211 | $0.44 |
| 2 | 32Mhz crystal | DONE | [Sharvi](https://sharvielectronics.com/product/32mhz-10pf-%c2%b110ppm-tolerance-r2520-32-000-10-f-1010-tr-ns8-smd-crystal-2-50mmx2mm-package/) | $0.1994 | $0.40 |
| 1 | Mouser International Express Shipping | DONE | [Mouser](https://www.mouser.in) | $20.00 | $20.00 |
| - | **GRAND TOTAL** | **DONE** | - | - | **$65.51** |


## License
This project is licensed under **CC BY-NC 4.0** (Creative Commons Attribution-NonCommercial). 
You are free to build and modify this board for personal use, but commercial production or selling of this project is strictly prohibited.
