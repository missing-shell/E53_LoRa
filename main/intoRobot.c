#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "lora.h"

static void task_tx(void *p)
{
    while (1)
    {
        vTaskDelay(pdMS_TO_TICKS(5000));
        lora_send_packet((uint8_t *)"Hello", 5);
        ESP_LOGI("TEST", "packet sent...");
    }
}

void intoRobot_init()
{
    lora_init();
    lora_set_frequency(433e6);
    lora_enable_crc();

    xTaskCreate(&task_tx, "task_tx", 2048, NULL, 5, NULL);
}