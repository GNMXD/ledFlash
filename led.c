
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
  ledCnt++;
  if(ledCnt >10)
  {
    ledCnt = 0;
  }

  switch(ledCnt)
  {
    case 0:
     ledStatus = 1;
     break;
    case 5:
     ledStatus = 0;
     break;
    default:
     break;
  }
}
