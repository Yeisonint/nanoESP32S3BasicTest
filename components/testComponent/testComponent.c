#include "testComponent.h"

static const char *TAG = "testComponent";

void helloWorld(void)
{
	for(int hwCount=0;hwCount<10;hwCount++) {
    	printf("Hello world! from testComponent\n");
        ESP_LOGI(TAG, "Hello from LOG");
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
	ESP_LOGI(TAG, "Finished");
}
