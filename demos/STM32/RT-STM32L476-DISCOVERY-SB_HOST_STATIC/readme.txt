*****************************************************************************
** ChibiOS/RT and ChibiOS/SB demo for ARM-Cortex-M4 STM32L476.             **
*****************************************************************************

** TARGET **

The demo runs on an ST_NUCLEO_L476RG board.

** The Demo **

The demo starts two sandboxed threads which have only access to their
memory areas are are made unable to crash the whole system.

Two static sandboxes are created:
- Sandbox 1 uses MPU regions 0 for code and 1 for data.
- Sandbox 2 uses MPU regions 2 for code and 3 for data.

The sandbox is of the static kind, MPU regions are programmed and never
modified at runtime during context switch.

The main application exchanges messages with sandboxed threads using the
ChibiOS/SB API.

** Build Procedure **

The demo has been tested by using the official ARM GCC compiler available
here:

https://developer.arm.com/tools-and-software/open-source-software/developer-tools/gnu-toolchain/gnu-rm

The project can be compiled using the "make all" command.

Note that the project also requires the binary images to be loaded into the
sandboxes, the projects are:
- /demos/STM32/RT-STM32L476-DISCOVERY-SB_CLIENT1
- /demos/STM32/RT-STM32L476-DISCOVERY-SB_CLIENT2

You need to load in flash the three images together.

** Notes **

Some files used by the demo are not part of ChibiOS but are copyright of
ARM and STMicroelectronics.