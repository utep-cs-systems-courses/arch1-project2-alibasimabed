#include <msp430.h>
#include "led.h"

void led_inti(){

  P1DIR |=  LEDS;
}
void turn_red_on(){
  P1OUT |= LED_RED;
}
void turn_red_off(){
  P1OUT &= ~LED_RED;
}

void turn_green_on(){
  P1OUT |= LED_GREEN;
}
void turn_green_off(){
  P1OUT &= ~LED_GREEN;
}

void turn_leds_on(){
  P1OUT |= LEDS;
}
void turn_leds_off(){
  P1OUT &= ~LEDS;
}
