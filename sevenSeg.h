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