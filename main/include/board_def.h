/*
 * board_def.h
 *
 *  Created on: 8/08/2022
 *      Author: yeisonint
 */

#ifndef BOARD_DEF
#define BOARD_DEF

// nanoESP32-S3 board pins
#define USB_N_PIN 19
#define USB_P_PIN 20
#define MTMS_PIN 42
#define MTDI_PIN 41
#define MTDO_PIN 40
#define MTCK_PIN 39
#define RGB_PIN 48 // WS2812B

// I2C
#define I2C_SDA 4
#define I2C_SCL 5

// UART0
#define RXD0 44
#define TXD0 43

// nanoESP32S3-ExtBoard-v1.1 pins
#define LED_PIN 3
#define KEY_PIN 3

// MIC (MSM261S4030H0R)
#define SCK 41
#define WS 42
#define SDOUT 2

// SPI
#define SPI_CS 14
#define SPI_MOSI 47
#define SPI_MISO 46
#define SPI_SCK 21

// SD CARD
#define SD_D3 20  //CS
#define SD_CMD 38 //MOSI
#define SD_CLK 39 //SCLK
#define SD_D0 40  //MISO

// CAMERA
#define DVP_VSYNC 6
#define DVP_HREF 7
#define XMCLK 15
#define DVP_PCLK 13

#define DVP_Y9 16
#define DVP_Y8 17
#define DVP_Y7 18
#define DVP_Y6 12
#define DVP_Y2 11
#define DVP_Y5 10
#define DVP_Y3 9
#define DVP_Y4 8


#endif
