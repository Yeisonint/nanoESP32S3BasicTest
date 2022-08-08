#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "esp_log.h"
#include <string.h>
#include <sys/unistd.h>
#include <sys/stat.h>
#include "esp_vfs_fat.h"
#include "sdmmc_cmd.h"
#include "esp_system.h"
#include "esp_spi_flash.h"
#include "board_def.h"

#define MOUNT_POINT "/sdcard"

void blink_led(void);
void sdcardTest(void);
void chipInfo(void);
