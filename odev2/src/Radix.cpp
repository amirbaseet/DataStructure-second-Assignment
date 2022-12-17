
#include "Radix.hpp"
Radix::Radix(int *numbersPtr, int number)
{
    this->numOfNumbers = number;
    this->numbersPtr = new int[numOfNumbers];
    for (int i = 0; i < numOfNumbers; i++)
        this->numbersPtr[i] = numbersPtr[i];

    queues = new Queue *[10];

    for (int i = 0; i < 10; i++)
        queues[i] = new Queue();
}

Radix::~Radix()
{
    delete[] this->numbersPtr;
    for (int i = 0; i < 10; i++)
        delete queues[i];

    delete queues;
}
int *Radix::sort()
{
    for (int i = 0; i < numOfNumbers; i++)
    {
        int LastIndex = numbersPtr[i] % 10;
        queues[LastIndex]->add(numbersPtr[i]);
    }
    int MaxNumOfIndexes = GetMaxIndexNumber();

    int multipIndex = 10;
    for (int i = 0; i < MaxNumOfIndexes; i++)
    {
        int length[10];

        QueusLength(length);
        for (int j = 0; j < 10; j++)
        {
            int es = length[j];
            while (es)
            {
                int NextNum = queues[j]->get();
                queues[j]->dlt();
                int Index = (NextNum / multipIndex) % 10;
                queues[Index]->add(NextNum);
                es--;
            }
        }
        multipIndex *= 10;
    }
    int arrayIndex = 0;
    for (int i = 0; i < 10; i++)
    {
        while (!queues[i]->empty())
        {
            numbersPtr[arrayIndex] = queues[i]->get();
            queues[i]->dlt();
            arrayIndex++;
        }
    }
    return numbersPtr;
}
int Radix::GetMaxIndexNumber()
{
    int MaxIndNumber = GetIndexNumber(numbersPtr[0]);
    int nextNumOfIndex;
    for (int i = 1; i < numOfNumbers; i++)
    {
        nextNumOfIndex = GetIndexNumber(numbersPtr[i]);
        if (MaxIndNumber < nextNumOfIndex)
            MaxIndNumber = nextNumOfIndex;
    }
    return nextNumOfIndex;
}
int Radix::GetIndexNumber(int number)
{
    int NumOfIndexes = 0;
    while (number)
    {
        number /= 10;
        NumOfIndexes++;
    }
    return NumOfIndexes;
}
void Radix::PrintQueues()
{
    for (int i = 0; i < 10; i++)
    {
        cout << setw(5) << left << i << ":" << *queues[i];
    }
    cout << "------------------------" << endl;
}
void Radix::QueusLength(int *length)
{
    for (int i = 0; i < 10; i++)
    {
        length[i] = queues[i]->GetN_Number();
    }
}
