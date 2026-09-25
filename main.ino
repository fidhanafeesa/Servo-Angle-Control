#define BLYNK_TEMPLATE_ID "TMPL3bFMUQqh6"
#define BLYNK_TEMPLATE_NAME "servo controlled by potentiometer"
#define BLYNK_AUTH_TOKEN "5-900Hk1qxgWp75jyZrHlckwcGc1S6bc"


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>


char ssid[] = "username";
char pass[] = "password";


Servo myServo;
BlynkTimer timer;


void readPot()
{
  int potValue = analogRead(A0);


  int angle = map(potValue, 0, 1023, 0, 180);


  myServo.write(angle);


  Blynk.virtualWrite(V0, angle);


  Serial.print("Pot: ");
  Serial.print(potValue);
  Serial.print("  Angle: ");
  Serial.println(angle);
}


void setup()
{
  Serial.begin(115200);


  myServo.attach(D4);


  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);


  timer.setInterval(100L, readPot);
}


void loop()
{
  Blynk.run();
  timer.run();
}
