/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int trans1 = 1;
const int trans2 = 2;
const int trans3 = 3;
const int led0 = 4;          // donar nom al pin 4 de l’Arduino
const int led1 = 5;          // donar nom al pin 5 de l’Arduino
const int led2 = 6;          // donar nom al pin 6 de l’Arduino
const int led3 = 7;          // donar nom al pin 7 de l’Arduino
const int led4 = 8;          // donar nom al pin 8 de l’Arduino
const int led5 = 9;          // donar nom al pin 9 de l’Arduino
const int led6 = 10;         // donar nom al pin 10 de l’Arduino
const int led7 = 11;         // donar nom al pin 11 de l’Arduino
const int led8 = 12;         // donar nom al pin 12 de l’Arduino
int t = 200;

//********** Setup ****************************************************************
void setup(){
  pinMode(trans1, OUTPUT);     // definir el pin 1 com una sortida
  pinMode(trans2, OUTPUT);     // definir el pin 2 com una sortida
  pinMode(trans3, OUTPUT);     // definir el pin 3 com una sortida
  pinMode(led0, OUTPUT);     // definir el pin 4 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led6, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(led7, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(led8, OUTPUT);     // definir el pin 12 com una sortida
 
}

//********** Loop *****************************************************************
void loop()
{
  digitalWrite(trans1, HIGH);  // posar a 0V el pin 1
  digitalWrite(trans2, LOW);  // posar a 0V el pin 2
  digitalWrite(trans3, LOW);  // posar a 0V el pin 3
  digitalWrite(led0, HIGH);    // posar a 0V el pin 4
  digitalWrite(led1, LOW);     // posar a 0V el pin 5
  digitalWrite(led2, LOW);     // posar a 0V el pin 6
  digitalWrite(led3, LOW);     // posar a 0V el pin 7
  digitalWrite(led4, LOW);     // posar a 0V el pin 8
  digitalWrite(led5, LOW);     // posar a 0V el pin 9
  digitalWrite(led6, LOW);     // posar a 0V el pin 10
  digitalWrite(led7, LOW);    // posar a 0V el pin 11
  digitalWrite(led8, LOW);     // posar a 0V el pin 12
  
  delay(t);                  // es queden leds t ms encesos
  
  digitalWrite(trans1, HIGH);  // posar a 0V el pin 1
  digitalWrite(trans2, LOW);  // posar a 0V el pin 2
  digitalWrite(trans3, LOW);  // posar a 0V el pin 3
  digitalWrite(led0, LOW);    // posar a 0V el pin 4
  digitalWrite(led1, HIGH);     // posar a 0V el pin 5
  digitalWrite(led2, LOW);     // posar a 0V el pin 6
  digitalWrite(led3, LOW);     // posar a 0V el pin 7
  digitalWrite(led4, LOW);     // posar a 0V el pin 8
  digitalWrite(led5, LOW);     // posar a 0V el pin 9
  digitalWrite(led6, LOW);     // posar a 0V el pin 10
  digitalWrite(led7, LOW);    // posar a 0V el pin 11
  digitalWrite(led8, LOW);     // posar a 0V el pin 12
  
  delay(t);                  // es queden leds t ms encesos
  
  digitalWrite(trans1, HIGH);  // posar a 0V el pin 1
  digitalWrite(trans2, LOW);  // posar a 0V el pin 2
  digitalWrite(trans3, LOW);  // posar a 0V el pin 3
  digitalWrite(led0, LOW);    // posar a 0V el pin 4
  digitalWrite(led1, LOW);     // posar a 0V el pin 5
  digitalWrite(led2, HIGH);     // posar a 0V el pin 6
  digitalWrite(led3, LOW);     // posar a 0V el pin 7
  digitalWrite(led4, LOW);     // posar a 0V el pin 8
  digitalWrite(led5, LOW);     // posar a 0V el pin 9
  digitalWrite(led6, LOW);     // posar a 0V el pin 10
  digitalWrite(led7, LOW);    // posar a 0V el pin 11
  digitalWrite(led8, LOW);     // posar a 0V el pin 12
  
  delay(t);                  // es queden leds t ms encesos
    
  digitalWrite(trans1, HIGH);  // posar a 0V el pin 1
  digitalWrite(trans2, LOW);  // posar a 0V el pin 2
  digitalWrite(trans3, LOW);  // posar a 0V el pin 3
  digitalWrite(led0, LOW);    // posar a 0V el pin 4
  digitalWrite(led1, LOW);     // posar a 0V el pin 5
  digitalWrite(led2, LOW);     // posar a 0V el pin 6
  digitalWrite(led3, HIGH);     // posar a 0V el pin 7
  digitalWrite(led4, LOW);     // posar a 0V el pin 8
  digitalWrite(led5, LOW);     // posar a 0V el pin 9
  digitalWrite(led6, LOW);     // posar a 0V el pin 10
  digitalWrite(led7, LOW);    // posar a 0V el pin 11
  digitalWrite(led8, LOW);     // posar a 0V el pin 12
 
  delay(t);                  // es queden leds t ms encesos
    
  digitalWrite(trans1, HIGH);  // posar a 0V el pin 1
  digitalWrite(trans2, LOW);  // posar a 0V el pin 2
  digitalWrite(trans3, LOW);  // posar a 0V el pin 3
  digitalWrite(led0, LOW);    // posar a 0V el pin 4
  digitalWrite(led1, LOW);     // posar a 0V el pin 5
  digitalWrite(led2, LOW);     // posar a 0V el pin 6
  digitalWrite(led3, LOW);     // posar a 0V el pin 7
  digitalWrite(led4, HIGH);     // posar a 0V el pin 8
  digitalWrite(led5, LOW);     // posar a 0V el pin 9
  digitalWrite(led6, LOW);     // posar a 0V el pin 10
  digitalWrite(led7, LOW);    // posar a 0V el pin 11
  digitalWrite(led8, LOW);     // posar a 0V el pin 12
  
  delay(t);                  // es queden leds t ms encesos
    
  digitalWrite(trans1, HIGH);  // posar a 0V el pin 1
  digitalWrite(trans2, LOW);  // posar a 0V el pin 2
  digitalWrite(trans3, LOW);  // posar a 0V el pin 3
  digitalWrite(led0, LOW);    // posar a 0V el pin 4
  digitalWrite(led1, LOW);     // posar a 0V el pin 5
  digitalWrite(led2, LOW);     // posar a 0V el pin 6
  digitalWrite(led3, LOW);     // posar a 0V el pin 7
  digitalWrite(led4, LOW);     // posar a 0V el pin 8
  digitalWrite(led5, HIGH);     // posar a 0V el pin 9
  digitalWrite(led6, LOW);     // posar a 0V el pin 10
  digitalWrite(led7, LOW);    // posar a 0V el pin 11
  digitalWrite(led8, LOW);     // posar a 0V el pin 12
  
  delay(t);                  // es queden leds t ms encesos
    
  digitalWrite(trans1, HIGH);  // posar a 0V el pin 1
  digitalWrite(trans2, LOW);  // posar a 0V el pin 2
  digitalWrite(trans3, LOW);  // posar a 0V el pin 3
  digitalWrite(led0, LOW);    // posar a 0V el pin 4
  digitalWrite(led1, LOW);     // posar a 0V el pin 5
  digitalWrite(led2, LOW);     // posar a 0V el pin 6
  digitalWrite(led3, LOW);     // posar a 0V el pin 7
  digitalWrite(led4, LOW);     // posar a 0V el pin 8
  digitalWrite(led5, LOW);     // posar a 0V el pin 9
  digitalWrite(led6, HIGH);     // posar a 0V el pin 10
  digitalWrite(led7, LOW);    // posar a 0V el pin 11
  digitalWrite(led8, LOW);     // posar a 0V el pin 12
  
  delay(t);                  // es queden leds t ms encesos
    
  digitalWrite(trans1, HIGH);  // posar a 0V el pin 1
  digitalWrite(trans2, LOW);  // posar a 0V el pin 2
  digitalWrite(trans3, LOW);  // posar a 0V el pin 3
  digitalWrite(led0, LOW);    // posar a 0V el pin 4
  digitalWrite(led1, LOW);     // posar a 0V el pin 5
  digitalWrite(led2, LOW);     // posar a 0V el pin 6
  digitalWrite(led3, LOW);     // posar a 0V el pin 7
  digitalWrite(led4, LOW);     // posar a 0V el pin 8
  digitalWrite(led5, LOW);     // posar a 0V el pin 9
  digitalWrite(led6, LOW);     // posar a 0V el pin 10
  digitalWrite(led7, HIGH);    // posar a 0V el pin 11
  digitalWrite(led8, LOW);     // posar a 0V el pin 12
 
  delay(t);                  // es queden leds t ms encesos
    
  digitalWrite(trans1, HIGH);  // posar a 0V el pin 1
  digitalWrite(trans2, LOW);  // posar a 0V el pin 2
  digitalWrite(trans3, LOW);  // posar a 0V el pin 3
  digitalWrite(led0, LOW);    // posar a 0V el pin 4
  digitalWrite(led1, LOW);     // posar a 0V el pin 5
  digitalWrite(led2, LOW);     // posar a 0V el pin 6
  digitalWrite(led3, LOW);     // posar a 0V el pin 7
  digitalWrite(led4, LOW);     // posar a 0V el pin 8
  digitalWrite(led5, LOW);     // posar a 0V el pin 9
  digitalWrite(led6, LOW);     // posar a 0V el pin 10
  digitalWrite(led7, LOW);    // posar a 0V el pin 11
  digitalWrite(led8, HIGH);     // posar a 0V el pin 12

  delay(t);                  // es queden leds t ms encesos
    
  digitalWrite(trans1, LOW);  // posar a 0V el pin 1
  digitalWrite(trans2, HIGH);  // posar a 0V el pin 2
  digitalWrite(trans3, LOW);  // posar a 0V el pin 3
  digitalWrite(led0, HIGH);    // posar a 0V el pin 4
  digitalWrite(led1, LOW);     // posar a 0V el pin 5
  digitalWrite(led2, LOW);     // posar a 0V el pin 6
  digitalWrite(led3, LOW);     // posar a 0V el pin 7
  digitalWrite(led4, LOW);     // posar a 0V el pin 8
  digitalWrite(led5, LOW);     // posar a 0V el pin 9
  digitalWrite(led6, LOW);     // posar a 0V el pin 10
  digitalWrite(led7, LOW);    // posar a 0V el pin 11
  digitalWrite(led8, LOW);     // posar a 0V el pin 12
  
  delay(t);                  // es queden leds t ms encesos
    
  digitalWrite(trans1, LOW);  // posar a 0V el pin 1
  digitalWrite(trans2, HIGH);  // posar a 0V el pin 2
  digitalWrite(trans3, LOW);  // posar a 0V el pin 3
  digitalWrite(led0, LOW);    // posar a 0V el pin 4
  digitalWrite(led1, HIGH);     // posar a 0V el pin 5
  digitalWrite(led2, LOW);     // posar a 0V el pin 6
  digitalWrite(led3, LOW);     // posar a 0V el pin 7
  digitalWrite(led4, LOW);     // posar a 0V el pin 8
  digitalWrite(led5, LOW);     // posar a 0V el pin 9
  digitalWrite(led6, LOW);     // posar a 0V el pin 10
  digitalWrite(led7, LOW);    // posar a 0V el pin 11
  digitalWrite(led8, LOW);     // posar a 0V el pin 12
 
  delay(t);                  // es queden leds t ms encesos
    
  digitalWrite(trans1, LOW);  // posar a 0V el pin 1
  digitalWrite(trans2, HIGH);  // posar a 0V el pin 2
  digitalWrite(trans3, LOW);  // posar a 0V el pin 3
  digitalWrite(led0, LOW);    // posar a 0V el pin 4
  digitalWrite(led1, LOW);     // posar a 0V el pin 5
  digitalWrite(led2, HIGH);     // posar a 0V el pin 6
  digitalWrite(led3, LOW);     // posar a 0V el pin 7
  digitalWrite(led4, LOW);     // posar a 0V el pin 8
  digitalWrite(led5, LOW);     // posar a 0V el pin 9
  digitalWrite(led6, LOW);     // posar a 0V el pin 10
  digitalWrite(led7, LOW);    // posar a 0V el pin 11
  digitalWrite(led8, LOW);     // posar a 0V el pin 12
  
  delay(t);                  // es queden leds t ms encesos
    
  digitalWrite(trans1, LOW);  // posar a 0V el pin 1
  digitalWrite(trans2, HIGH);  // posar a 0V el pin 2
  digitalWrite(trans3, LOW);  // posar a 0V el pin 3
  digitalWrite(led0, LOW);    // posar a 0V el pin 4
  digitalWrite(led1, LOW);     // posar a 0V el pin 5
  digitalWrite(led2, LOW);     // posar a 0V el pin 6
  digitalWrite(led3, HIGH);     // posar a 0V el pin 7
  digitalWrite(led4, LOW);     // posar a 0V el pin 8
  digitalWrite(led5, LOW);     // posar a 0V el pin 9
  digitalWrite(led6, LOW);     // posar a 0V el pin 10
  digitalWrite(led7, LOW);    // posar a 0V el pin 11
  digitalWrite(led8, LOW);     // posar a 0V el pin 12
  
  delay(t);                  // es queden leds t ms encesos
    
  digitalWrite(trans1, LOW);  // posar a 0V el pin 1
  digitalWrite(trans2, HIGH);  // posar a 0V el pin 2
  digitalWrite(trans3, LOW);  // posar a 0V el pin 3
  digitalWrite(led0, LOW);    // posar a 0V el pin 4
  digitalWrite(led1, LOW);     // posar a 0V el pin 5
  digitalWrite(led2, LOW);     // posar a 0V el pin 6
  digitalWrite(led3, LOW);     // posar a 0V el pin 7
  digitalWrite(led4, HIGH);     // posar a 0V el pin 8
  digitalWrite(led5, LOW);     // posar a 0V el pin 9
  digitalWrite(led6, LOW);     // posar a 0V el pin 10
  digitalWrite(led7, LOW);    // posar a 0V el pin 11
  digitalWrite(led8, LOW);     // posar a 0V el pin 12
  
  delay(t);                  // es queden leds t ms encesos
    
  digitalWrite(trans1, LOW);  // posar a 0V el pin 1
  digitalWrite(trans2, HIGH);  // posar a 0V el pin 2
  digitalWrite(trans3, LOW);  // posar a 0V el pin 3
  digitalWrite(led0, LOW);    // posar a 0V el pin 4
  digitalWrite(led1, LOW);     // posar a 0V el pin 5
  digitalWrite(led2, LOW);     // posar a 0V el pin 6
  digitalWrite(led3, LOW);     // posar a 0V el pin 7
  digitalWrite(led4, LOW);     // posar a 0V el pin 8
  digitalWrite(led5, HIGH);     // posar a 0V el pin 9
  digitalWrite(led6, LOW);     // posar a 0V el pin 10
  digitalWrite(led7, LOW);    // posar a 0V el pin 11
  digitalWrite(led8, LOW);     // posar a 0V el pin 12
  
  delay(t);                  // es queden leds t ms encesos
    
  digitalWrite(trans1, LOW);  // posar a 0V el pin 1
  digitalWrite(trans2, HIGH);  // posar a 0V el pin 2
  digitalWrite(trans3, LOW);  // posar a 0V el pin 3
  digitalWrite(led0, LOW);    // posar a 0V el pin 4
  digitalWrite(led1, LOW);     // posar a 0V el pin 5
  digitalWrite(led2, LOW);     // posar a 0V el pin 6
  digitalWrite(led3, LOW);     // posar a 0V el pin 7
  digitalWrite(led4, LOW);     // posar a 0V el pin 8
  digitalWrite(led5, LOW);     // posar a 0V el pin 9
  digitalWrite(led6, HIGH);     // posar a 0V el pin 10
  digitalWrite(led7, LOW);    // posar a 0V el pin 11
  digitalWrite(led8, LOW);     // posar a 0V el pin 12
  
  delay(t);                  // es queden leds t ms encesos
    
  digitalWrite(trans1, LOW);  // posar a 0V el pin 1
  digitalWrite(trans2, HIGH);  // posar a 0V el pin 2
  digitalWrite(trans3, LOW);  // posar a 0V el pin 3
  digitalWrite(led0, LOW);    // posar a 0V el pin 4
  digitalWrite(led1, LOW);     // posar a 0V el pin 5
  digitalWrite(led2, LOW);     // posar a 0V el pin 6
  digitalWrite(led3, LOW);     // posar a 0V el pin 7
  digitalWrite(led4, LOW);     // posar a 0V el pin 8
  digitalWrite(led5, LOW);     // posar a 0V el pin 9
  digitalWrite(led6, LOW);     // posar a 0V el pin 10
  digitalWrite(led7, HIGH);    // posar a 0V el pin 11
  digitalWrite(led8, LOW);     // posar a 0V el pin 12
  
  delay(t);                  // es queden leds t ms encesos
    
  digitalWrite(trans1, LOW);  // posar a 0V el pin 1
  digitalWrite(trans2, HIGH);  // posar a 0V el pin 2
  digitalWrite(trans3, LOW);  // posar a 0V el pin 3
  digitalWrite(led0, LOW);    // posar a 0V el pin 4
  digitalWrite(led1, LOW);     // posar a 0V el pin 5
  digitalWrite(led2, LOW);     // posar a 0V el pin 6
  digitalWrite(led3, LOW);     // posar a 0V el pin 7
  digitalWrite(led4, LOW);     // posar a 0V el pin 8
  digitalWrite(led5, LOW);     // posar a 0V el pin 9
  digitalWrite(led6, LOW);     // posar a 0V el pin 10
  digitalWrite(led7, LOW);    // posar a 0V el pin 11
  digitalWrite(led8, HIGH);     // posar a 0V el pin 12
  
  delay(t);                  // es queden leds t ms encesos
    
  digitalWrite(trans1, LOW);  // posar a 0V el pin 1
  digitalWrite(trans2, LOW);  // posar a 0V el pin 2
  digitalWrite(trans3, HIGH);  // posar a 0V el pin 3
  digitalWrite(led0, HIGH);    // posar a 0V el pin 4
  digitalWrite(led1, LOW);     // posar a 0V el pin 5
  digitalWrite(led2, LOW);     // posar a 0V el pin 6
  digitalWrite(led3, LOW);     // posar a 0V el pin 7
  digitalWrite(led4, LOW);     // posar a 0V el pin 8
  digitalWrite(led5, LOW);     // posar a 0V el pin 9
  digitalWrite(led6, LOW);     // posar a 0V el pin 10
  digitalWrite(led7, LOW);    // posar a 0V el pin 11
  digitalWrite(led8, LOW);     // posar a 0V el pin 12
  
  delay(t);                  // es queden leds t ms encesos
    
  digitalWrite(trans1, LOW);  // posar a 0V el pin 1
  digitalWrite(trans2, LOW);  // posar a 0V el pin 2
  digitalWrite(trans3, HIGH);  // posar a 0V el pin 3
  digitalWrite(led0, LOW);    // posar a 0V el pin 4
  digitalWrite(led1, HIGH);     // posar a 0V el pin 5
  digitalWrite(led2, LOW);     // posar a 0V el pin 6
  digitalWrite(led3, LOW);     // posar a 0V el pin 7
  digitalWrite(led4, LOW);     // posar a 0V el pin 8
  digitalWrite(led5, LOW);     // posar a 0V el pin 9
  digitalWrite(led6, LOW);     // posar a 0V el pin 10
  digitalWrite(led7, LOW);    // posar a 0V el pin 11
  digitalWrite(led8, LOW);     // posar a 0V el pin 12
  
  delay(t);                  // es queden leds t ms encesos
    
  digitalWrite(trans1, LOW);  // posar a 0V el pin 1
  digitalWrite(trans2, LOW);  // posar a 0V el pin 2
  digitalWrite(trans3, HIGH);  // posar a 0V el pin 3
  digitalWrite(led0, LOW);    // posar a 0V el pin 4
  digitalWrite(led1, LOW);     // posar a 0V el pin 5
  digitalWrite(led2, HIGH);     // posar a 0V el pin 6
  digitalWrite(led3, LOW);     // posar a 0V el pin 7
  digitalWrite(led4, LOW);     // posar a 0V el pin 8
  digitalWrite(led5, LOW);     // posar a 0V el pin 9
  digitalWrite(led6, LOW);     // posar a 0V el pin 10
  digitalWrite(led7, LOW);    // posar a 0V el pin 11
  digitalWrite(led8, LOW);     // posar a 0V el pin 12
 
  delay(t);                  // es queden leds t ms encesos
      
  digitalWrite(trans1, LOW);  // posar a 0V el pin 1
  digitalWrite(trans2, LOW);  // posar a 0V el pin 2
  digitalWrite(trans3, HIGH);  // posar a 0V el pin 3
  digitalWrite(led0, LOW);    // posar a 0V el pin 4
  digitalWrite(led1, LOW);     // posar a 0V el pin 5
  digitalWrite(led2, LOW);     // posar a 0V el pin 6
  digitalWrite(led3, HIGH);     // posar a 0V el pin 7
  digitalWrite(led4, LOW);     // posar a 0V el pin 8
  digitalWrite(led5, LOW);     // posar a 0V el pin 9
  digitalWrite(led6, LOW);     // posar a 0V el pin 10
  digitalWrite(led7, LOW);    // posar a 0V el pin 11
  digitalWrite(led8, LOW);     // posar a 0V el pin 12
 
  delay(t);                  // es queden leds t ms encesos
      
  digitalWrite(trans1, LOW);  // posar a 0V el pin 1
  digitalWrite(trans2, LOW);  // posar a 0V el pin 2
  digitalWrite(trans3, HIGH);  // posar a 0V el pin 3
  digitalWrite(led0, LOW);    // posar a 0V el pin 4
  digitalWrite(led1, LOW);     // posar a 0V el pin 5
  digitalWrite(led2, LOW);     // posar a 0V el pin 6
  digitalWrite(led3, LOW);     // posar a 0V el pin 7
  digitalWrite(led4, HIGH);     // posar a 0V el pin 8
  digitalWrite(led5, LOW);     // posar a 0V el pin 9
  digitalWrite(led6, LOW);     // posar a 0V el pin 10
  digitalWrite(led7, LOW);    // posar a 0V el pin 11
  digitalWrite(led8, LOW);     // posar a 0V el pin 12
 
  delay(t);                  // es queden leds t ms encesos
      
  digitalWrite(trans1, LOW);  // posar a 0V el pin 1
  digitalWrite(trans2, LOW);  // posar a 0V el pin 2
  digitalWrite(trans3, HIGH);  // posar a 0V el pin 3
  digitalWrite(led0, LOW);    // posar a 0V el pin 4
  digitalWrite(led1, LOW);     // posar a 0V el pin 5
  digitalWrite(led2, LOW);     // posar a 0V el pin 6
  digitalWrite(led3, LOW);     // posar a 0V el pin 7
  digitalWrite(led4, LOW);     // posar a 0V el pin 8
  digitalWrite(led5, HIGH);     // posar a 0V el pin 9
  digitalWrite(led6, LOW);     // posar a 0V el pin 10
  digitalWrite(led7, LOW);    // posar a 0V el pin 11
  digitalWrite(led8, LOW);     // posar a 0V el pin 12
 
  delay(t);                  // es queden leds t ms encesos
      
  digitalWrite(trans1, LOW);  // posar a 0V el pin 1
  digitalWrite(trans2, LOW);  // posar a 0V el pin 2
  digitalWrite(trans3, HIGH);  // posar a 0V el pin 3
  digitalWrite(led0, LOW);    // posar a 0V el pin 4
  digitalWrite(led1, LOW);     // posar a 0V el pin 5
  digitalWrite(led2, LOW);     // posar a 0V el pin 6
  digitalWrite(led3, LOW);     // posar a 0V el pin 7
  digitalWrite(led4, LOW);     // posar a 0V el pin 8
  digitalWrite(led5, LOW);     // posar a 0V el pin 9
  digitalWrite(led6, HIGH);     // posar a 0V el pin 10
  digitalWrite(led7, LOW);    // posar a 0V el pin 11
  digitalWrite(led8, LOW);     // posar a 0V el pin 12
 
  delay(t);                  // es queden leds t ms encesos
      
  digitalWrite(trans1, LOW);  // posar a 0V el pin 1
  digitalWrite(trans2, LOW);  // posar a 0V el pin 2
  digitalWrite(trans3, HIGH);  // posar a 0V el pin 3
  digitalWrite(led0, LOW);    // posar a 0V el pin 4
  digitalWrite(led1, LOW);     // posar a 0V el pin 5
  digitalWrite(led2, LOW);     // posar a 0V el pin 6
  digitalWrite(led3, LOW);     // posar a 0V el pin 7
  digitalWrite(led4, LOW);     // posar a 0V el pin 8
  digitalWrite(led5, LOW);     // posar a 0V el pin 9
  digitalWrite(led6, LOW);     // posar a 0V el pin 10
  digitalWrite(led7, HIGH);    // posar a 0V el pin 11
  digitalWrite(led8, LOW);     // posar a 0V el pin 12
 
  delay(t);                  // es queden leds t ms encesos
      
  digitalWrite(trans1, LOW);  // posar a 0V el pin 1
  digitalWrite(trans2, LOW);  // posar a 0V el pin 2
  digitalWrite(trans3, HIGH);  // posar a 0V el pin 3
  digitalWrite(led0, LOW);    // posar a 0V el pin 4
  digitalWrite(led1, LOW);     // posar a 0V el pin 5
  digitalWrite(led2, LOW);     // posar a 0V el pin 6
  digitalWrite(led3, LOW);     // posar a 0V el pin 7
  digitalWrite(led4, LOW);     // posar a 0V el pin 8
  digitalWrite(led5, LOW);     // posar a 0V el pin 9
  digitalWrite(led6, LOW);     // posar a 0V el pin 10
  digitalWrite(led7, LOW);    // posar a 0V el pin 11
  digitalWrite(led8, HIGH);     // posar a 0V el pin 12
 
  delay(t);                  // es queden leds t ms encesos
  
  

  
}

//********** Funcions *************************************************************
