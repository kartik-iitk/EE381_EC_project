// #include <ESP8266WiFi.h>

// const char* ssid = "studdybuddy";
// const char* password = "dqou6728";

// void setup() {
//   Serial.begin(9600);
//   delay(100);

//   // Connect to WiFi
//   WiFi.begin(ssid, password);

//   Serial.print("Connecting to ");
//   Serial.println(ssid);

//   while (WiFi.status() != WL_CONNECTED) {
//     delay(500);
//     Serial.print(".");
//   }

//   Serial.println("");
//   Serial.println("WiFi connected");
//   Serial.println("IP address: ");
//   Serial.println(WiFi.localIP());
// }

// Simple LED Blinking code
void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  delay(1000);
}
