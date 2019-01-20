
#include "led.h"

static char ledStatus = LED_STATUS_turnOff;
static int  ledCnt = 0;
static char ledMode =LED_MODE_turnOff;

void led_init(void)
{
  ledStatus = 0;
  ledCnt = 0;
}

void led_cfg(char mode)
{
  if(mode!=ledMode)
  {
    ledMode = mode;
  }
}

void led_fsm(void)
{
  if(++ledCnt >LED_CYCLE_CNT)
  {
    ledCnt = 0;
  }

  switch(ledCnt)
  {
    case 0:
     ledStatus = LED_STATUS_turnOff;
     break;
    case 5:
     ledStatus = LED_STATUS_turnOn;
     break;
    default:
     break;
  }
}

void led_Off(void)
{
  ledStatus = LED_STATUS_turnOff;
}

void led_turnOn(void)
{
  ledStatus = LED_STATUS_turnOn;
}
