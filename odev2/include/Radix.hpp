#ifndef Radix_hpp
#define Radix_hpp
#include "Queue.hpp"
class Radix
{
public:
    Radix(int *numbers, int number);
    ~Radix();
    int *sort();

private:
    int GetMaxIndexNumber();
    int GetIndexNumber(int numbersPtr);
    void PrintQueues();
    void QueusLength(int *length);

    Queue **queues;
    int *numbersPtr;
    int numOfNumbers;
};
#endif