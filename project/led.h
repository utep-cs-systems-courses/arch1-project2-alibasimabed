#ifndef led_included
#define led_included

#define LED_RED BIT0               // P1.0
#define LED_GREEN BIT6             // P1.6
#define LEDS (BIT0 | BIT6)



void led_init();
void turn_green_off();
void turn_green_on();
void turn_red_on();
void turn_red_off();
void turn_leds_on();
void turn_leds_off();




#endif // included
