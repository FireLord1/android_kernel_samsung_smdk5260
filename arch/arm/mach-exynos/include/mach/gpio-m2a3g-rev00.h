/*
 * Copyright (c) 2012 Samsung Electronics Co., Ltd.
 *              http://www.samsung.com
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __MACH_GPIO_M2A3G_REV00_H
#define __MACH_GPIO_M2A3G_REV00_H __FILE__

#include "gpio-exynos.h"

#define GPIO_DUMMY_CONFIG 			EXYNOS5260_GPB0(0)

/* Build error dummy pin : hlite pin */

#define GPIO_PROX_LED_EN			GPIO_DUMMY_CONFIG
#define GPIO_PROX_SENSOR_INT		GPIO_DUMMY_CONFIG
/*****************************************************/

#if 0
#define EMUL_GPIO_BT_UART_RXD		EXYNOS5260_GPA0(0)
#define EMUL_GPIO_BT_UART_TXD		EXYNOS5260_GPA0(1)
#define EMUL_GPIO_BT_UART_CTS		EXYNOS5260_GPA0(2)
#define EMUL_GPIO_BT_UART_RTS		EXYNOS5260_GPA0(3)

#define EMUL_GPIO_AP_RXD			EXYNOS5260_GPA1(4)
#define EMUL_GPIO_AP_TXD			EXYNOS5260_GPA1(5)

#define EMUL_GPIO_TSP_SDA_18V		EXYNOS5260_GPB3(0)
#define EMUL_GPIO_TSP_SCL_18V		EXYNOS5260_GPB3(1)

#define EMUL_GPIO_AP_PMIC_SDA		EXYNOS5260_GPB4(2)
#define EMUL_GPIO_AP_PMIC_SCL		EXYNOS5260_GPB4(3)

#define EMUL_GPIO_CAM_IO_EN		EXYNOS5260_GPD2(0)
#define EMUL_GPIO_PDA_ACTIVE		EXYNOS5260_GPX3(6)
#endif

#define GPIO_GPS_UART_RXD			EXYNOS5260_GPA0(0)
#define GPIO_GPS_UART_TXD			EXYNOS5260_GPA0(1)
#define GPIO_GPS_UART_CTS			EXYNOS5260_GPA0(2)
#define GPIO_GPS_UART_RTS			EXYNOS5260_GPA0(3)
#define GPIO_AP_RXD						EXYNOS5260_GPA1(0)
#define GPIO_AP_TXD						EXYNOS5260_GPA1(1)
#define GPIO_ALS_3V_EN				EXYNOS5260_GPA1(2)
#define GPIO_GPS_PWR_EN				EXYNOS5260_GPA1(3)
#define GPIO_PDA_ACTIVE				EXYNOS5260_GPA1(4)
#define GPIO_HDMI_EN					EXYNOS5260_GPA1(5)
#define GPIO_eMMC_EN					EXYNOS5260_GPA1(6)

#define GPIO_CODEC_SPI_SCK		EXYNOS5260_GPA2(0)
#define GPIO_CODEC_SPI_SS_N		EXYNOS5260_GPA2(1)
#define GPIO_CODEC_SPI_MISO		EXYNOS5260_GPA2(2)
#define GPIO_CODEC_SPI_MOSI		EXYNOS5260_GPA2(3)
#define GPIO_ISP_SPI1_SCK			EXYNOS5260_GPA2(4)
#define GPIO_ISP_SPI1_EN			EXYNOS5260_GPA2(5)
#define GPIO_ISP_SPI1_MISO		EXYNOS5260_GPA2(6)
#define GPIO_ISP_SPI1_MOSI		EXYNOS5260_GPA2(7)

#define GPIO_ALS_28V_EN				EXYNOS5260_GPB1(0)
#define GPIO_TSP_POWER				EXYNOS5260_GPB1(1)
#define GPIO_WLAN_EN				EXYNOS5260_GPB1(2)
#define GPIO_BT_EN						EXYNOS5260_GPB1(3)

#define GPIO_VIBTONE_PWM			EXYNOS5260_GPB2(0)
#define GPIO_AP_ISP_POWER_KEY	EXYNOS5260_GPB2(1)
#define GPIO_NFC_EN						EXYNOS5260_GPB2(2)
#define GPIO_ACTIVE_STATE			EXYNOS5260_GPB2(3)

#define GPIO_AP_PMIC_SDA			EXYNOS5260_GPB3(0)
#define GPIO_AP_PMIC_SCL			EXYNOS5260_GPB3(1)
#define GPIO_ISP_I2C_SDA			EXYNOS5260_GPB3(2)
#define GPIO_ISP_I2C_SCK			EXYNOS5260_GPB3(3)
#define GPIO_SENSOR_I2C_SDA		EXYNOS5260_GPB3(4)
#define GPIO_SENSOR_I2C_SCL		EXYNOS5260_GPB3(5)
#define GPIO_NFC_SDA_18V			EXYNOS5260_GPB3(6)
#define GPIO_NFC_SCL_18V			EXYNOS5260_GPB3(7)
#define GPIO_PS_ALS_SDA_18V		EXYNOS5260_GPB4(0)
#define GPIO_PS_ALS_SCL_18V		EXYNOS5260_GPB4(1)
#define GPIO_TSP_SDA_18V			EXYNOS5260_GPB4(2)
#define GPIO_TSP_SCL_18V			EXYNOS5260_GPB4(3)
#define GPIO_MHL_DSDA_18V			EXYNOS5260_GPB4(4)
#define GPIO_MHL_DSCL_18V			EXYNOS5260_GPB4(5)
#define GPIO_IMA_I2C_SDA_18V	EXYNOS5260_GPB4(6)
#define GPIO_IMA_I2C_SCL_18V	EXYNOS5260_GPB4(7)

#define GPIO_IF_PMIC_SDA		EXYNOS5260_GPB5(0)
#define GPIO_IF_PMIC_SCL		EXYNOS5260_GPB5(1)
#define GPIO_FUEL_SDA_18V		EXYNOS5260_GPB5(2)
#define GPIO_FUEL_SCL_18V		EXYNOS5260_GPB5(3)
#define GPIO_2TOUCH_SDA			EXYNOS5260_GPB5(4)
#define GPIO_2TOUCH_SCL			EXYNOS5260_GPB5(5)
#define GPIO_MHL_SDA_18V		EXYNOS5260_GPB5(6)
#define GPIO_MHL_SCL_18V		EXYNOS5260_GPB5(7)

#define GPIO_NAND_CLK				EXYNOS5260_GPC0(0)
#define GPIO_NAND_CMD				EXYNOS5260_GPC0(1)
#define GPIO_NAND_D0				EXYNOS5260_GPC0(2)
#define GPIO_NAND_D1				EXYNOS5260_GPC0(3)
#define GPIO_NAND_D2				EXYNOS5260_GPC0(4)
#define GPIO_NAND_D3				EXYNOS5260_GPC0(5)
#define GPIO_EMMC_RCLK			EXYNOS5260_GPC0(6)

#define GPIO_WLAN_SDIO_CLK	EXYNOS5260_GPC1(0)
#define GPIO_WLAN_SDIO_CMD	EXYNOS5260_GPC1(1)
#define GPIO_WLAN_SDIO_D0		EXYNOS5260_GPC1(2)
#define GPIO_WLAN_SDIO_D1		EXYNOS5260_GPC1(3)
#define GPIO_WLAN_SDIO_D2		EXYNOS5260_GPC1(4)
#define GPIO_WLAN_SDIO_D3		EXYNOS5260_GPC1(5)

#define GPIO_T_FLASH_CLK		EXYNOS5260_GPC2(0)
#define GPIO_T_FLASH_CMD		EXYNOS5260_GPC2(1)
#define GPIO_T_FLASH_D0			EXYNOS5260_GPC2(3)
#define GPIO_T_FLASH_D1			EXYNOS5260_GPC2(4)
#define GPIO_T_FLASH_D2			EXYNOS5260_GPC2(5)
#define GPIO_T_FLASH_D3			EXYNOS5260_GPC2(6)

#define GPIO_NAND_D4				EXYNOS5260_GPC3(0)
#define GPIO_NAND_D5				EXYNOS5260_GPC3(1)
#define GPIO_NAND_D6				EXYNOS5260_GPC3(2)
#define GPIO_NAND_D7				EXYNOS5260_GPC3(3)

#define GPIO_AP_ISP_RESET		EXYNOS5260_GPC4(0)
#define GPIO_LED_VDD_EN			EXYNOS5260_GPC4(1)
#define GPIO_LCD_22V_EN			EXYNOS5260_GPC4(2)
#define GPIO_REC_MICBIAS_EN	EXYNOS5260_GPC4(3)

#define GPIO_HW_REV0						EXYNOS5260_GPD0(0)
#define GPIO_HW_REV1						EXYNOS5260_GPD0(1)
#define GPIO_HW_REV2						EXYNOS5260_GPD0(2)
#define GPIO_HW_REV3						EXYNOS5260_GPD0(3)
#define GPIO_ISP_BOOT_OPT				EXYNOS5260_GPD0(4)
#define GPIO_OLED_DET						EXYNOS5260_GPD0(5)
#define GPIO_MAIN_MICBIAS_EN		EXYNOS5260_GPD0(6)
#define GPIO_CODEC_LDO_EN				EXYNOS5260_GPD0(7)

#define GPIO_CAM_IO_EN			EXYNOS5260_GPD1(0)
#define GPIO_2TOUCH_INT			EXYNOS5260_GPD1(1)
#define GPIO_VT_CAM_ID			EXYNOS5260_GPD1(2)
#define GPIO_CCI_MODE				EXYNOS5260_GPD1(3)
#define GPIO_MLCD_RST				EXYNOS5260_GPD1(4)
#define GPIO_KEY_S1					EXYNOS5260_GPD1(5)
#define GPIO_KEY_S2					EXYNOS5260_GPD1(6)

#define GPIO_ISP_STATUS_INT	EXYNOS5260_GPD2(0)
#define GPIO_VTOUCH_LDO_EN	EXYNOS5260_GPD2(1)
#define GPIO_e_FUSE_ON			EXYNOS5260_GPD2(2)
#define GPIO_PHONE_ON				EXYNOS5260_GPD2(3)
#define GPIO_AP_DUMP_INT		EXYNOS5260_GPD2(4)

#define GPIO_TP4002					EXYNOS5260_GPE0(0)
#define GPIO_TP4003					EXYNOS5260_GPE0(1)
#define GPIO_VT_CAM_STBY		EXYNOS5260_GPE0(2)
#define GPIO_CAM_18V_EN			EXYNOS5260_GPE0(3)
#define GPIO_VT_CAM_nRST		EXYNOS5260_GPE0(4)

#define GPIO_SUSPEND_REQUEST	EXYNOS5260_GPE0(6)
#define GPIO_OIS_RST					EXYNOS5260_GPE0(7)

#define GPIO_IPC_SLAVE_WAKEUP		EXYNOS5260_GPE1(0)
#define GPIO_VT_CAM_MCLK		EXYNOS5260_GPE1(3)

#define GPIO_VT_CAM_SDA_18V		EXYNOS5260_GPF0(2)
#define GPIO_VT_CAM_SCL_18V		EXYNOS5260_GPF0(3)


#define GPIO_IMA_PWR_EN			EXYNOS5260_GPF1(0)
#define GPIO_MLCD_ON				EXYNOS5260_GPF1(1)
#define GPIO_IMA_CMC_EN			EXYNOS5260_GPF1(2)
#define GPIO_IMA_NRST				EXYNOS5260_GPF1(3)
#define GPIO_IMA_SLEEP			EXYNOS5260_GPF1(4)
#define GPIO_WRSTBI_EN			EXYNOS5260_GPF1(6)
#define GPIO_ERR_FG					EXYNOS5260_GPF1(7)

#define GPIO_ISP_INT2				EXYNOS5260_GPK0(0)
#define GPIO_ISP_INT1				EXYNOS5260_GPK0(1)

#define GPIO_MHL_INT					EXYNOS5260_GPX0(0)
#define GPIO_HALL_SENSOR_INT	EXYNOS5260_GPX0(1)
#define GPIO_VOLUP_BUTTON			EXYNOS5260_GPX0(2)
#define GPIO_VOLDOWN_BUTTON		EXYNOS5260_GPX0(3)
#define GPIO_NFC_FIRMWARE			EXYNOS5260_GPX0(4)
#define GPIO_HOME_BUTTON			EXYNOS5260_GPX0(5)
#define GPIO_AP_PMIC_IRQ			EXYNOS5260_GPX0(7)

#define GPIO_MHL_RST				EXYNOS5260_GPX1(0)
#define GPIO_CP_PMU_RST			EXYNOS5260_GPX1(1)
#define GPIO_IPC_HOST_WAKEUP		EXYNOS5260_GPX1(2)
#define GPIO_NFC_IRQ			EXYNOS5260_GPX1(3)
#define GPIO_IF_PMIC_IRQ		EXYNOS5260_GPX1(4)
#define GPIO_FUEL_ALERT			EXYNOS5260_GPX1(5)
#define GPIO_TSP_INT			EXYNOS5260_GPX1(6)
#define GPIO_PS_INT				EXYNOS5260_GPX1(7)

#define GPIO_WLAN_HOST_WAKE		EXYNOS5260_GPX2(0)
#define GPIO_BT_HOST_WAKE		EXYNOS5260_GPX2(1)
#define GPIO_POWER_BUTTON		EXYNOS5260_GPX2(2)
#define GPIO_IMA_INT				EXYNOS5260_GPX2(3)

#define GPIO_EAR_SEND_END		EXYNOS5260_GPX2(5)
#define GPIO_CP_DUMP_INT		EXYNOS5260_GPX2(6)
#define GPIO_PHONE_ACTIVE		EXYNOS5260_GPX2(7)

#define GPIO_ISP_INT1_SH			EXYNOS5260_GPX3(0)
#define GPIO_ISP_INT2_SH			EXYNOS5260_GPX3(1)
#define GPIO_BT_WAKE				EXYNOS5260_GPX3(2)
#define GPIO_G_SENSOR_INT		EXYNOS5260_GPX3(3)
#define GPIO_M_SENSOR_RSTN	EXYNOS5260_GPX3(4)
#define GPIO_RESET_REQ_N		EXYNOS5260_GPX3(5)
#define GPIO_T_FLASH_DETECT	EXYNOS5260_GPX3(6)
#define GPIO_HDMI_HPD				EXYNOS5260_GPX3(7)

#define GPIO_MM_I2S_CLK			EXYNOS5260_GPZ0(0)
#define GPIO_MM_I2S_SYNC		EXYNOS5260_GPZ0(2)
#define GPIO_MM_I2S_DI			EXYNOS5260_GPZ0(3)
#define GPIO_MM_I2S_DO			EXYNOS5260_GPZ0(4)

#define GPIO_BT_UART_RXD		EXYNOS5260_GPZ1(0)
#define GPIO_BT_UART_TXD		EXYNOS5260_GPZ1(1)
#define GPIO_BT_UART_CTS		EXYNOS5260_GPZ1(2)
#define GPIO_BT_UART_RTS		EXYNOS5260_GPZ1(3)

#define GPIO_AP_JTAG_NTRST		EXYNOS5260_ETC0(0)
#define GPIO_AP_JTAG_TMS		EXYNOS5260_ETC0(1)
#define GPIO_AP_JTAG_TCK		EXYNOS5260_ETC0(2)
#define GPIO_AP_JTAG_DI			EXYNOS5260_ETC0(3)
#define GPIO_AP_JTAG_DO			EXYNOS5260_ETC0(4)
#define GPIO_GND			EXYNOS5260_ETC0(5)

#define GPIO_AP_N_RST_IN		EXYNOS5260_ETC6(0)
#define GPIO_XTAL_24MHZ_AP		EXYNOS5260_ETC6(1)
#define GPIO_AP_JTAG_EXTRST		EXYNOS5260_ETC6(3)

#endif
