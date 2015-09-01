/*
  wiring.c - Wiring compatibility layer with mods for
  the Konekt Dash and Konekt Dash Pro
  
  http://konekt.io
  
  Copyright (c) 2015 Konekt, Inc.  All rights reserved.
    

  Derived from file with original copyright notice:

  Copyright (c) 2015 Arduino LLC.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include "Arduino.h"

#ifdef __cplusplus
extern "C" {
#endif

PORT_Type * const g_portBase[PORT_INSTANCE_COUNT] = PORT_BASE_PTRS;
GPIO_Type * const g_gpioBase[GPIO_INSTANCE_COUNT] = GPIO_BASE_PTRS;
UART_Type * const g_uartBase[UART_INSTANCE_COUNT] = UART_BASE_PTRS;
PIT_Type  * const g_pitBase[PIT_INSTANCE_COUNT]   = PIT_BASE_PTRS;

void init(void)
{
    SysTick_Config(SystemCoreClock/1000U);
}

#ifdef __cplusplus
}
#endif
