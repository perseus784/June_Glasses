#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <Wire.h>
#include "SSD1306.h"

IPAddress staticIP(10,0,0,20);
IPAddress gateway(10,0,0,20);
IPAddress subnet(255,255,255,0);
SSD1306  display(0x3C, 0, 2);

ESP8266WebServer server(80);
 
const char* ssid = "Rick's WiFi";
const char* password =  "picklerick";
void handleBody();
void clear_display();

void setup() {
  display.init();
  display.setFont(ArialMT_Plain_10);
  
  // Connect to WiFi network
  display.clear();
  display.drawString(0,2,"Connecting to ");
  display.drawString(0,15,ssid);
  display.display();
  
  WiFi.begin(ssid, password);  
  WiFi.config(staticIP, gateway, subnet);
 
  while (WiFi.status() != WL_CONNECTED) { 
        delay(500);
        display.clear();
        display.drawString(0,2,"...");
        display.display();
    }
 
  server.on("/body", handleBody); //Associate the handler function to the path
  server.on("/clear",clear_display);
  display.clear();
  display.drawString(0,2,"WiFi connected");
  display.display();
  delay(2000);
  server.begin();
  display.clear();
 
}
 
void loop() {
 
    server.handleClient(); //Handling of incoming requests
 
}
 
void handleBody() { //Handler for the body path
 
      if (server.hasArg("text")== false){ //Check if body received
 
            server.send(200, "text/plain", "Body not received");
            return;
 
      }
 
      String message = "Body received:\n";
             message += server.arg("text");
             message += "\n";
      String display_message=server.arg("text");
      display.clear();
      display.drawString(0,2,display_message);
      display.display();
      server.send(200, "text/plain", message);
}


void clear_display() { //Handler for the body path
      display.clear();
      display.display();
      server.send(200, "text/plain", "Display Cleared");
}



