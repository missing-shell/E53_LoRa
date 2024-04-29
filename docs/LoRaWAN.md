# LoRaWAN

## 简介

- LoRaWAN 开放规范是一个低功耗广域网 (LPWAN) 标准，由非盈利技术联盟LoRa Alliance®管理。

- LoRaWAN 是一种基于云的[介质访问控制](https://en.wikipedia.org/wiki/Medium_access_control "介质访问控制")(MAC) 层协议，但主要充当网络层协议，用于管理[LPWAN](https://en.wikipedia.org/wiki/LPWAN "低功耗广域网") [网关](https://en.wikipedia.org/wiki/Gateway_(telecommunications) "网关（电信）")和终端节点设备之间的通信，作为 LoRa 联盟维护的路由协议。

- 在无线通信中，特别是在物联网领域，有效的信道利用和冲突避免对于网络可靠性和频谱效率至关重要。此前，LoRaWAN 依赖[ALOHA](https://en.wikipedia.org/wiki/ALOHAnet "阿罗哈网")作为[介质访问控制](https://en.wikipedia.org/wiki/Medium_access_control "介质访问控制")(MAC) 层协议，但为了改进这一点，LoRa 联盟的技术建议 TR013 [[22]](https://en.wikipedia.org/wiki/LoRa#cite_note-:2-22)引入了[CSMA-CA](https://en.wikipedia.org/wiki/Carrier-sense_multiple_access_with_collision_avoidance "具有冲突避免功能的载波侦听多路访问")，它专为考虑 LoRa 独特的调制特性而定制，包括扩频因素正交性，[[14]](https://en.wikipedia.org/wiki/LoRa#cite_note-measurement_studies-14)[和低于本底噪声](https://en.wikipedia.org/wiki/Noise-floor "本底噪声")通信的能力。

- LoRaWAN 利用工业、科学和医疗 (ISM) 频段中的未经许可的无线电频谱。该规范定义了 LoRa® 物理层参数和 LoRaWAN 标准的设备到基础设施，并提供制造商之间的无缝互操作性。

- 满足关键的物联网 (IoT) 要求，例如双向通信、端到端安全、移动性和地理定位服务。

- 开放式 LoRaWAN 标准具有强制身份验证、完整性、重放保护和加密功能。该规范定义了三层**AES-128**加密技术。初始网络访问依赖于设备和加入服务器之间的相互身份验证。终端设备和网络服务器之间的安全性确保了可靠的网络。最后，应用程序级别的端到端加密可以保持数据机密性。

- 主要优势：**低功耗、本地地理位置、低网络部署和模块成本**
