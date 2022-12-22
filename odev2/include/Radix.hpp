/**
 * @file Radix.hpp
 * @description ITS A SORT ALGORIHIM THAT USING A QUEUES
 * @course 2 c
 * @assignment 2
 * @date 12/20/2022
 * @author AMRO MOUSA ISMAIL BASEET
 */
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