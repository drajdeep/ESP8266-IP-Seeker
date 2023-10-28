#include <ESP8266WiFi.h>

void setup() 
{
  Serial.begin(115200);

  // Connect to Wi-Fi
  WiFi.begin("your_network_ssid", "your_network_password");
  while (WiFi.status() != WL_CONNECTED) 
  {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }

  // Print the local IP address
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());
}

void loop() 
{ 
}