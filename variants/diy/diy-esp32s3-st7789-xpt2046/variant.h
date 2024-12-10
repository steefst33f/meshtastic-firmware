#ifndef _VARIANT_DIY_ESP32S3_ST7789_XPT2046_
#define _VARIANT_DIY_ESP32S3_ST7789_XPT2046_

#define SLEEP_TIME 120

// // TFT ST7789
// #define ST7789_CS LGFX_PIN_CS
// #define ST7789_RS LGFX_PIN_DC
// #define ST7789_SDA LGFX_PIN_MOSI
// #define ST7789_SCK LGFX_PIN_SCK
// #define ST7789_RESET LGFX_PIN_RST
// #define ST7789_MISO LGFX_PIN_MISO
// #define ST7789_BUSY -1
// #define ST7789_BL LGFX_PIN_BL
// #define ST7789_SPI_HOST LGFX_CFG_HOST
// #define TFT_BL LGFX_PIN_BL
// #define SPI_FREQUENCY 40000000
// #define SPI_READ_FREQUENCY 16000000
// #define TFT_HEIGHT LGFX_SCREEN_HEIGHT
// #define TFT_WIDTH LGFX_SCREEN_WIDTH
// #define TFT_OFFSET_X 0
// #define TFT_OFFSET_Y 0
// #define TFT_OFFSET_ROTATION LGFX_OFFSET_ROTATION
// #define SCREEN_ROTATE
// #define SCREEN_TRANSITION_FRAMERATE 5
// #define BRIGHTNESS_DEFAULT 125

// TOUCH
#define HAS_TOUCHSCREEN 1
#define USE_XPT2046 1
// #define TOUCH_CS LGFX_TOUCH_CS
// #define SCREEN_TOUCH_INT -1

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
