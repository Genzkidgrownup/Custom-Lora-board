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
| **L5** | 1 k$\Omega$ (MMZ1005S102ETD25) | Ferrite bead |
| **L1, L2, L4** | 15uH, 47nH, 9.1nH | Inductors |
| **U3, U4** | Tactile Switches (TS-1071AD) | Buttons |
| **H1** | 1x8 Header Pin Strip | Header |
| **C1 – C25** | Decoupling Capacitors (0402) and two (0603) | Capacitors |
| **R1 – R8** | Resistors (0402) | Resistors |


# Bill of Materials (BOM)

> Physical components won't match with this BOM due to MOQ(minimum order quantity)
> and shipment charges are high due to DHL(express) which is only available in INDIA from mouser


| QTY | NAME | STATUS | VENDOR | PRICE EACH (USD) | TOTAL PRICE (USD) | LINK |
|---|---|---|---|---|---|---|
| 1 | PCB Fabrication (Batch run) | DONE | lioncircuits.com | $28.0700 | $28.07 | [Link](https://www.lioncircuits.com/quote) |
| 30 | 100nF 0402 | DONE | robu.in | $0.0072 | $0.22 | [Link](https://robu.in/product/0402b104j250nt-fh-25v-100nf-x7r%C2%B15-0402-multilayer-ceramic-capacitors-mlcc-smd-smt-rohs/) |
| 72 | 15pF 50V 0402 SMD | DONE | robu.in | $0.0030 | $0.21 | [Link](https://robu.in/product/15-pf-50v-0402-smd-multilayer-ceramic-capacitors-cc0402jrnpo9bn150-yageo-pack-of-20/) |
| 76 | 0.1uf Capacitor SMD:C 0402 | DONE | robu.in | $0.0029 | $0.22 | [Link](https://robu.in/product/1uf-capacitor-smdc-0402-pack-of-50/) |
| 32 | 16V 470nF X7R±10% 0402 | DONE | robu.in | $0.0069 | $0.22 | [Link](https://robu.in/product/grm155r71c474ke01d-murata-16v-470nf-x7r%C2%B110-0402-multilayer-ceramic-capacitors-mlcc-smd-smt-rohs/) |
| 54 | 47 pF 50V 0402 | DONE | robu.in | $0.0040 | $0.22 | [Link](https://robu.in/product/47-pf-50v-0402-smd-multilayer-ceramic-capacitors-cc0402jrnpo9bn470-yageo-pack-of-20/) |
| 20 | 39pF 25V 0402 | DONE | robu.in | $0.0144 | $0.29 | [Link](https://robu.in/product/mc0402n390k250ct-murata-smd-multilayer-ceramic-capacitor-39-pf-25-v-0402-1005-metric-%c2%b1-10-c0g-np0-mc/) |
| 60 | 3.3 pF 50V 0402 | DONE | robu.in | $0.0070 | $0.42 | [Link](https://robu.in/product/0402hq3r3c500nt-fh-smd-multilayer-ceramic-capacitor-3-3-pf-50-v-0402-1005-metric-%25c2%25b1-0-25pf-c0g/) |
| 2 | 1nF 0402 | DONE | Mouser | $0.4656 | $0.93 | [Link](https://www.mouser.in/en/ProductDetail/Vishay/GA0402Y102JXBAC31G?qs=sGAEpiMZZMukHu%252BjC5l7Yc%252Bu52NmWc3ewp4gumc%2FrSw%3D) |
| 4 | 10uF 0402 | DONE | Mouser | $0.4444 | $1.78 | [Link](https://www.mouser.in/en/ProductDetail/Murata-Electronics/GRM188R61C106MA73D?qs=OXzh9Ga2KBH8Bmnena8%252BFw%3D%3D) |
| 4 | male header | DONE | robu.in | $0.0952 | $0.38 | [Link](https://robu.in/product/2-54mm-1x40-pin-male-single-row-straight-short-header-strip-pack-of-3/) |
| 2 | 15uH L0402 | DONE | Mouser | $1.6085 | $3.22 | [Link](https://www.mouser.in/en/ProductDetail/Murata-Electronics/LQW15DN150M00D?qs=55YtniHzbhAjiaw66ArnFg%3D%3D) |
| 2 | 0402 47nH | DONE | Mouser | $0.7831 | $1.57 | [Link](https://www.mouser.in/en/ProductDetail/Wurth-Elektronik/744916147?qs=AQlKX63v8Rv4%2FlYOhABo6w%3D%3D) |
| 2 | 0900FM15D0039001E Balun | DONE | Mouser | $0.4974 | $0.99 | [Link](https://www.mouser.in/en/ProductDetail/Johanson-Technology/0900FM15D0039001E?qs=jRuttqqUwMQquGokVtFFxg%3D%3D) |
| 16 | 9.1nH L0402 | DONE | robu.in | $0.0156 | $0.25 | [Link](https://robu.in/product/lqg15hn9n1j02d-murata-electronics-500ma-9-1nh-%25c2%25b15-270m%25cf%2589-0402-inductors-smd-rohs/) |
| 2 | 1k ohm L0402 | DONE | Mouser | $0.2328 | $0.47 | [Link](https://www.mouser.in/en/ProductDetail/TDK/MMZ1005S102ETD25?qs=pvNC7ksEVIc%252B7Q4Rkl1Srg%3D%3D) |
| 126 | 1k ohm R0402 | DONE | robu.in | $0.0017 | $0.21 | [Link](https://robu.in/product/1k-resistor-smdr-0402-pack-of-50/) |
| 4 | 27.4ohm 0402 | DONE | Mouser | $0.1058 | $0.42 | [Link](https://www.mouser.in/en/ProductDetail/YAGEO/RC0402FR-0727R4L?qs=NmlBeBNZel4DuUWv%2FB%2FbJA%3D%3D) |
| 100 | 10k ohm 0402 | DONE | robu.in | $0.0035 | $0.35 | [Link](https://robu.in/product/10k-resistor-smdr-0402-pack-of-50/) |
| 314 | 100ohm 0402 | DONE | robu.in | $0.0007 | $0.23 | [Link](https://robu.in/product/rc0402jr-07100rl-yageo-res-thick-film-0402-100-ohm-5-0-063w1-16w-%25c2%25b1100ppm-c-pad-smd-t-r/) |
| 144 | 5.1k ohm resistor | DONE | robu.in | $0.0015 | $0.21 | [Link](https://robu.in/product/rc0402fr-075k1l-yageo-smd-chip-resistor/) |
| 4 | 12MHz Surface Mount Crystal | DONE | robu.in | $0.1905 | $0.76 | [Link](https://robu.in/product/cm4012m00008001-huaxindianzi/) |
| 2 | W25Q128JVSIQ flash 16mb memory chip | DONE | Mouser | $5.8201 | $11.64 | [Link](https://www.mouser.in/en/ProductDetail/Winbond/W25Q128JVSIQ-TR?qs=qSfuJ%252Bfl%2Fd7vTyLA9kNdGw%3D%3D) |
| 4 | switches | DONE | robu.in | $0.0423 | $0.17 | [Link](https://robu.in/product/tsa010a2026b-bzcn-3mm-2mm-50ma-round-button-standing-paste-3-9mm-260gf-12v-smd-tactile-switches-rohs/) |
| 2 | RP2040 | DONE | robu.in | $0.6772 | $1.35 | [Link](https://robu.in/product/raspberry-pi-rp2040/) |
| 2 | RF-switch - PE4259 | DONE | Mouser | $1.9894 | $3.98 | [Link](https://www.mouser.in/en/ProductDetail/pSemi/PE4239A-Z?qs=Znm5pLBrcAIEDuLmPIlOmw%3D%3D) |
| 2 | Lora Antenna 915mhz | DONE | robu.in | $0.8360 | $1.67 | [Link](https://robu.in/product/lora-antenna-915mhz/) |
| 2 | USB-C-16P- | DONE | Mouser | $0.4762 | $0.95 | [Link](https://www.mouser.in/en/ProductDetail/Same-Sky/UJ20-C-H-G-MSMT-4B-P16-TR?qs=sGAEpiMZZMvlX3nhDDO4ACjgJoffZvcbOspL7D5BzU8%3D) |
| 2 | AP2112K-3.3TRG1 -USB step down | DONE | Mouser | $0.2751 | $0.55 | [Link](https://www.mouser.in/en/ProductDetail/Diodes-Incorporated/AP2112K-3.3TRG1?qs=x6A8l6qLYDDPYHosCdzh%2FA%3D%3D) |
| 2 | 32Mhz crystal | DONE | Mouser | $1.1005 | $2.20 | [Link](https://robu.in/product/32mhz-crystal/) |
| 1 | **Shipping Charges** | **DONE** | **Courier** | **$24.00** | **$24.00** | **N/A** |
| - | **GRAND TOTAL (Components + PCB + Shipping)** | **FINAL** | **N/A** | **N/A** | **$88.15** | **N/A** |

## License
This project is licensed under **CC BY-NC 4.0** (Creative Commons Attribution-NonCommercial). 
You are free to build and modify this board for personal use, but commercial production or selling of this project is strictly prohibited.
