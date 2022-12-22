/**
 * @file Queue.hpp
 * @description ITS AN QUEUE DATA STRUCTURE
 * @course 2 c
 * @assignment 2
 * @date 12/20/2022
 * @author AMRO MOUSA ISMAIL BASEET
 */
#ifndef Queue_hpp
#define Queue_hpp
#include <iostream>
#include <iomanip>
#include "Linked_Node.hpp"
using namespace std;
class Queue
{

public:
    Queue(/* args */);
    ~Queue();
    void add(int data);
    void dlt(); // delete
    bool empty();
    int get() const;
    int GetN_Number() const;
    int get_Organ() const; // getting the middle value
    friend ostream &operator<<(ostream &os, Queue &Queue);

private:
    Linked_Node *First;
    Linked_Node *Last;
    int N_Number;
};
#endif