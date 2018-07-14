

int LED4 = 13;
int LED3 = 12;
int LED2 = 11;
int LED1 = 10;

int LEDS[4];

//joystick vars
const int SW_pin = 2; // digital pin connected to switch output
const int X_pin = A0; // analog pin connected to X output
const int Y_pin = A1;


//Algo
int currentOn = 0;

void setup() {
  Serial.begin(9600);
  
  pinMode(SW_pin, INPUT); 
  pinMode(X_pin, INPUT);
  pinMode(Y_pin, INPUT);
  digitalWrite(SW_pin, HIGH);

  pinMode(LED4,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED1,OUTPUT);
  LEDS[0] = LED1;
  LEDS[1] = LED2;
  LEDS[2] = LED3;
  LEDS[3] = LED4;
  
//  digitalWrite(LEDS[currentOn], HIGH);
  
}

void loop() {
  
 int yPosition = analogRead(Y_pin);
  Serial.println(yPosition);
   if(yPosition == 1023){ //joystick sticked left
    
      digitalWrite(LEDS[currentOn], LOW);  
      if(currentOn == 0)
         currentOn = 3;
      else
        currentOn--;

      digitalWrite(LEDS[currentOn], HIGH);  
   }
   if(yPosition == 0){ //joystick sticked right
    
      digitalWrite(LEDS[currentOn], LOW);  
      if(currentOn == 3)
         currentOn = 0;
      else
        currentOn++;

      digitalWrite(LEDS[currentOn], HIGH);  
   }
    delay(200);
    

}
