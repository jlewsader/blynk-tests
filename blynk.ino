// This #include statement was automatically added by the Particle IDE.
#include "blynk.h"

char auth[] = "765dc5e5e038459b952af4d138090e77";

void setup()
{
  Serial.begin(9600); // See the connection status in Serial Monitor
  delay(5000);        // Time to think
  Blynk.begin(auth);  // Here you connect to the Blynk Cloud.
}

void loop()
{
  Blynk.run(); // All the Blynk Magic happens here...
}
