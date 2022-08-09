#include <esp_log.h>
#include <esp_system.h>
#include "nvs_flash.h"
#include "nvs.h"
#include <sys/param.h>
#include <string.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

// support IDF 5.x
#ifndef portTICK_RATE_MS
#define portTICK_RATE_MS portTICK_PERIOD_MS
#endif

#include "esp_camera.h"
#include "board_def.h"

// ExtBoard pin definition for camera
#define CAM_PIN_PWDN -1  //power down is not used
#define CAM_PIN_RESET -1 //software reset will be performed
#define CAM_PIN_XCLK XMCLK
#define CAM_PIN_SIOD I2C_SDA
#define CAM_PIN_SIOC I2C_SCL

#define CAM_PIN_D7 DVP_Y9
#define CAM_PIN_D6 DVP_Y8
#define CAM_PIN_D5 DVP_Y7
#define CAM_PIN_D4 DVP_Y6
#define CAM_PIN_D3 DVP_Y5
#define CAM_PIN_D2 DVP_Y4
#define CAM_PIN_D1 DVP_Y3
#define CAM_PIN_D0 DVP_Y2
#define CAM_PIN_VSYNC DVP_VSYNC
#define CAM_PIN_HREF DVP_HREF
#define CAM_PIN_PCLK DVP_PCLK

esp_err_t camera_init(void);
esp_err_t takePhoto(void);
