/*
 * This file is part of Cleanflight and Betaflight.
 *
 * Cleanflight and Betaflight are free software. You can redistribute
 * this software and/or modify this software under the terms of the
 * GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * Cleanflight and Betaflight are distributed in the hope that they
 * will be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define TARGET_BOARD_IDENTIFIER "AIK4"
#define USBD_PRODUCT_STRING     "AIKONF4"

#define LED0                    PB5
#define BEEPER                  PB4
#define BEEPER_INVERTED

#define USE_EXTI
#define GYRO_INT_EXTI            PC4
#define USE_MPU_DATA_READY_SIGNAL

#define USE_GYRO
#define USE_GYRO_MPU6000
#define USE_GYRO_MPU6500

#define MPU6000_CS_PIN           SPI1_NSS_PIN
#define MPU6000_SPI_BUS          BUS_SPI1
#define GYRO_MPU6000_ALIGN       CW0_DEG

#define MPU6500_CS_PIN          MPU6000_CS_PIN
#define MPU6500_SPI_BUS         MPU6000_SPI_BUS
#define GYRO_MPU6500_ALIGN      CW0_DEG

#define USE_ACC
#define USE_ACC_MPU6000
#define USE_ACC_MPU6500

#define SERIAL_PORT_COUNT       6   //VCP, USART1, USART2, SOFTSERIAL1

#define USE_UART_INVERTER

#define USE_VCP
#define VBUS_SENSING_PIN        PD2
#define VBUS_SENSING_ENABLED

#define USE_UART1
#define UART1_RX_PIN            PA10
#define UART1_TX_PIN            PA9
#define INVERTER_PIN_UART1_RX   PC0 // PC0 used as inverter select GPIO

#define USE_UART2
#define UART2_TX_PIN            PA2
#define UART2_RX_PIN            PA3

#define USE_UART3
#define UART3_RX_PIN            PB11
#define UART3_TX_PIN            PB10

#define USE_UART4
#define UART4_TX_PIN            PA0

#define USE_SOFTSERIAL1
#define SOFTSERIAL_1_TX_PIN     PA9
#define SOFTSERIAL_1_RX_PIN     PA9

#define USE_SOFTSERIAL2
#define SOFTSERIAL2_RX_PIN      PA1
#define SOFTSERIAL2_TX_PIN      PA1

#define USE_SPI
#define USE_SPI_DEVICE_1
#define SPI1_NSS_PIN            PA4
#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN           PA6
#define SPI1_MOSI_PIN           PA7

#define USE_SPI_DEVICE_2
#define SPI2_NSS_PIN            PB12
#define SPI2_SCK_PIN            PB13
#define SPI2_MISO_PIN           PB14
#define SPI2_MOSI_PIN           PB15

#define USE_SPI_DEVICE_3
#define SPI3_NSS_PIN            PA15
#define SPI3_SCK_PIN            PC10
#define SPI3_MISO_PIN           PC11
#define SPI3_MOSI_PIN           PC12

#define MAX_PWM_OUTPUT_PORTS    6

#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         0xffff
#define TARGET_IO_PORTD         0xffff

/*

#define USE_BARO
#define USE_BARO_BMP280

#define USE_MAX7456
#define MAX7456_SPI_INSTANCE    SPI3
#define MAX7456_SPI_CS_PIN      SPI3_NSS_PIN

#define ENABLE_BLACKBOX_LOGGING_ON_SPIFLASH_BY_DEFAULT
#define USE_FLASHFS
#define USE_FLASH_M25P16
#define FLASH_CS_PIN            SPI2_NSS_PIN
#define FLASH_SPI_INSTANCE      SPI2

#define SERIAL_PORT_COUNT       7 // VCP, USART1, USART3, USART4, USART6, SOFT_SERIAL1, SOFT_SERIAL2

#define USE_ESCSERIAL
#define ESCSERIAL_TIMER_TX_PIN  PB6  // (HARDARE=0,PPM)

#define USE_I2C
#define USE_I2C_DEVICE_1
#define I2C_DEVICE              (I2CDEV_1)
#define I2C1_SCL                PB8
#define I2C1_SDA                PB9

#define USE_ADC
#define CURRENT_METER_ADC_PIN   PC1
#define VBAT_ADC_PIN            PC2
#define RSSI_ADC_PIN            PC3
#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC
#define DEFAULT_CURRENT_METER_SOURCE CURRENT_METER_ADC

#define SERIALRX_PROVIDER       SERIALRX_SBUS
#define SERIALRX_UART           SERIAL_PORT_USART1

#define DEFAULT_RX_FEATURE      FEATURE_RX_SERIAL
#define DEFAULT_FEATURES        ( FEATURE_OSD | FEATURE_SOFTSERIAL )

*/
