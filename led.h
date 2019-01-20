#ifndef __LED_FLASH_H__
#define __LED_FLASH_H__

#include "stdio.h"

#define LED_STATUS_turnOn   0
#define LED_STATUS_turnOff  1

#define LED_CYCLE_CNT      10

#define LED_MODE_turnOn     1
#define LED_MODE_turnOff    0

void led_init(void);

void led_fsm(void);

#endif
