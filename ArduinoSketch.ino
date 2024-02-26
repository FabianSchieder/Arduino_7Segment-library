#include <sevenSeg.h>

int pin[] = {2, 3, 4, 5, 6, 7, 8};
int pin2[] = {40, 41, 42, 43, 44, 45, 46};
int pin3[] = {22, 23, 24, 25, 26, 27, 28};
int segments = 3;

SevenSeg Anzeige(segments, pin, pin2, pin3);

void setup()
{}

void loop()
{
  for(int i = 0; i < 1000; i++)
  {
    Anzeige.show(i);
    delay(200);
    Anzeige.clear();
  }
}
