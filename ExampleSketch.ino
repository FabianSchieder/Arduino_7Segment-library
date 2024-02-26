#include <sevenSeg.h>

int pin[] = {2, 3, 4, 5, 6, 7, 8};
// Segment:  a  b  c  d  e  f  g

int pin2[] = {40, 41, 42, 43, 44, 45, 46};
// Segment:   a   b   c   d   e   f   g

int pin3[] = {22, 23, 24, 25, 26, 27, 28};
// Segment:   a   b   c   d   e   f   g

int segments = 3;  // Anzahl der 7-Segment Displays

// Wenn nicht alle 3 7-Segment Displays benutzt werden muss man lehre arrays mitgeben -->
// int pin2[7]; ...

SevenSeg Anzeige(segments, pin, pin2, pin3);

void setup()
{
  // Wird in diesem Beispiel nicht benötigt.
}

void loop()
{
  for(int i = 0; i < 1000; i++)
  {
    Anzeige.show(i);
    delay(500);
    Anzeige.clear();
  }
}
