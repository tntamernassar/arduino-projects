
#include <IRremote.h>

IRrecv myReceiver(2);
decode_results result;

void setup() {
  Serial.begin(9600);
 
  myReceiver.enableIRIn(); // Start the receiver
  Serial.println(("Ready to receive IR signals"));
}

void loop() {
 if (myReceiver.decode(&result)) {//detect press
    translateIR();
    myReceiver.resume();      
  }

  delay(200);
} 

void translateIR() // takes action based on IR code received

// describing Car MP3 IR codes 

{

  switch(result.value)

  {

  case 0xFFA25D:  
    Serial.println(" CH-            "); 
    break;

  case 0xFF629D:  
    Serial.println(" CH             "); 
    break;

  case 0xFFE21D:  
    Serial.println(" CH+            "); 
    break;

  case 0xFF22DD:  
    Serial.println(" PREV           "); 
    break;

  case 0xFF02FD:  
    Serial.println(" NEXT           "); 
    break;

  case 0xFFC23D:  
    Serial.println(" PLAY/PAUSE     "); 
    break;

  case 0xFFE01F:  
    Serial.println(" VOL-           "); 
    break;

  case 0xFFA857:  
    Serial.println(" VOL+           "); 
    break;

  case 0xFF906F:  
    Serial.println(" EQ             "); 
    break;

  case 0xFF6897:  
    Serial.println(" 0              "); 
    break;

  case 0xFF9867:  
    Serial.println(" 100+           "); 
    break;

  case 0xFFB04F:  
    Serial.println(" 200+           "); 
    break;

  case 0xFF30CF:  
    Serial.println(" 1              "); 
    break;

  case 0xFF18E7:  
    Serial.println(" 2              "); 
    break;

  case 0xFF7A85:  
    Serial.println(" 3              "); 
    break;

  case 0xFF10EF:  
    Serial.println(" 4              "); 
    break;

  case 0xFF38C7:  
    Serial.println(" 5              "); 
    break;

  case 0xFF5AA5:  
    Serial.println(" 6              "); 
    break;

  case 0xFF42BD:  
    Serial.println(" 7              "); 
    break;

  case 0xFF4AB5:  
    Serial.println(" 8              "); 
    break;

  case 0xFF52AD:  
    Serial.println(" 9              "); 
    break;

  default: 
    Serial.println(" other button   ");

  }

  delay(500);


} //END translateIR

