#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"

extern void intoRobot_init();
void app_main()
{
    intoRobot_init();
}