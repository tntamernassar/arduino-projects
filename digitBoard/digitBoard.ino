int a = 2;  //For displaying segment "a"
int b = 3;  //For displaying segment "b"
int c = 4;  //For displaying segment "c"
int d = 5;  //For displaying segment "d"
int e = 6;  //For displaying segment "e"
int f = 8;  //For displaying segment "f"
int g = 9;  //For displaying segment "g"

void turnOn(int n, ...){

      va_list inputs;
      va_start(inputs, n); 

      for(int i = 0; i < n; ++i )
      {
          int input = va_arg(inputs, int);
          digitalWrite(input,HIGH);
      }  
      va_end(inputs);
 
};


void setup() {

  Serial.begin(9600);
  delay(2000); while (!Serial);
  
  pinMode(a, OUTPUT);  //A
  pinMode(b, OUTPUT);  //B
  pinMode(c, OUTPUT);  //C
  pinMode(d, OUTPUT);  //D
  pinMode(e, OUTPUT);  //E
  pinMode(f, OUTPUT);  //F
  pinMode(g, OUTPUT);  //G
  
   
}
void displayDigit(int digit)
{
  turnOff();
  
  if(digit == 1)
    turnOn(2,b,c);
  else if (digit == 2)
    turnOn(5,a,b,g,e,d);
  else if(digit == 3)
    turnOn(5,a,b,g,c,d);
  else if(digit == 4)
    turnOn(4,f,g,b,c);
  else if(digit == 5)
    turnOn(5,a,f,g,c,d);
  else if(digit == 6)
    turnOn(6,a,f,e,d,c,g);
  else if(digit == 7)
    turnOn(3,a,b,c);
  else if(digit ==8)
    turnOn(7,a,b,c,d,e,f,g);
  else if(digit == 9)
    turnOn(6,f,a,b,g,c,d);
  else
    turnOn(6,a,f,b,c,d,e);
    

  
}
void turnOff()
{
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
}



void loop()
{
      
     for(int i=0;i<10;i++)
      displayDigit(i);
      
}
