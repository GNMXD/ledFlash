
#include "led.h"

static char ledStatus = 0;
static int  ledCnt = 0;

void led_init(void)
{
  ledStatus = 0;
  ledCnt = 0;
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
