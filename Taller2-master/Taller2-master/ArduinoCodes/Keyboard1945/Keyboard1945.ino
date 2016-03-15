#include <Keyboard.h>

#define KEY_UP 2
#define KEY_DOWN 3
#define KEY_LEFT 4
#define KEY_RIGHT 5
#define KEY_SPACE 6

void setup() {
  /*
  pinMode(KEY_UP, INPUT_PULLUP);
  pinMode(KEY_DOWN, INPUT_PULLUP);
  pinMode(KEY_LEFT, INPUT_PULLUP);
  pinMode(KEY_RIGHT, INPUT_PULLUP);
  pinMode(KEY_SPACE, INPUT_PULLUP);*/
  pinMode(KEY_UP, INPUT);
  pinMode(KEY_DOWN, INPUT);
  pinMode(KEY_LEFT, INPUT);
  pinMode(KEY_RIGHT, INPUT);
  pinMode(KEY_SPACE, INPUT);  
  
  Keyboard.begin();
}
//                                                                                                                         
void loop() {

  if(digitalRead(KEY_UP) == LOW){
    Keyboard.press(KEY_UP_ARROW);
  }
  else{
    Keyboard.release(KEY_UP_ARROW);
  }
  
  if(digitalRead(KEY_DOWN) == LOW){
    Keyboard.press(KEY_DOWN_ARROW);
  }
  else{
    Keyboard.release(KEY_DOWN_ARROW);
  }
  
  if(digitalRead(KEY_LEFT) == LOW){
    Keyboard.press(KEY_LEFT_ARROW);
  }
  else{
    Keyboard.release(KEY_LEFT_ARROW);
  }
  
  if(digitalRead(KEY_RIGHT) == LOW){
    Keyboard.press(KEY_RIGHT_ARROW);
  }
  else{
    Keyboard.release(KEY_RIGHT_ARROW);
  }
  
  if(digitalRead(KEY_SPACE) == LOW){
    Keyboard.press(' ');
  }
  else{
    Keyboard.release(' ');
  }

  delay(50);
}

