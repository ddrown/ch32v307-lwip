# CH32V307 LWIP learning routine

Forked from https://github.com/smartmx/lwip_study_examples

This is LWIP using the CH32V307 and its on-chip 10M Ethernet PHY

The the lwip configuration file `lwipopts.h` is `src/Drivers/LWIP/arch/lwipopts.h`

The platform-specific ethernet file is `src/Drivers/LWIP/arch/ethernetif.c`

This code is currently based on LWIP 2.1.3 & LWIP contrib 2.1.0

An example project using this library is available at https://github.com/ddrown/ch32v307-lwip-example
