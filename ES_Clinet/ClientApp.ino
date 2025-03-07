#include <ESP8266HTTPClient.h>
#include <WiFiClient.h>
#include <WiFiUdp.h>
#include <ESP8266WiFi.h>

const char* SSID = "NartRamadan";
const char* pswd = "19911991";

WiFiClient client;
int server_port = 443 ; 

void setup() {
    Serial.begin(9600);
    wifi_Setup();
}


void loop() {

}