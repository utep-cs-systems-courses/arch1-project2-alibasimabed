#ifndef switches_included
#define switches_included

#define SW1 BIT0
#define SW2 BIT1
#define SW3 BIT2
#define SW4 BIT3


#define SWITCHES (SW1 | SW2| SW3| SW4)		/* only 1 switch on this board */

void switch_init();
void switch1_interrupt_handler();
void switch2_interrupt_handler();
void switch3_interrupt_handler();
void switch4_interrupt_handler();

extern char switch1_state_down, switch1_state_changed,
  switch2_state_down, switch2_state_changed,
  switch3_state_down, switch3_state_changed,
  switch4_state_down, switch4_state_changed;

#endif
