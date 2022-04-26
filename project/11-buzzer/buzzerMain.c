#include <msp430.h>
#include "libTimer.h"
#include "buzzer.h"

int main() {
    configureClocks();
 
    buzzer_init();
    //buzzer_set_period(250);	/* start buzzing!!! 2MHz/1000 = 2kHz*/
    // buzzer_set_period(1100);
    //  play_music();
    or_sr(0x18);          // CPU off, GIE on
}


int second_count = 0;


void
__interrupt_vec(WDT_VECTOR) WDT(){

  second_count ++;
  buzzer_set_period(second_count*2);
  if(second_count == 250){
    second_count = 0;
  }
}
