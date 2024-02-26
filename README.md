# Einführung #

Diese Bibliothek funktioniert momentan nur für Common-Cathode 7-Segment Displays.

### Sieben-Segment Segmente: ###

![](https://github.com/FabianSchieder/Arduino_7Segment-library/blob/main/7SegmentSegmente.png "Segmente")

### Anschluss Pins: ###

![](https://github.com/FabianSchieder/Arduino_7Segment-library/blob/main/7-Segment-AnzeigeAnschl%C3%BCsse.jpg "Pins")

## Beispiel-Code: ##

```c++

#include <sevenSeg.h>

int pin[] = {2, 3, 4, 5, 6, 7, 8};
// Segment:  a  b  c  d  e  f  g

int pin2[] = {40, 41, 42, 43, 44, 45, 46};
// Segment:   a   b   c   d   e   f   g

int pin3[] = {22, 23, 24, 25, 26, 27, 28};
// Segment:   a   b   c   d   e   f   g

int segments = 3;  // Anzahl der 7-Segment Displays

// Wenn nicht alle 3 7-Segment Displays benutzt werden muss man leere arrays mitgeben -->
// int pin2[7]; ...

SevenSeg Anzeige(segments, pin, pin2, pin3);

void setup()
{
  // Wird in diesem Beispiel nicht benötigt.
}

void loop()
{
  // In diesem Beispiel sollten die 7-Segment Anzeigen von 0 bis 999 mit jeweils 500ms Abstand zählen.

  for(int i = 0; i < 1000; i++) 
  {
    Anzeige.show(i); // Zeigt wie der Nahme sagt die Zahl an.
    delay(500);
    Anzeige.clear(); // Löscht die gesamte Anzeige.
  }
}

```

## Header-Datei ##

```c++

class SevenSeg
{
private:
    int* pin;
    int* pin2;
    int* pin3;
    int segments;

public:
    SevenSeg(int segments, int* pin, int* pin2, int* pin3);
    void showNumber(int number);
    void showNumber2(int number);
    void showNumber3(int number);
    void show(int number);
    void clear();
};
```

## Quellcode-Datei: ##

```c++

#include "sevenSeg.h"
#include "Arduino.h"

SevenSeg::SevenSeg(int segments, int* pin, int* pin2, int* pin3)
{
    this->pin = pin;
    this->pin2 = pin2;
    this->pin3 = pin3;

    this->segments = segments;

    for (int i = 0; i < 7; i++)
    {
        pinMode(*(pin + i), OUTPUT);
        pinMode(*(pin2 + i), OUTPUT);
        pinMode(*(pin3 + i), OUTPUT);
    }
}

void SevenSeg::showNumber(int number)
{ ... }

void SevenSeg::showNumber2(int number)
{ ... }

void SevenSeg::showNumber3(int number)
{ ... }

void SevenSeg::show(int number)
{
    switch(segments)
    {
        case 1:
            showNumber(number % 10);
            break;

        case 2:
            showNumber2((number / 10) % 10);
            showNumber(number % 10);
            break;

        case 3:
            showNumber3(number / 100);
            showNumber2((number / 10) % 10);
            showNumber(number % 10);
            break;
    }
}

void SevenSeg::clear()
{
    for(int i = 0; i < 7; i++)
    {
        digitalWrite(*(pin + i), LOW);
        digitalWrite(*(pin2 + i), LOW);
        digitalWrite(*(pin3 + i), LOW);
    }
}

```
