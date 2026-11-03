#include <Arduino.h>
#include <SPI.h>
#include <RadioLib.h>

#define SCK  18
#define MOSI 19
#define MISO 20
#define NSS  21
#define BUSY 22 
#define RST  23 
#define DIO1 16 

#define TOUCH 3
#define LED   4

SX1262 radio = new Module(NSS, DIO1, RST, BUSY);

void setup() {
  Serial.begin(115200);
  while (!Serial && millis() < 3000);

  pinMode(TOUCH, INPUT_PULLUP);
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);

  SPI.setSCK(SCK);
  SPI.setTX(MOSI);
  SPI.setRX(MISO);
  SPI.begin();

  if (radio.begin(915.0, 125.0, 7, 5, RADIOLIB_SX126X_SYNC_WORD_PRIVATE, 14, 8) != RADIOLIB_ERR_NONE) {
    while (true);
  }

  radio.setDio2AsRfSwitch(true);
}

void loop() {
  if (digitalRead(TOUCH) == HIGH) { 
    digitalWrite(LED, HIGH);
    radio.transmit("TOUCH_EVENT");
    digitalWrite(LED, LOW);
    delay(500);
  }

  String msg = "";
  if (radio.receive(msg) == RADIOLIB_ERR_NONE) {
    digitalWrite(LED, HIGH);
    delay(200);
    digitalWrite(LED, LOW);
  }
}
