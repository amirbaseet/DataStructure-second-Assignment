/**
 * @file Linkedlist.cpp
 * @description LINKED LIST
 * @course 2 c
 * @assignment 2
 * @date 12/20/2022
 * @author AMRO MOUSA ISMAIL BASEET
 */
#ifndef Linkedlist_hpp
#define Linkedlist_hpp
#include <Linked_Node.hpp>
// #include <Radix.hpp>
#include <iomanip>
using namespace std;
class Linkedlist
{
public:
    Linkedlist();
    ~Linkedlist();
    int N_numGet() const;
    void addLinked_Node(int data);
    Linked_Node *ReturnFirst() const;
    int *LinkedToArray();
    void LastNdel();
    void MakeListEmpty(const int NumOfLinked_Nodes);

    friend ostream &operator<<(ostream &os, const Linkedlist &liste);

private:
    Linked_Node *First;
    Linked_Node *Last;
    int N_Number;
};

#endif