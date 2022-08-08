#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "esp_log.h"
#include "sdkconfig.h"
#include "testComponent.h"
#include "board_def.h"
#include "board_test.h"

static const char *TAG = "main";

void app_main(void)
{

    while (true) {
    	ESP_LOGI(TAG, "Hello world");
    	helloWorld();
    	ESP_LOGI(TAG, "Blink led");
    	blink_led();
    	//ESP_LOGI(TAG, "SDCard test");
    	//sdcardTest();


    }
}
