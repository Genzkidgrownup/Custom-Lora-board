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
<img width="35%" height="798" alt="image" src="https://github.com/user-attachments/assets/3d120653-3ace-4ac7-82c7-d12c23b7e12d" /> <img width="35%" height="847" alt="image" src="https://github.com/user-attachments/assets/69c8f671-19a1-4a81-9688-a0f5b9b8e6d7" />

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


## SCHEMATIC DIAGRAM:

<img width="50%" height="547" alt="image" src="https://github.com/user-attachments/assets/b62694c8-e795-47f1-be40-eeea6bb46e99" />


# MAKE sure to read the Journal.MD to know my journey Thank you.



## License
This project is licensed under **CC BY-NC 4.0** (Creative Commons Attribution-NonCommercial). 
You are free to build and modify this board for personal use, but commercial production or selling of this project is strictly prohibited.

# Bill of Materials (BOM)

| QTY | NAME | STATUS | VENDOR | PRICE EACH (USD) | TOTAL PRICE (USD) | LINK |
|---|---|---|---|---|---|---|
| 1 | PCB | DONE | lioncircuits.com | $0.0081 | $28.07 | [Link](https://www.lioncircuits.com/quote) |
| 30 | 100nF 0402 | DONE | robu.in | $0.0081 | $0.24 | [Link](https://robu.in/product/0402b104j250nt-fh-25v-100nf-x7r%C2%B15-0402-multilayer-ceramic-capacitors-mlcc-smd-smt-rohs/) |
| 72 | 15pF 50V 0402 SMD | DONE | robu.in | $0.0034 | $0.24 | [Link](https://robu.in/product/15-pf-50v-0402-smd-multilayer-ceramic-capacitors-cc0402jrnpo9bn150-yageo-pack-of-20/) |
| 76 | 0.1uf Capacitor SMD:C 0402 | DONE | robu.in | $0.0032 | $0.25 | [Link](https://robu.in/product/1uf-capacitor-smdc-0402-pack-of-50/) |
| 32 | 16V 470nF X7R±10% 0402 | DONE | robu.in | $0.0078 | $0.25 | [Link](https://robu.in/product/grm155r71c474ke01d-murata-16v-470nf-x7r%C2%B110-0402-multilayer-ceramic-capacitors-mlcc-smd-smt-rohs/) |
| 54 | 47 pF 50V 0402 | DONE | robu.in | $0.0046 | $0.25 | [Link](https://robu.in/product/47-pf-50v-0402-smd-multilayer-ceramic-capacitors-cc0402jrnpo9bn470-yageo-pack-of-20/) |
| 20 | 39pF 25V 0402 | DONE | robu.in | $0.0163 | $0.33 | [Link](https://robu.in/product/mc0402n390k250ct-murata-smd-multilayer-ceramic-capacitor-39-pf-25-v-0402-1005-metric-%c2%b1-10-c0g-np0-mc/) |
| 60 | 3.3 pF 50V 0402 | DONE | robu.in | $0.0079 | $0.47 | [Link](https://robu.in/product/0402hq3r3c500nt-fh-smd-multilayer-ceramic-capacitor-3-3-pf-50-v-0402-1005-metric-%25c2%25b1-0-25pf-c0g/) |
| 2 | 1nF 0402 | DONE | Mouser | $0.5269 | $1.05 | [Link](https://www.mouser.in/en/ProductDetail/Vishay/GA0402Y102JXBAC31G?qs=sGAEpiMZZMukHu%252BjC5l7Yc%252Bu52NmWc3ewp4gumc%2FrSw%3D) |
| 96 | 2.2uF 0402 | DONE | robu.in | $0.0025 | $0.24 | [Link](https://robu.in/product/0402x225m100nt-fh-10v-2-2uf-x5r%C2%B120-0402-multilayer-ceramic-capacitors-mlcc-smd-smt-rohs/) |
| 4 | male header | DONE | robu.in | $0.1078 | $0.43 | [Link](https://robu.in/product/2-54mm-1x40-pin-male-single-row-straight-short-header-strip-pack-of-3/) |
| 2 | 15uH L0402 | DONE | Mouser | $1.8204 | $3.64 | [Link](https://www.mouser.in/en/ProductDetail/Murata-Electronics/LQW15DN150M00D?qs=55YtniHzbhAjiaw66ArnFg%3D%3D&mgh=1&srsltid=AYCX9vJbxTn3UMuN35eNfOJhm8NzIIzqOlmySslTP1XtAUo52K6aBNrLwEg) |
| 2 | 0402 47nH | DONE | Mouser | $0.8862 | $1.77 | [Link](https://www.mouser.in/en/ProductDetail/Wurth-Elektronik/744916147?qs=AQlKX63v8Rv4%2FlYOhABo6w%3D%3D) |
| 2 | 0900FM15D0039001E Balun | DONE | Mouser | $0.5629 | $1.13 | [Link](https://www.mouser.in/en/ProductDetail/Johanson-Technology/0900FM15D0039001E?qs=jRuttqqUwMQquGokVtFFxg%3D%3D) |
| 16 | 9.1nH L0402 | DONE | robu.in | $0.0176 | $0.28 | [Link](https://robu.in/product/lqg15hn9n1j02d-murata-electronics-500ma-9-1nh-%25c2%25b15-270m%25cf%2589-0402-inductors-smd-rohs/) |
| 2 | 1k ohm L0402 | DONE | Mouser | $0.2635 | $0.53 | [Link](https://www.mouser.in/en/ProductDetail/TDK/MMZ1005S102ETD25?qs=pvNC7ksEVIc%252B7Q4Rkl1Srg%3D%3D) |
| 126 | 1k ohm R0402 | DONE | robu.in | $0.0019 | $0.24 | [Link](https://robu.in/product/1k-resistor-smdr-0402-pack-of-50/) |
| 4 | 27.4ohm 0402 | DONE | Mouser | $0.1198 | $0.48 | [Link](https://www.mouser.in/en/ProductDetail/YAGEO/RC0402FR-0727R4L?qs=NmlBeBNZel4DuUWv%2FB%2FbJA%3D%3D&srsltid=AYCX9vI73qRYJkKNfzzJc4y194gnRH_p5G1iuN-JKkCjYB4hdvLNffM6) |
| 100 | 10k ohm 0402 | DONE | robu.in | $0.0040 | $0.40 | [Link](https://robu.in/product/10k-resistor-smdr-0402-pack-of-50/) |
| 314 | 100ohm 0402 | DONE | robu.in | $0.0008 | $0.26 | [Link](https://robu.in/product/rc0402jr-07100rl-yageo-res-thick-film-0402-100-ohm-5-0-063w1-16w-%25c2%25b1100ppm-c-pad-smd-t-r/) |
| 144 | 5.1k ohm resistor | DONE | robu.in | $0.0017 | $0.24 | [Link](https://robu.in/product/rc0402fr-075k1l-yageo-smd-chip-resistor/) |
| 4 | 12MHz Surface Mount Crystal | DONE | robu.in | $0.2156 | $0.86 | [Link](https://robu.in/product/cm4012m00008001-huaxindianzi/) |
| 2 | W25Q128JVSIQ flash 16mb memory chip | DONE | Mouser | $6.5868 | $13.17 | [Link](https://www.mouser.in/en/ProductDetail/Winbond/W25Q128JVSIQ-TR?qs=qSfuJ%252Bfl%2Fd7vTyLA9kNdGw%3D%3D) |
| 4 | switches | DONE | robu.in | $0.0479 | $0.19 | [Link](https://robu.in/product/tsa010a2026b-bzcn-3mm-2mm-50ma-round-button-standing-paste-3-9mm-260gf-12v-smd-tactile-switches-rohs/) |
| 2 | RP2040 | DONE | robu.in | $0.7665 | $1.53 | [Link](https://robu.in/product/raspberry-pi-rp2040/) |
| 2 | RF-switch - PE4239A-Z | DONE | Mouser | $2.2515 | $4.50 | [Link](https://www.mouser.in/en/ProductDetail/pSemi/PE4239A-Z?qs=Znm5pLBrcAIEDuLmPIlOmw%3D%3D) |
| 2 | Lora Antenna 915mhz | DONE | robu.in | $0.9461 | $1.89 | [Link](https://robu.in/product/lora-antenna-915mhz/) |
| 2 | USB-C-16P- | DONE | Mouser | $0.5389 | $1.08 | [Link](https://www.mouser.in/en/ProductDetail/Same-Sky/UJ20-C-H-G-MSMT-4B-P16-TR?qs=sGAEpiMZZMvlX3nhDDO4ACjgJoffZvcbOspL7D5BzU8%3D) |
| 2 | AP2112K-3.3TRG1 -USB step down | DONE | Mouser | $0.3114 | $0.62 | [Link](https://www.mouser.in/en/ProductDetail/Diodes-Incorporated/AP2112K-3.3TRG1?qs=x6A8l6qLYDDPYHosCdzh%2FA%3D%3D) |
| 2 | 32Mhz crystal | DONE | Mouser | $1.2455 | $2.49 | [Link](https://www.mouser.in/en/ProductDetail/ABRACON/ABM11AIG-32.000MHZ-4Z-T3?qs=gG6m684uYP6ePIn58i2qHg%3D%3D) |
| 1 | **Shipping Charges** | **DONE** | **Courier** | **$24.00** | **$24.00** | **N/A** |
| - | **GRAND TOTAL (Components + Shipping)** | **FINAL** | **N/A** | **N/A** | **$91.12** | **N/A** |
