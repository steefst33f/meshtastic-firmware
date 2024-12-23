#ifndef _VARIANT_DIY_TFT_STAND_ALONE_
#define _VARIANT_DIY_TFT_STAND_ALONE_

#define SLEEP_TIME 120

// Keyboard
#define I2C_SDA 8
#define I2C_SCL 9
#define CANNED_MESSAGE_MODULE_ENABLE 1

// GPS
#define GPS_RX_PIN 1
#define GPS_TX_PIN 2

// LORA
#define USE_RF95
#define LORA_SCK 12
#define LORA_MISO 13
#define LORA_MOSI 11
#define LORA_CS 16

#define LORA_DIO0 18 // BUSY
#define LORA_DIO1 41 // IRQ
#define LORA_RESET 15

// WaveShare Core1262-868M
// https://www.waveshare.com/wiki/Core1262-868M
#define USE_SX1262
#define SX126X_CS LORA_CS
#define SX126X_DIO1 LORA_DIO1
#define SX126X_BUSY LORA_DIO0
#define SX126X_RESET LORA_RESET

#define SX126X_DIO2_AS_RF_SWITCH // use DIO2 as RF switch
#define SX126X_DIO3_TCXO_VOLTAGE 1.8

#endif
