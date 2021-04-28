#include <Keyboard.h>

int button1 = A0;  // Map keys to buttons
int button2 = 9;
int button3 = 8;
int button4 = 7;
int button5 = 6;
int button6 = 5;
int button7 = 4;
int button8 = 3;
int button9 = 2;

void setup()
{
  pinMode(button1, INPUT_PULLUP);  // Set the button as an input and pullup to active high
  pinMode(button2, INPUT_PULLUP);  // Set the button as an input and pullup to active high
  pinMode(button3, INPUT_PULLUP);  // Set the button as an input and pullup to active high
  pinMode(button4, INPUT_PULLUP);  // Set the button as an input and pullup to active high
  pinMode(button5, INPUT_PULLUP);  // Set the button as an input and pullup to active high
  pinMode(button6, INPUT_PULLUP);  // Set the button as an input and pullup to active high
  pinMode(button7, INPUT_PULLUP);  // Set the button as an input and pullup to active high
  pinMode(button8, INPUT_PULLUP);  // Set the button as an input and pullup to active high
  pinMode(button9, INPUT_PULLUP);  // Set the button as an input and pullup to active high


  Keyboard.begin(); //Init keyboard emulation

}

void loop()
{
  if (digitalRead(button1) == 0)  // if the button goes low
  {
    
    Serial.println(1);  
    delay(500);  
  }
  
  if (digitalRead(button2) == 0)  // if the button goes low
  {
    
    Serial.println(2);  
    delay(500);  
  }
  
  if (digitalRead(button3) == 0)  // if the button goes low
  {
    
    Serial.println(3);  
    delay(500);  
  }
  
  if (digitalRead(button4) == 0)  // if the button goes low
  {
    
    Serial.println(4);  
    delay(500);  
  }
  
  if (digitalRead(button5) == 0)  // if the button goes low
  {
    
    Serial.println(5);  
    delay(500);  
  }
  
  if (digitalRead(button6) == 0)  // if the button goes low
  {
    
    Serial.println(6);  
    delay(500);  
  }
  
  if (digitalRead(button7) == 0)  // if the button goes low
  {
    
    Serial.println(7);  
    delay(500);  
  }
  
  if (digitalRead(button8) == 0)  // if the button goes low
  {
    
    Serial.println(8);  
    delay(500);  
  }
  
  if (digitalRead(button9) == 0)  // if the button goes low
  {
    
    Serial.println(9);  
    delay(500);  
  }
 
}
