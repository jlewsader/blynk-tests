// This #include statement was automatically added by the Particle IDE.
#include "blynk.h"

char auth[] = "765dc5e5e038459b952af4d138090e77";

void setup()
{
  Serial.begin(9600); // See the connection status in Serial Monitor
  delay(5000);        // Time to think
  Blynk.begin(auth);  // Here you connect to the Blynk Cloud.
}

BLYNK_WRITE(V0) {
    int r = param[0].asInt(); // get a RED channel value
    int g = param[1].asInt(); // get a GREEN channel value
    int b = param[2].asInt(); // get a BLUE channel value
    if (param[].asInt() > 0) {
        RGB.control(true);
        RGB.color(r,g,b);
    } else {
        RGB.control(false);
    }
}

void loop()
{
  Blynk.run(); // All the Blynk Magic happens here...
}

// THE END!