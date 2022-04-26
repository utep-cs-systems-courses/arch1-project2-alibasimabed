#include <msp430.h>
#include "libTimer.h"
#include "buzzer.h"

int main() {
    configureClocks();
 
    buzzer_init();
    // buzzer_set_period(900);	/* start buzzing!!! 2MHz/1000 = 2kHz*/
    // buzzer_set_period(1100);
    play_music();
    or_sr(0x18);          // CPU off, GIE on
}
