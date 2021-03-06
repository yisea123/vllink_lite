/***************************************************************************
 *   Copyright (C) 2018 - 2019 by Chen Le <talpachen@gmail.com>            *
 *                                                                         *
 *   This program is free software: you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation, either version 3 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>. *
 ***************************************************************************/

#ifndef __VSFHAL_CFG_LVL2_H__
#define __VSFHAL_CFG_LVL2_H__

#define GD32F350

#ifndef CORE_CLKEN
#	define CORE_CLKEN						(GD32F3X0_CLK_HSI48M | GD32F3X0_CLK_PLL)
#endif
#ifndef CORE_CLKSRC
#	define CORE_CLKSRC						GD32F3X0_CLKSRC_PLL
#endif
#ifndef CORE_PLLSRC
#	define CORE_PLLSRC						GD32F3X0_PLLSRC_HSI48M
#endif
#ifndef HSI8M_FREQ_HZ
#	define HSI8M_FREQ_HZ					(8000000)
#endif
#ifndef HSI48M_FREQ_HZ
#	define HSI48M_FREQ_HZ					(48000000)
#endif
#ifndef HSE_FREQ_HZ
#	define HSE_FREQ_HZ						(12000000)
#endif
#ifndef HSI_FREQ_HZ
#	define HSI_FREQ_HZ						(32768)
#endif
#ifndef CORE_PLL_FREQ_HZ
#	define CORE_PLL_FREQ_HZ					(128 * 1000 * 1000)
#endif
#ifndef CORE_AHB_FREQ_HZ
#	define CORE_AHB_FREQ_HZ					(128 * 1000 * 1000)
#endif
#ifndef CORE_APB1_FREQ_HZ
#	define CORE_APB1_FREQ_HZ				(64 * 1000 * 1000)
#endif
#ifndef CORE_APB2_FREQ_HZ
#	define CORE_APB2_FREQ_HZ				(64 * 1000 * 1000)
#endif
#ifndef CORE_CPU_FREQ_HZ
#	define CORE_CPU_FREQ_HZ					(128 * 1000 * 1000)
#endif
#ifndef CORE_VECTOR_TABLE
#	define CORE_VECTOR_TABLE				FLASH_LOAD_OFFSET
#endif

#define VSFHAL_GPIO_EN						1
#define VSFHAL_USB_EN						1
#define VSFHAL_FLASH_EN						0
#define VSFHAL_USART_EN						0
#define VSFHAL_I2C_EN						0
#define VSFHAL_SPI_EN						0
#define VSFHAL_TIMER_EN						0
#define VSFHAL_ADC_EN						0
#define VSFHAL_PWM_EN						0
#define VSFHAL_JTAG_EN						0
#define VSFHAL_SWD_EN						0

#define VSFHAL_USART_NUM					2
#define VSFHAL_USART0_ENABLE				1
#define VSFHAL_USART1_ENABLE				1
#define VSFHAL_USART0_TXD_PA9_EN			1
#define VSFHAL_USART0_RXD_PA10_EN			1
#define VSFHAL_USART0_TXD_PB6_EN			0
#define VSFHAL_USART0_RXD_PB7_EN			0
#define VSFHAL_USART1_TXD_PA2_EN			0
#define VSFHAL_USART1_RXD_PA3_EN			1
#define VSFHAL_USART1_TXD_PA8_EN			0
#define VSFHAL_USART1_RXD_PB0_EN			0
#define VSFHAL_USART1_TXD_PA14_EN			0
#define VSFHAL_USART1_RXD_PA15_EN			0

#define VSFHAL_TICKCLK_PRIORITY				0xff
#define VSFHAL_PENDSV_PRIORITY				0xff
#define VSFHAL_USBD_PRIORITY				0xfe
#define VSFHAL_USART_PRIORITY				0xfd
#define VSFHAL_FLASH_PRIORITY				0xfe
#define VSFHAL_ADC_PRIORITY					0xfe
#define VSFHAL_JTAG_PRIORITY				0xfe
#define VSFHAL_SWD_PRIORITY					0xfe

#include "vsfhal_jtag.h"
#include "vsfhal_swd.h"

// KEY
#define PERIPHERAL_KEY_PORT					0
#define PERIPHERAL_KEY_PIN					4		// vllink lite r3
#define PERIPHERAL_KEY_VALID_LEVEL			1

// LED
#define PERIPHERAL_LED_RED_PORT				1
#define PERIPHERAL_LED_RED_PIN				6
#define PERIPHERAL_LED_GREEN_PORT			1
#define PERIPHERAL_LED_GREEN_PIN			7
#define PERIPHERAL_LED_VALID_LEVEL			1

// JTAG (SWD: TMS->SWDIO, TCK->SWCLK, RST->SWRST, TDO->SWO)
#define PERIPHERAL_GPIO_TDI_PORT			0
#define PERIPHERAL_GPIO_TDI_PIN				7
#define PERIPHERAL_GPIO_TMS_MO_PORT			1
#define PERIPHERAL_GPIO_TMS_MO_PIN			5
#define PERIPHERAL_GPIO_TMS_MI_PORT			1
#define PERIPHERAL_GPIO_TMS_MI_PIN			4
#define PERIPHERAL_GPIO_TCK0_PORT			0
#define PERIPHERAL_GPIO_TCK0_PIN			5
#define PERIPHERAL_GPIO_SRST_PORT			1
#define PERIPHERAL_GPIO_SRST_PIN			0
#define PERIPHERAL_GPIO_TDO_MI_PORT			0
#define PERIPHERAL_GPIO_TDO_MI_PIN			6
#define PERIPHERAL_GPIO_TDO_RX1_PORT		0
#define PERIPHERAL_GPIO_TDO_RX1_PIN			3
#define PERIPHERAL_GPIO_TRST_MO_PORT		1
#define PERIPHERAL_GPIO_TRST_MO_PIN			3
#define PERIPHERAL_GPIO_TRST_TX1_PORT		VSFHAL_DUMMY_PORT
#define PERIPHERAL_GPIO_TRST_TX1_PIN		0
#define PERIPHERAL_GPIO_TX0_PORT			0
#define PERIPHERAL_GPIO_TX0_PIN				9
#define PERIPHERAL_GPIO_RX0_PORT			0
#define PERIPHERAL_GPIO_RX0_PIN				10

// UART, SWO & EXT
#define PERIPHERAL_UART_SWO_INDEX			1
#define PERIPHERAL_UART_EXT_INDEX			0

#define PERIPHERAL_UART_PARITY_NONE			VSFHAL_USART_PARITY_NONE
#define PERIPHERAL_UART_PARITY_ODD			VSFHAL_USART_PARITY_ODD
#define PERIPHERAL_UART_PARITY_EVEN			VSFHAL_USART_PARITY_EVEN
#define PERIPHERAL_UART_STOPBITS_1			VSFHAL_USART_STOPBITS_1
#define PERIPHERAL_UART_STOPBITS_1P5		VSFHAL_USART_STOPBITS_1P5
#define PERIPHERAL_UART_STOPBITS_2			VSFHAL_USART_STOPBITS_2
#define PERIPHERAL_UART_BITLEN_8			VSFHAL_USART_BITLEN_8
#define PERIPHERAL_UART_PRIORITY			VSFHAL_USART_PRIORITY
#define PERIPHERAL_UART_MODE_DEFAULT		(PERIPHERAL_UART_PARITY_NONE | PERIPHERAL_UART_STOPBITS_1 | PERIPHERAL_UART_BITLEN_8)
#define PERIPHERAL_UART_BAUD_DEFAULT		115200


#endif // __VSFHAL_CFG_LVL2_H__

