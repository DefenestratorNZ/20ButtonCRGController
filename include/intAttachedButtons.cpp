
void startJam() {

   static unsigned long last_interrupt_time = 0;
  unsigned long interrupt_time = millis();
  // If interrupts come faster than 200ms, assume it's a bounce and ignore
  if (interrupt_time - last_interrupt_time > 100)
  {
      Serial.println("Int0");
      Keyboard.press(KEY_LEFT_ALT);
      Keyboard.press(KP1);
      Keyboard.press(KP8);
      Keyboard.press(KP5);
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
    Serial.println("Int1");
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KP1);
    Keyboard.press(KP8);
    Keyboard.press(KP6);
    Keyboard.releaseAll();
    }
  last_interrupt_time = interrupt_time;


    
}

void startTimeout() {
if (!button19.isPressed()){
   static unsigned long last_interrupt_time = 0;
  unsigned long interrupt_time = millis();
  // If interrupts come faster than 200ms, assume it's a bounce and ignore
  if (interrupt_time - last_interrupt_time > 100)
  {
     Serial.println("Int2");
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KP1);
    Keyboard.press(KP8);
    Keyboard.press(KP7);
    Keyboard.releaseAll();
    }
  last_interrupt_time = interrupt_time;
} else { static unsigned long last_interrupt_time = 0;
  unsigned long interrupt_time = millis();
  // If interrupts come faster than 200ms, assume it's a bounce and ignore
  if (interrupt_time - last_interrupt_time > 100)
  {
     Serial.println("Int2Shift");
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KP2);
    Keyboard.press(KP1);
    Keyboard.press(KP0);
    Keyboard.releaseAll();
    }
  last_interrupt_time = interrupt_time;
}
  
}