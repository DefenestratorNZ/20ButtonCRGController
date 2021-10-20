// pushbutton-arduino - Version: Latest 
#include <Pushbutton.h>

// Keyboard - Version: Latest 
#include <Keyboard.h>
#include "Keypad.h"
#include "ButtonMap.h"
#define DEFAULT_STATE_HIGH 1
#define PULL_UP_ENABLED 1
Pushbutton button0(BUTTON_PIN0);
Pushbutton button1(BUTTON_PIN1);
Pushbutton button2(BUTTON_PIN2);
Pushbutton button3(BUTTON_PIN3);
Pushbutton button4(BUTTON_PIN4);
Pushbutton button5(BUTTON_PIN5);
Pushbutton button6(BUTTON_PIN6);
Pushbutton button7(BUTTON_PIN7);
Pushbutton button8(BUTTON_PIN8);
Pushbutton button9(BUTTON_PIN9);
Pushbutton button10(BUTTON_PIN10);
Pushbutton button11(BUTTON_PIN11);
Pushbutton button12(BUTTON_PIN12);
Pushbutton button13(BUTTON_PIN13);
Pushbutton button14(BUTTON_PIN14);
Pushbutton button15(BUTTON_PIN15);
Pushbutton button16(BUTTON_PIN16);
Pushbutton button17(BUTTON_PIN17);
Pushbutton button18(BUTTON_PIN18);
Pushbutton button19(BUTTON_PIN19);


void setup() {
Serial.begin(115200);
Keyboard.begin();

for(int i = 0; i <= 14; i++){
  Serial.println(i);
  pinMode( i-1, INPUT_PULLUP );
  Serial.println(i);
}


attachInterrupt(digitalPinToInterrupt(BUTTON_PIN0), startJam, LOW);
attachInterrupt(digitalPinToInterrupt(BUTTON_PIN1), stopJam, LOW);
attachInterrupt(digitalPinToInterrupt(BUTTON_PIN2), startTimeout, LOW);
}

void loop() {

}

void startJam() {

   static unsigned long last_interrupt_time = 0;
  unsigned long interrupt_time = millis();
  // If interrupts come faster than 200ms, assume it's a bounce and ignore
  if (interrupt_time - last_interrupt_time > 100)
  {
       // Serial.println("test");
      Keyboard.press(KEY_LEFT_ALT);
      Keyboard.press(KP2);
      Keyboard.press(KP0);
      Keyboard.press(KP6);
      Keyboard.releaseAll();
         }
  last_interrupt_time = interrupt_time;
  

}

void stopJam() {

   static unsigned long last_interrupt_time = 0;
  unsigned long interrupt_time = millis();
  // If interrupts come faster than 200ms, assume it's a bounce and ignore
  if (interrupt_time - last_interrupt_time > 100)
  {
     // Serial.println("test");
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KP2);
    Keyboard.press(KP0);
    Keyboard.press(KP8);
    Keyboard.releaseAll();
    }
  last_interrupt_time = interrupt_time;


    
}

void startTimeout() {

   static unsigned long last_interrupt_time = 0;
  unsigned long interrupt_time = millis();
  // If interrupts come faster than 200ms, assume it's a bounce and ignore
  if (interrupt_time - last_interrupt_time > 100)
  {
     // Serial.println("test");
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KP2);
    Keyboard.press(KP0);
    Keyboard.press(KP5);
    Keyboard.releaseAll();
    }
  last_interrupt_time = interrupt_time;

}