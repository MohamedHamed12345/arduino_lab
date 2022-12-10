#include <LiquidCrystal.h>
#define sensorPin A0
LiquidCrystal lcd(2,3,4,5,6,7);

void setup()
{  
 
      float Temp;
      lcd.begin(16,2);
      lcd.print ("Temp =");
      pinMode (13,OUTPUT);
      analogReference(INTERNAL);
      
}
void loop()
{    

        // does give  the right temp
        /*
          int  sensorvalue= analogRead(A1);
          float Temp= (sensorvalue* 100.0 *5.0)/1023.0 ;
          float adcData = analogRead(sensorPin);
           float voltage = adcData * (5.0 / 1023.0);
          float Temp = voltage * 100;
      
        */
        // i replace it with this 
        //******************************
        float  Temp = analogRead(sensorPin)*0.1039;
        //********************************

        
        lcd.setCursor (10,0);
        lcd.print (Temp);
        if(Temp> 30 ){
              digitalWrite (13,HIGH);
              lcd.setCursor(0,1);
              lcd.print ("overheating");
        }
        else{
              digitalWrite(13,LOW);
              lcd.setCursor(0,1);
              lcd.print ("Normal");
        }
}
















/*void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second
}
*/
