/*******************************************************************************
* File Name: cycfg_pins.h
*
* Description:
* Pin configuration
* This file was automatically generated and should not be modified.
* Tools Package 2.4.1.9711
* mtb-pdl-cat1 2.4.1.17937
* personalities 6.0.0.0
* udd 3.0.0.2024
*
********************************************************************************
* Copyright 2024 Cypress Semiconductor Corporation (an Infineon company) or
* an affiliate of Cypress Semiconductor Corporation.
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#if !defined(CYCFG_PINS_H)
#define CYCFG_PINS_H

#include "cycfg_notices.h"
#include "cy_gpio.h"
#include "cycfg_routing.h"
#if defined (CY_USING_HAL)
    #include "cyhal_hwmgr.h"
#endif //defined (CY_USING_HAL)

#if defined(__cplusplus)
extern "C" {
#endif

#if defined (CY_USING_HAL)
    #define CYBSP_WCO_IN (P0_0)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_WCO_OUT (P0_1)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_D0 (P0_2)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_D1 (P0_3)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SW3 (P0_4)
    #define CYBSP_USER_BTN1 CYBSP_SW3
    #define CYBSP_USER_BTN CYBSP_SW3
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_A0 (P10_0)
    #define CYBSP_J2_1 CYBSP_A0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_A1 (P10_1)
    #define CYBSP_J2_3 CYBSP_A1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_A2 (P10_2)
    #define CYBSP_J2_5 CYBSP_A2
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_A3 (P10_3)
    #define CYBSP_J2_7 CYBSP_A3
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_A4 (P10_4)
    #define CYBSP_J2_9 CYBSP_A4
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_A5 (P10_5)
    #define CYBSP_J2_11 CYBSP_A5
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_A6 (P10_6)
    #define CYBSP_J2_13 CYBSP_A6
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_A7 (P10_7)
    #define CYBSP_J2_15 CYBSP_A7
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_QSPI_SS (P11_2)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_QSPI_D3 (P11_3)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_QSPI_D2 (P11_4)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_QSPI_D1 (P11_5)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_QSPI_D0 (P11_6)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_QSPI_SCK (P11_7)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SPI_MOSI (P2_0)
    #define CYBSP_D11 CYBSP_SPI_MOSI
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SPI_MISO (P2_1)
    #define CYBSP_D12 CYBSP_SPI_MISO
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SPI_CLK (P2_2)
    #define CYBSP_D13 CYBSP_SPI_CLK
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SPI_CS (P2_3)
    #define CYBSP_D10 CYBSP_SPI_CS
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_D8 (P2_4)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_LED8 (P2_5)
    #define CYBSP_USER_LED1 CYBSP_LED8
    #define CYBSP_USER_LED CYBSP_LED8
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_D9 (P2_6)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_LED9 (P2_7)
    #define CYBSP_USER_LED2 CYBSP_LED9
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_DEBUG_UART_RX (P3_0)
    #define CYBSP_A14 CYBSP_DEBUG_UART_RX
    #define CYBSP_J2_14 CYBSP_DEBUG_UART_RX
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_DEBUG_UART_TX (P3_1)
    #define CYBSP_A15 CYBSP_DEBUG_UART_TX
    #define CYBSP_J2_16 CYBSP_DEBUG_UART_TX
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_D2 (P5_0)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_D3 (P5_1)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_D4 (P5_6)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_D5 (P5_7)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_D6 (P6_2)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_D7 (P6_3)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SWO (P6_4)
    #define CYBSP_I2C_SCL CYBSP_SWO
    #define CYBSP_D15 CYBSP_SWO
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_I2C_SDA (P6_5)
    #define CYBSP_D14 CYBSP_I2C_SDA
#endif //defined (CY_USING_HAL)
#define CYBSP_SWDIO_ENABLED 1U
#define CYBSP_SWDIO_PORT GPIO_PRT6
#define CYBSP_SWDIO_PORT_NUM 6U
#define CYBSP_SWDIO_PIN 6U
#define CYBSP_SWDIO_NUM 6U
#define CYBSP_SWDIO_DRIVEMODE CY_GPIO_DM_PULLUP
#define CYBSP_SWDIO_INIT_DRIVESTATE 1
#ifndef ioss_0_port_6_pin_6_HSIOM
    #define ioss_0_port_6_pin_6_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_SWDIO_HSIOM ioss_0_port_6_pin_6_HSIOM
#define CYBSP_SWDIO_IRQ ioss_interrupts_gpio_6_IRQn
#if defined (CY_USING_HAL)
    #define CYBSP_SWDIO_HAL_PORT_PIN P6_6
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SWDIO P6_6
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SWDIO_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SWDIO_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SWDIO_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_PULLUP
#endif //defined (CY_USING_HAL)
#define CYBSP_SWDCK_ENABLED 1U
#define CYBSP_SWDCK_PORT GPIO_PRT6
#define CYBSP_SWDCK_PORT_NUM 6U
#define CYBSP_SWDCK_PIN 7U
#define CYBSP_SWDCK_NUM 7U
#define CYBSP_SWDCK_DRIVEMODE CY_GPIO_DM_PULLDOWN
#define CYBSP_SWDCK_INIT_DRIVESTATE 1
#ifndef ioss_0_port_6_pin_7_HSIOM
    #define ioss_0_port_6_pin_7_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_SWDCK_HSIOM ioss_0_port_6_pin_7_HSIOM
#define CYBSP_SWDCK_IRQ ioss_interrupts_gpio_6_IRQn
#if defined (CY_USING_HAL)
    #define CYBSP_SWDCK_HAL_PORT_PIN P6_7
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SWDCK P6_7
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SWDCK_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SWDCK_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SWDCK_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_PULLDOWN
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_BTN0 (P7_0)
    #define CYBSP_CS_BTN0 CYBSP_CSD_BTN0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_BTN1 (P7_1)
    #define CYBSP_CS_BTN1 CYBSP_CSD_BTN1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD4 (P7_2)
    #define CYBSP_CS_SLD4 CYBSP_CSD_SLD4
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD3 (P7_3)
    #define CYBSP_CS_SLD3 CYBSP_CSD_SLD3
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CMOD (P7_7)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD2 (P8_0)
    #define CYBSP_CS_SLD2 CYBSP_CSD_SLD2
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_CSD_SLD1 (P8_1)
    #define CYBSP_CS_SLD1 CYBSP_CSD_SLD1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_A8 (P9_0)
    #define CYBSP_J2_2 CYBSP_A8
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_A9 (P9_1)
    #define CYBSP_J2_4 CYBSP_A9
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_A12 (P9_2)
    #define CYBSP_J2_10 CYBSP_A12
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_A13 (P9_3)
    #define CYBSP_J2_12 CYBSP_A13
    #define CYBSP_CSD_SLD0 CYBSP_A13
    #define CYBSP_CS_SLD0 CYBSP_A13
#endif //defined (CY_USING_HAL)

extern const cy_stc_gpio_pin_config_t CYBSP_SWDIO_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_SWDIO_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_SWDCK_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_SWDCK_obj;
#endif //defined (CY_USING_HAL)

void init_cycfg_pins(void);

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_PINS_H */
