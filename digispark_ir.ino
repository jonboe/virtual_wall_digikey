#include <IRremote.h>

// Instantiate IRremote
// on a digikey (ATTiny) it uses Pin 1.
IRsend irsend;

void setup()
{
  irsend.enableIROut(38);
}

void loop()
{
  irsend.mark(1000);
  irsend.space(1000);
}
