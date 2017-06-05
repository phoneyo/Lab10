#include<IRremote.h>
const int irReceiverPin = 2;
const int buttonPin = 4;
int buttonState = 0;
IRsend irsend;
IRrecv irrecv(irReceiverPin);
decode_results results;
void setup() 
{
  Serial.begin(9600);
  /*Serial.begin(9600);
  irrecv.enableIRIn();
  Serial.println("04050343  04050794  START");*/
  pinMode(buttonPin, INPUT);
}

void loop() 
{
 /* if(irrecv.decode(&results))
  {
    Serial.print("irCode: ");
    Serial.print(results.value, HEX);
    Serial.print(" ,  bit: ");
    Serial.println(results.bits);
    irrecv.resume();
    }*/
   buttonState = digitalRead(buttonPin);
   
   if(buttonState == HIGH)
   {
    irsend.sendNEC(0x4FB48B7, 32);
    Serial.print("X");
    
    }
   
}
