# CH32V307 LWIP learning routine

Forked from https://github.com/smartmx/lwip_study_examples

This is LWIP using the CH32V307 and it's on-chip 10M Ethernet PHY

The the lwip configuration file `lwipopts.h` is `src/Drivers/LWIP/arch/lwipopts.h`

The platform-specific ethernet file is `src/Drivers/LWIP/arch/ethernetif.c`

Connect PB8 to ELED1 (green) and PB9 to ELED2 (amber) for link and data activity LEDs on the Ethernet jack

This sends ch32v307 as the DHCP hostname if your router automatically assigns it a DNS name
