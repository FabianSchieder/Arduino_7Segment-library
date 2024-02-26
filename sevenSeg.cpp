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
{
    switch(number)
    {
        case 0:
            for(int i = 0; i < 6; i++)
            {
                digitalWrite(pin[i], HIGH);
            }
            break;

        case 1:
            digitalWrite(*(pin + 1), HIGH);
            digitalWrite(*(pin + 2), HIGH);
            break;

        case 2:
            digitalWrite(*(pin), HIGH);
            digitalWrite(*(pin + 1), HIGH);
            digitalWrite(*(pin + 6), HIGH);
            digitalWrite(*(pin + 4), HIGH);
            digitalWrite(*(pin + 3), HIGH);
            break;

        case 3:
            digitalWrite(*(pin + 0), HIGH);
            digitalWrite(*(pin + 1), HIGH);
            digitalWrite(*(pin + 6), HIGH);
            digitalWrite(*(pin + 2), HIGH);
            digitalWrite(*(pin + 3), HIGH);
            break;

        case 4:
            digitalWrite(*(pin + 5), HIGH);
            digitalWrite(*(pin + 6), HIGH);
            digitalWrite(*(pin + 1), HIGH);
            digitalWrite(*(pin + 2), HIGH);
            break;

        case 5:
            digitalWrite(*(pin + 0), HIGH);
            digitalWrite(*(pin + 5), HIGH);
            digitalWrite(*(pin + 6), HIGH);
            digitalWrite(*(pin + 2), HIGH);
            digitalWrite(*(pin + 3), HIGH);
            break;

        case 6:
            digitalWrite(*(pin + 0), HIGH);
            digitalWrite(*(pin + 5), HIGH);
            digitalWrite(*(pin + 6), HIGH);
            digitalWrite(*(pin + 4), HIGH);
            digitalWrite(*(pin + 2), HIGH);
            digitalWrite(*(pin + 3), HIGH);
            break;

        case 7:
            digitalWrite(*(pin + 0), HIGH);
            digitalWrite(*(pin + 1), HIGH);
            digitalWrite(*(pin + 2), HIGH);
            break;

        case 8:
            digitalWrite(*(pin + 0), HIGH);
            digitalWrite(*(pin + 1), HIGH);
            digitalWrite(*(pin + 2), HIGH);
            digitalWrite(*(pin + 3), HIGH);
            digitalWrite(*(pin + 4), HIGH);
            digitalWrite(*(pin + 5), HIGH);
            digitalWrite(*(pin + 6), HIGH);
            break;

        case 9:
            digitalWrite(*(pin + 0), HIGH);
            digitalWrite(*(pin + 1), HIGH);
            digitalWrite(*(pin + 2), HIGH);
            digitalWrite(*(pin + 3), HIGH);
            digitalWrite(*(pin + 5), HIGH);
            digitalWrite(*(pin + 6), HIGH);
            break;

        default:
            break;
    }
}

void SevenSeg::showNumber2(int number)
{
    switch(number)
    {
        case 0:
            for(int i = 0; i < 6; i++)
            {
                digitalWrite(pin2[i], HIGH);
            }
            break;

        case 1:
            digitalWrite(*(pin2 + 1), HIGH);
            digitalWrite(*(pin2 + 2), HIGH);
            break;

        case 2:
            digitalWrite(*(pin2 + 0), HIGH);
            digitalWrite(*(pin2 + 1), HIGH);
            digitalWrite(*(pin2 + 6), HIGH);
            digitalWrite(*(pin2 + 4), HIGH);
            digitalWrite(*(pin2 + 3), HIGH);
            break;

        case 3:
            digitalWrite(*(pin2 + 0), HIGH);
            digitalWrite(*(pin2 + 1), HIGH);
            digitalWrite(*(pin2 + 6), HIGH);
            digitalWrite(*(pin2 + 2), HIGH);
            digitalWrite(*(pin2 + 3), HIGH);
            break;

        case 4:
            digitalWrite(*(pin2 + 5), HIGH);
            digitalWrite(*(pin2 + 6), HIGH);
            digitalWrite(*(pin2 + 1), HIGH);
            digitalWrite(*(pin2 + 2), HIGH);
            break;

        case 5:
            digitalWrite(*(pin2 + 0), HIGH);
            digitalWrite(*(pin2 + 5), HIGH);
            digitalWrite(*(pin2 + 6), HIGH);
            digitalWrite(*(pin2 + 2), HIGH);
            digitalWrite(*(pin2 + 3), HIGH);
            break;

        case 6:
            digitalWrite(*(pin2 + 0), HIGH);
            digitalWrite(*(pin2 + 5), HIGH);
            digitalWrite(*(pin2 + 6), HIGH);
            digitalWrite(*(pin2 + 4), HIGH);
            digitalWrite(*(pin2 + 2), HIGH);
            digitalWrite(*(pin2 + 3), HIGH);
            break;

        case 7:
            digitalWrite(*(pin2 + 0), HIGH);
            digitalWrite(*(pin2 + 1), HIGH);
            digitalWrite(*(pin2 + 2), HIGH);
            break;

        case 8:
            digitalWrite(*(pin2 + 0), HIGH);
            digitalWrite(*(pin2 + 1), HIGH);
            digitalWrite(*(pin2 + 2), HIGH);
            digitalWrite(*(pin2 + 3), HIGH);
            digitalWrite(*(pin2 + 4), HIGH);
            digitalWrite(*(pin2 + 5), HIGH);
            digitalWrite(*(pin2 + 6), HIGH);
            break;

        case 9:
            digitalWrite(*(pin2 + 0), HIGH);
            digitalWrite(*(pin2 + 1), HIGH);
            digitalWrite(*(pin2 + 2), HIGH);
            digitalWrite(*(pin2 + 3), HIGH);
            digitalWrite(*(pin2 + 5), HIGH);
            digitalWrite(*(pin2 + 6), HIGH);
            break;

        default:
            break;
    }
}

void SevenSeg::showNumber3(int number)
{
    switch(number)
    {
        case 0:
            for(int i = 0; i < 6; i++)
            {
                digitalWrite(pin3[i], HIGH);
            }
            break;

        case 1:
            digitalWrite(pin3[1], HIGH);
            digitalWrite(pin3[2], HIGH);
            break;

        case 2:
            digitalWrite(pin3[0], HIGH);
            digitalWrite(pin3[1], HIGH);
            digitalWrite(pin3[6], HIGH);
            digitalWrite(pin3[4], HIGH);
            digitalWrite(pin3[3], HIGH);
            break;

        case 3:
            digitalWrite(pin3[0], HIGH);
            digitalWrite(pin3[1], HIGH);
            digitalWrite(pin3[6], HIGH);
            digitalWrite(pin3[2], HIGH);
            digitalWrite(pin3[3], HIGH);
            break;

        case 4:
            digitalWrite(pin3[5], HIGH);
            digitalWrite(pin3[6], HIGH);
            digitalWrite(pin3[1], HIGH);
            digitalWrite(pin3[2], HIGH);
            break;

        case 5:
            digitalWrite(pin3[0], HIGH);
            digitalWrite(pin3[5], HIGH);
            digitalWrite(pin3[6], HIGH);
            digitalWrite(pin3[2], HIGH);
            digitalWrite(pin3[3], HIGH);
            break;

        case 6:
            digitalWrite(pin3[0], HIGH);
            digitalWrite(pin3[5], HIGH);
            digitalWrite(pin3[6], HIGH);
            digitalWrite(pin3[4], HIGH);
            digitalWrite(pin3[2], HIGH);
            digitalWrite(pin3[3], HIGH);
            break;

        case 7:
            digitalWrite(pin3[0], HIGH);
            digitalWrite(pin3[1], HIGH);
            digitalWrite(pin3[2], HIGH);
            break;

        case 8:
            digitalWrite(pin3[0], HIGH);
            digitalWrite(pin3[1], HIGH);
            digitalWrite(pin3[2], HIGH);
            digitalWrite(pin3[3], HIGH);
            digitalWrite(pin3[4], HIGH);
            digitalWrite(pin3[5], HIGH);
            digitalWrite(pin3[6], HIGH);
            break;

        case 9:
            digitalWrite(pin3[0], HIGH);
            digitalWrite(pin3[1], HIGH);
            digitalWrite(pin3[2], HIGH);
            digitalWrite(pin3[3], HIGH);
            digitalWrite(pin3[5], HIGH);
            digitalWrite(pin3[6], HIGH);
            break;

        default:
            break;
    }
}

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