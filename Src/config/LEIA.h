#ifndef __LEIA_CONFIG_H_
#define __LEIA_CONFIG_H_

#ifdef LEIA

#include "LEIA_USART.h"
#include "LEIA_BITBANG.h"
#include "LEIA_FLASHER.h"

/////////////////////////// SMARTCARD CONTACT PIN //////////////////////////////

#define SMARTCARD_CONTACT_ACTIVE                1

#if defined(SMARTCARD_CONTACT_ACTIVE)
#define SMARTCARD_CONTACT_PORT                  GPIOC
#define SMARTCARD_CONTACT_PIN                   LL_GPIO_PIN_11
#define SMARTCARD_CONTACT_SYSCFG_EXTI_PORT      LL_SYSCFG_EXTI_PORTC
#define SMARTCARD_CONTACT_SYSCFG_EXTI_LINE      LL_SYSCFG_EXTI_LINE11
#define SMARTCARD_CONTACT_EXTI_LINE             LL_EXTI_LINE_11
#define SMARTCARD_CONTACT_IRQn                  EXTI15_10_IRQn
#define SMARTCARD_CONTACT_IRQHANDLER            EXTI15_10_IRQHandler
#endif

/////////////////////////////// DEBUG //////////////////////////////////////////

#define DEBUG_UART                              USART1
#define DEBUG_UART_ENABLE_CLOCK()               LL_APB2_GRP1_EnableClock(LL_APB2_GRP1_PERIPH_USART1)
#define DEBUG_GPIO_ENABLE_CLOCK()               LL_AHB1_GRP1_EnableClock(LL_AHB1_GRP1_PERIPH_GPIOB)
#define DEBUG_GPIO_PIN                          LL_GPIO_PIN_6
#define DEBUG_GPIO_PORT                         GPIOB
#define DEBUG_GPIO_AF                           LL_GPIO_AF_7
#define DEBUG_TX_RINGBUFF_SIZE                  4096

////////////////////////////// CONSOLE /////////////////////////////////////////

#define CONSOLE_UART                            UART4
#define CONSOLE_UART_IRQ                        UART4_IRQHandler
#define CONSOLE_UART_IRQn                       UART4_IRQn
#define CONSOLE_UART_CLOCK                      LL_APB1_GRP1_PERIPH_UART4
#define CONSOLE_GPIO_CLOCK                      LL_AHB1_GRP1_PERIPH_GPIOA
#define CONSOLE_DMA_CLOCK                       LL_AHB1_GRP1_PERIPH_DMA1
#define CONSOLE_UART_ENABLE_CLOCK()             LL_APB1_GRP1_EnableClock(LL_APB1_GRP1_PERIPH_UART4)
#define CONSOLE_GPIO_ENABLE_CLOCK()             LL_AHB1_GRP1_EnableClock(LL_AHB1_GRP1_PERIPH_GPIOA)
#define CONSOLE_DMA_ENABLE_CLOCK()              LL_AHB1_GRP1_EnableClock(LL_AHB1_GRP1_PERIPH_DMA1)
#define CONSOLE_TX_GPIO_PIN                     LL_GPIO_PIN_0
#define CONSOLE_TX_GPIO_PORT                    GPIOA
#define CONSOLE_TX_GPIO_AF                      LL_GPIO_AF_8
#define CONSOLE_RX_GPIO_PIN                     LL_GPIO_PIN_1
#define CONSOLE_RX_GPIO_PORT                    GPIOA
#define CONSOLE_RX_GPIO_AF                      LL_GPIO_AF_8
#define CONSOLE_DMA                             DMA1
#define CONSOLE_DMA_CHANNEL                     LL_DMA_CHANNEL_4
#define CONSOLE_DMA_RX_STREAM                   LL_DMA_STREAM_2
#define CONSOLE_DMA_TX_STREAM                   LL_DMA_STREAM_4
#define CONSOLE_DMA_RX_IRQ                      DMA1_Stream2_IRQHandler
#define CONSOLE_DMA_RX_IRQn                     DMA1_Stream2_IRQn
#define CONSOLE_DMA_TX_IRQ                      DMA1_Stream4_IRQHandler
#define CONSOLE_DMA_TX_IRQn                     DMA1_Stream4_IRQn
#define CONSOLE_TX_RINGBUFF_SIZE                16500
#define CONSOLE_RX_RINGBUFF_SIZE                CONSOLE_TX_RINGBUFF_SIZE
#define CONSOLE_RX_DMA_SIZE                     64

/////////////////////////////// LEDS ///////////////////////////////////////////

#define LEDS_ERROR_GPIO_PORT                    GPIOC
#define LEDS_ERROR_GPIO_PIN                     LL_GPIO_PIN_4
#define LEDS_STATUS_GPIO_PORT                   GPIOC
#define LEDS_STATUS_GPIO_PIN                    LL_GPIO_PIN_5
#define LEDS_GPIO_ENABLE_CLOCK()                LL_AHB1_GRP1_EnableClock(LL_AHB1_GRP1_PERIPH_GPIOC)

///////////////////////////// TRIGGERS /////////////////////////////////////////

// Our board trigger
#define TRIG_GPIO_PORT                          GPIOA
#define TRIG_GPIO_PIN                           LL_GPIO_PIN_15
#define TRIG_GPIO_ENABLE_CLOCK()                LL_AHB1_GRP1_EnableClock(LL_AHB1_GRP1_PERIPH_GPIOA)
// The ChipWhisperer trigger
#define TRIG_CW_GPIO_PORT                       GPIOE
#define TRIG_CW_GPIO_PIN                        LL_GPIO_PIN_10
#define TRIG_CW_GPIO_ENABLE_CLOCK()             LL_AHB1_GRP1_EnableClock(LL_AHB1_GRP1_PERIPH_GPIOE)

#endif

#endif // __LEIA_CONFIG_H
