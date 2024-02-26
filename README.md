# Einführung #

Diese Bibliothek funktioniert momentan nur für Common-Cathode 7-Segment Displays.

### Sieben-Segment Segmente: ###

![](https://github.com/FabianSchieder/Arduino_7Segment-library/blob/main/7SegmentSegmente.png "Segmente")

### Anschluss Pins: ###

![](https://github.com/FabianSchieder/Arduino_7Segment-library/blob/main/7-Segment-AnzeigeAnschl%C3%BCsse.jpg "Pins")

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
