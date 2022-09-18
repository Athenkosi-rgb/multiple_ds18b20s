
/********************************************
  Title:          Skripsie-Website
  Name:           Athenkosi Hlonyane
  Student Number: 21879168
*********************************************/

#include <WiFi.h>
#include <ESPAsyncWebServer.h>
#include <OneWire.h>
#include <DallasTemperature.h>
#include <SPIFFS.h>

#include "home.h"
#include "file.h"
#include "settings.h"
#include "data.h"
#include "graph.h"

// Data wire is plugged TO GPIO 9
#define ONE_WIRE_BUS 9

// Setup a oneWire instance to communicate with any OneWire devices (not just Maxim/Dallas temperature ICs)
OneWire oneWire(ONE_WIRE_BUS);

// Pass our oneWire reference to Dallas Temperature. 
DallasTemperature sensors(&oneWire);

// Variables to store temperature values
String temperatureC = "";

// Timer variables
unsigned long lastTime = 0;  
unsigned long timerDelay = 5000;
//unsigned long notConnectedCounter = 0;

// Setting your network credentials
const char* ssid = "Skripsie";
const char* password = "Jidion123";

// const char* ssid = "eduroam"; // your ssid
// #define EAP_ID "21879168@sun.ac.za"
// #define EAP_USERNAME "21879168@sun.ac.za" //removed for obvious reasons
// #define EAP_PASSWORD "@Germany2028"

//Create an AsyncWebServer object on port 80.
AsyncWebServer server(80);

String readDSTemperatureC() {
  // Call sensors.requestTemperatures() to issue a global temperature and Requests to all devices on the bus
  sensors.requestTemperatures(); 
  float tempC = sensors.getTempCByIndex(0);

  if(tempC == -127.00) {
    Serial.println("Failed to read from DS18B20 sensor");
    return "--";
  } else {
    Serial.print("Temperature Celsius: ");
    Serial.println(tempC); 
  }
  return String(tempC);
}

// Replaces placeholder with DS18B20 values
String processor(const String& var){
  // Serial.println(var);
  if(var == "TEMPERATUREA1"){return temperatureC;}
  else if(var == "TEMPERATUREA2"){return temperatureC;}
  else if(var == "TEMPERATUREA3"){return temperatureC;}
  else if(var == "TEMPERATUREA4"){return temperatureC;}
  else if(var == "TEMPERATUREA5"){return temperatureC;}
  else if(var == "TEMPERATUREB1"){return temperatureC;}
  else if(var == "TEMPERATUREB2"){return temperatureC;}
  else if(var == "TEMPERATUREB3"){return temperatureC;}
  else if(var == "TEMPERATUREB4"){return temperatureC;}
  else if(var == "TEMPERATUREB5"){return temperatureC;}
  else if(var == "TEMPERATUREC1"){return temperatureC;}
  else if(var == "TEMPERATUREC2"){return temperatureC;}
  else if(var == "TEMPERATUREC3"){return temperatureC;}
  else if(var == "TEMPERATUREC4"){return temperatureC;}
  else if(var == "TEMPERATUREC5"){return temperatureC;}
  else if(var == "TEMPERATURED1"){return temperatureC;}
  else if(var == "TEMPERATURED2"){return temperatureC;}
  else if(var == "TEMPERATURED3"){return temperatureC;}
  else if(var == "TEMPERATURED4"){return temperatureC;}
  else if(var == "TEMPERATURED5"){return temperatureC;}
  else if(var == "TEMPERATUREE1"){return temperatureC;}
  else if(var == "TEMPERATUREE2"){return temperatureC;}
  else if(var == "TEMPERATUREE3"){return temperatureC;}
  else if(var == "TEMPERATUREE4"){return temperatureC;}
  else if(var == "TEMPERATUREE5"){return temperatureC;}
  return String();
}

// Number of temperature devices found
int numberOfDevices;

// We'll use this variable to store a found device address
DeviceAddress tempDeviceAddress; 

void setup(){
  // start serial port
  Serial.begin(115200);
  delay(10);
  Serial.println();

  // Start up the DS18B20 library
  sensors.begin();

  temperatureC = readDSTemperatureC();

   //Connect to Wi-Fi
  WiFi.begin(ssid,password);
  Serial.println("Connecting to WiFi");
  uint8_t status = WiFi.waitForConnectResult();

  SPIFFS.begin(true);
  delay(10);
  if(!SPIFFS.begin()){
        Serial.println("An Error has occurred while mounting SPIFFS");
        return;
  }
  
  while (status != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  // Print ESP Local IP Address
  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());

  
  // Route for root / web page
  Serial.println("GET /");
  server.on("/", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/html", htmlHome, processor);
  });
  Serial.println("GET /file");
  server.on("/file", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/html", htmlFile, processor);
  });
  Serial.println("GET /settings");
  server.on("/settings", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/html", htmlSettings, processor);
  });
  Serial.println("GET /data");
  server.on("/data", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/html", htmlData, processor);
  });
  Serial.println("GET /graph");
  server.on("/graph", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/html", htmlGraph, processor);
  });

  server.on("/temperaturea1", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/plain", temperatureC.c_str());
  });
  server.on("/temperaturea2", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/plain", temperatureC.c_str());
  });
  server.on("/temperaturea3", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/plain", temperatureC.c_str());
  });
  server.on("/temperaturea4", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/plain", temperatureC.c_str());
  });
  server.on("/temperaturea5", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/plain", temperatureC.c_str());
  });
  server.on("/temperatureb1", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/plain", temperatureC.c_str());
  });
  server.on("/temperatureb2", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/plain", temperatureC.c_str());
  });
  server.on("/temperatureb3", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/plain", temperatureC.c_str());
  });
  server.on("/temperatureb4", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/plain", temperatureC.c_str());
  });
  server.on("/temperatureb5", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/plain", temperatureC.c_str());
  });
  server.on("/temperaturec1", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/plain", temperatureC.c_str());
  });
  server.on("/temperaturec2", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/plain", temperatureC.c_str());
  });
  server.on("/temperaturec3", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/plain", temperatureC.c_str());
  });
  server.on("/temperaturec4", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/plain", temperatureC.c_str());
  });
  server.on("/temperaturec5", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/plain", temperatureC.c_str());
  });
  server.on("/temperatured1", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/plain", temperatureC.c_str());
  });
  server.on("/temperatured2", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/plain", temperatureC.c_str());
  });
  server.on("/temperatured3", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/plain", temperatureC.c_str());
  });
  server.on("/temperatured4", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/plain", temperatureC.c_str());
  });
  server.on("/temperatured5", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/plain", temperatureC.c_str());
  });
  server.on("/temperaturee1", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/plain", temperatureC.c_str());
  });
  server.on("/temperaturee2", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/plain", temperatureC.c_str());
  });
  server.on("/temperaturee3", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/plain", temperatureC.c_str());
  });
  server.on("/temperaturee4", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/plain", temperatureC.c_str());
  });
  server.on("/temperaturee5", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/plain", temperatureC.c_str());
  });

  // Start server
  server.begin();
  Serial.println("HTTP server started");
}

void loop(){ 
  if ((millis() - lastTime) > timerDelay) {
    temperatureC = readDSTemperatureC();
    lastTime = millis();
  }  
}
