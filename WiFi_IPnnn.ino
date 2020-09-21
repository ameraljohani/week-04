#include<ESP8266WiFi.h>

void setup() {
Serial. begin(115200);
WiFi.disconnect();
WiFi.begin("HomeBroadband2","0143226216");
while(!(WiFi.status()== WL_CONNECTED)){
Serial.print("..");
delay(100);
}
Serial.println("\nWIFI IS CONNECTED");
Serial.println(WiFi.localIP());


}
void loop() {
  // put your main code here, to run repeatedly:

}
