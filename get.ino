#include <IRremote.h>

// 　　接收紅外線

const int irReceiverPin = 2;

IRrecv irrecv(irReceiverPin);
decode_results results;
void setup() 
{
  Serial.begin(9600);
  irrecv.enableIRIn();
}

void loop()
{
 if(irrecv.decode(&results))
 {
  Serial.print("irCode : ");
  Serial.println(results.value, HEX);
  Serial.print(", bits : ");
  Serial.println(results.bits);
  irrecv.resume();
 } 
  
  
  
}
