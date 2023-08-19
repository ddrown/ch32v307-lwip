# CH32V307 LWIP learning routine

The the lwip configuration file `lwipopts.h` is `CH32V307_LWIP_TMOS_10MPHY/src/Drivers/LWIP/arch/lwipopts.h`

The platform-specific ethernet file is `CH32V307_LWIP_TMOS_10MPHY/src/Drivers/LWIP/arch/ethernetif.c`

Connect PB8 to ELED1 (green) and PB9 to ELED2 (amber) for link and data activity LEDs on the Ethernet jack

This sends ch32v307 as the DHCP hostname if your router automatically assigns it a DNS name

## [CH32V307_LWIP_TMOS_10MPHY](https://github.com/ddrown/ch32v307-lwip/tree/main/CH32V307/CH32V307_LWIP_TMOS_10MPHY) is the LWIP porting routine using CH32V307 on-chip 10M Ethernet PHY

# CH32V307 LWIP学习使用例程

lwip配置文件`lwipopts.h`存放路径为工程目录下`CH32V307_LWIP_TMOS_10MPHY\Drivers\LWIP\arch\lwipopts.h`

移植文件`ethernetif.c`存放路径为工程目录下`CH32V307\CH32V307_LWIP_TMOS_10MPHY\Drivers\LWIP\arch\ethernetif.c`

## [CH32V307_LWIP_TMOS_10MPHY](https://github.com/smartmx/lwip_study_examples/tree/main/CH32V307/CH32V307_LWIP_TMOS_10MPHY)为使用CH32V307片上10M以太网PHY的LWIP移植例程
