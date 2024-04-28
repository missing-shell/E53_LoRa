# InToRobot_L8

## 简介

**IntoRobot_L8**组件本身基于**esp32-lora-library**库，在其基础上修改以适配 ESP32-C6 (ESP-IDF>=V5.1.1)。

[esp32-lora-library](https://github.com/Inteform/esp32-lora-library) 是一个要集成到 ESP32-IDF 中的 C 组件，用于通过基于 Semtech SX127_ IC 的 LoRa 收发器发送和接收数据。

**esp32-lora-library**库本身基于 Arduino 的 sandeepmistry [arduino-LoRa](<https://github.com/sandeepmistry/arduino-LoRa>) 库。

### 如何移植

只需将 ```components/IntoRobot_L8```组件复制到您的 ESP-IDF 项目目录或 $IDF_PATH 的 ```components/``` 路径中（它将对您的所有项目公开）。
然后你可以简单地```#include "lora.h"```并使用它的函数。
使用 ```idf.py menuconfig``` 配置 LoRa 对应选项（如引脚号）

## Basic usage

A simple **sender** program...

```c
#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "lora.h"

void task_tx(void *p)
{
   for(;;) {
      vTaskDelay(pdMS_TO_TICKS(5000));
      lora_send_packet((uint8_t*)"Hello", 5);
      ESP_LOGI("TEST", "packet sent...");
   }
}

void app_main()
{
   lora_init();
   lora_set_frequency(433e6);
   lora_enable_crc();
   xTaskCreate(&task_tx, "task_tx", 2048, NULL, 5, NULL);
}

```

Meanwhile in the **receiver** program...

```c
#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "lora.h"

uint8_t buf[32];

void task_rx(void *p)
{
   int x;
   for(;;) {
      lora_receive();    // put into receive mode
      while(lora_received()) {
         x = lora_receive_packet(buf, sizeof(buf));
         buf[x] = 0;
          ESP_LOGI("TEST", "Received: %s", buf);
         lora_receive();
      }
      vTaskDelay(1);
   }
}

void app_main()
{
   lora_init();
   lora_set_frequency(433e6);
   lora_enable_crc();
   xTaskCreate(&task_rx, "task_rx", 2048, NULL, 5, NULL);
}
```

## Connection with the RF module

By default, the pins used to control the RF transceiver are--

Pin | Signal
--- | ------
CS | IO23
RST | IO21
MISO | IO20
MOSI | IO18
SCK | IO19

but you can reconfigure the pins using ```make menuconfig``` and changing the options in the "LoRa Options --->"
