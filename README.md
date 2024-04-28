# LoRa_sx1278

| Supported Targets | ESP32 | ESP32-C2 | ESP32-C3 | ESP32-C6 | ESP32-H2 | ESP32-S2 | ESP32-S3 |
| ----------------- | ----- | -------- | -------- | -------- | -------- | -------- | -------- |

## 使用 SPI 通信

引脚连接:
|InToRobot_L8| ESP32c6  |  说明   |
|------------|----------|---------|
| DIO0       |       | DIO 引脚映射功能 |
| DIO1       |        | DIO 引脚映射功能 |
| DIO2       |       | DIO 引脚映射功能 |
| DIO3       |        | DIO 引脚映射功能 |
| DIO4       |         | DIO 引脚映射功能 |
| DIO5       |       | DIO 引脚映射功能 |
| SPI_NSS    |       | SPI 引脚 |
| SPI_SCK    |       | SPI 引脚 |
| SPI_MISO   |        | SPI 引脚 |
| SPI_MOSI   |        | SPI 引脚 |
| RESET      |      | 复位使能 |
| 3.3v       | vcc      | 电源     |

### [使用组件IntoRobot_L8实现LoRa透传](components/InToRobot_L8)

引脚连接:
|InToRobot_L8| ESP32c6  |  说明   |
|------------|----------|---------|
| SPI_NSS    |   23    | SPI 引脚 |
| SPI_SCK    |   19    | SPI 引脚 |
| SPI_MISO   |   20    | SPI 引脚 |
| SPI_MOSI   |   18    | SPI 引脚 |
| RESET      |   21    | 复位使能 |
| 3.3v       |   vcc   | 电源     |
