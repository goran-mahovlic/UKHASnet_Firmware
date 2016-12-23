UKHASnet Firmware
==========

This repository contains firmware for creating UKHASnet Sensor Nodes on STM32


To configure the nodes, copy 'NodeConfig-template.h' to 'NodeConfig.h' and fill in the settings for your nodes, this file will be included automatically at compilation.

arduino-repeater
======

This is a repeater implementation designed to be used with an STM32 and the Arduino IDE.

This code implements the UKHASnet repeating protocol.

The 'zombie mode' is where the node will stop repeating, only transmitting it's own beacon packets, if the battery level is low. If the battery level declines further, the node will stop transmitting altogether until the voltage recovers.

UART output, when enabled, allows the node to be used to submit packets generated, heard and repeated up to the UKHAS.net system.

arduino-gateway
======

This is a low-power sensor implementation designed to be used with an STM32,the Arduino IDE.




All code in this repository is under the MIT License unless stated otherwise. Authors retain their copyright.

