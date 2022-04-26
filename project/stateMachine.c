#include <msp430.h>
#include "led.h"
#include "buzzer.h"


void states(){

  if(sw1_state_down){
    buzzer_set_period(250);
    turn_green_on();

  }

  if(sw2_state_down){
    buzzer_set_period(500);
    turn_red_on();
  }

  if(sw3_state_down){
    buzzer_set_period(750);
    turn_green_off();
  }

  if(sw4_state_down){
    buzzer_set_period(1000);
    turn_red_off();
  }
}
