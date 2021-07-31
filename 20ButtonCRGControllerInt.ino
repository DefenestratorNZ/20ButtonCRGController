// pushbutton-arduino - Version: Latest 
#include <Pushbutton.h>

// Keyboard - Version: Latest 
#include <Keyboard.h>
#include "Keypad.h"
#include "ButtonMap.h"

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
//Serial.begin(115200);
Keyboard.begin();

}

void loop() {
  if (!button19.isPressed()){
  
if (button0.getSingleDebouncedPress())
    {
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KP1);
    Keyboard.press(KP8);
    Keyboard.press(KP5);
    Keyboard.releaseAll();
    }
if (button1.getSingleDebouncedPress())
    {
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KP1);
    Keyboard.press(KP8);
    Keyboard.press(KP6);
    Keyboard.releaseAll();
    }
if (button2.getSingleDebouncedPress())
    {
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KP1);
    Keyboard.press(KP8);
    Keyboard.press(KP7);
    Keyboard.releaseAll();
    }
if (button3.getSingleDebouncedPress())
    {
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KP1);
    Keyboard.press(KP8);
    Keyboard.press(KP8);
    Keyboard.releaseAll();
    }
if (button4.getSingleDebouncedPress())
    {
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KP1);
    Keyboard.press(KP8);
    Keyboard.press(KP9);
    Keyboard.releaseAll();
    }  
if (button5.getSingleDebouncedPress())
    {
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KP1);
    Keyboard.press(KP9);
    Keyboard.press(KP0);
    Keyboard.releaseAll();
    }
if (button6.getSingleDebouncedPress())
    {
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KP1);
    Keyboard.press(KP9);
    Keyboard.press(KP2);
    Keyboard.releaseAll();
    }
if (button7.getSingleDebouncedPress())
    {
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KP1);
    Keyboard.press(KP9);
    Keyboard.press(KP3);
    Keyboard.releaseAll();
    }
  
if (button8.getSingleDebouncedPress())
    {
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KP1);
    Keyboard.press(KP9);
    Keyboard.press(KP4);
    Keyboard.releaseAll();
    }
if (button9.getSingleDebouncedPress())
    {
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KP1);
    Keyboard.press(KP9);
    Keyboard.press(KP5);
    Keyboard.releaseAll();
    }
if (button10.getSingleDebouncedPress())
    {
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KP1);
    Keyboard.press(KP9);
    Keyboard.press(KP6);
    Keyboard.releaseAll();
    }
if (button11.getSingleDebouncedPress())
    {
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KP1);
    Keyboard.press(KP9);
    Keyboard.press(KP7);
    Keyboard.releaseAll();
    }
if (button12.getSingleDebouncedPress())
    {
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KP1);
    Keyboard.press(KP9);
    Keyboard.press(KP8);
    Keyboard.releaseAll();
    }
if (button13.getSingleDebouncedPress())
    {
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KP2);
    Keyboard.press(KP0);
    Keyboard.press(KP1);
    Keyboard.releaseAll();
    }
if (button14.getSingleDebouncedPress())
    {
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KP2);
    Keyboard.press(KP0);
    Keyboard.press(KP3);
    Keyboard.releaseAll();
    }
if (button15.getSingleDebouncedPress())
    {
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KP2);
    Keyboard.press(KP0);
    Keyboard.press(KP4);
    Keyboard.releaseAll();
    }
if (button16.getSingleDebouncedPress())
    {
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KP2);
    Keyboard.press(KP0);
    Keyboard.press(KP5);
    Keyboard.releaseAll();
    }
if (button17.getSingleDebouncedPress())
    {
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KP2);
    Keyboard.press(KP0);
    Keyboard.press(KP6);
    Keyboard.releaseAll();
    }
if (button18.getSingleDebouncedPress())
    {
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KP2);
    Keyboard.press(KP0);
    Keyboard.press(KP7);
    Keyboard.releaseAll();
    }
  
  } else {
   if (button0.getSingleDebouncedPress())
    {
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KP2);
    Keyboard.press(KP0);
    Keyboard.press(KP8);
    Keyboard.releaseAll();
    }
if (button1.getSingleDebouncedPress())
    {
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KP2);
    Keyboard.press(KP0);
    Keyboard.press(KP9);
    Keyboard.releaseAll();
    }
if (button2.getSingleDebouncedPress())
    {
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KP2);
    Keyboard.press(KP1);
    Keyboard.press(KP0);
    Keyboard.releaseAll();
    }
if (button3.getSingleDebouncedPress())
    {
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KP2);
    Keyboard.press(KP1);
    Keyboard.press(KP7);
    Keyboard.releaseAll();
    }
if (button4.getSingleDebouncedPress())
    {
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KP2);
    Keyboard.press(KP1);
    Keyboard.press(KP8);
    Keyboard.releaseAll();
    }  
if (button5.getSingleDebouncedPress())
    {
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KP2);
    Keyboard.press(KP1);
    Keyboard.press(KP9);
    Keyboard.releaseAll();
    }
if (button6.getSingleDebouncedPress())
    {
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KP2);
    Keyboard.press(KP2);
    Keyboard.press(KP0);
    Keyboard.releaseAll();
    }
if (button7.getSingleDebouncedPress())
    {
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KP2);
    Keyboard.press(KP2);
    Keyboard.press(KP1);
    Keyboard.releaseAll();
    }
  
if (button8.getSingleDebouncedPress())
    {
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KP2);
    Keyboard.press(KP2);
    Keyboard.press(KP2);
    Keyboard.releaseAll();
    }
if (button9.getSingleDebouncedPress())
    {
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KP1);
    Keyboard.press(KP9);
    Keyboard.press(KP4);
    Keyboard.releaseAll();
    }
if (button10.getSingleDebouncedPress())
    {
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KP1);
    Keyboard.press(KP9);
    Keyboard.press(KP5);
    Keyboard.releaseAll();
    }
if (button11.getSingleDebouncedPress())
    {
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KP1);
    Keyboard.press(KP9);
    Keyboard.press(KP6);
    Keyboard.releaseAll();
    }
if (button12.getSingleDebouncedPress())
    {
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KP1);
    Keyboard.press(KP9);
    Keyboard.press(KP7);
    Keyboard.releaseAll();
    }
if (button13.getSingleDebouncedPress())
    {
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KP1);
    Keyboard.press(KP9);
    Keyboard.press(KP8);
    Keyboard.releaseAll();
    }
if (button14.getSingleDebouncedPress())
    {
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KP1);
    Keyboard.press(KP9);
    Keyboard.press(KP9);
    Keyboard.releaseAll();
    }
if (button15.getSingleDebouncedPress())
    {
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KP2);
    Keyboard.press(KP0);
    Keyboard.press(KP0);
    Keyboard.releaseAll();
    }
if (button16.getSingleDebouncedPress())
    {
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KP2);
    Keyboard.press(KP0);
    Keyboard.press(KP1);
    Keyboard.releaseAll();
    }
if (button17.getSingleDebouncedPress())
    {
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KP2);
    Keyboard.press(KP0);
    Keyboard.press(KP2);
    Keyboard.releaseAll();
    }
if (button18.getSingleDebouncedPress())
    {
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KP2);
    Keyboard.press(KP0);
    Keyboard.press(KP3);
    Keyboard.releaseAll();
    }

    
    
  }
  
}

void startJam() {
  
}

void stopJam() {
  
}

void startTimeout() {
  
}