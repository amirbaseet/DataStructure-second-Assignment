#ifndef Linked_Node_hpp
#define Linked_Node_hpp
#include <iostream>
class Linked_Node
{
public:
    Linked_Node(int data);
    int data;
    Linked_Node *next;
    Linked_Node *prev;
};
#endif