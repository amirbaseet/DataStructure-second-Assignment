/**
 * @file Linked_Node.hpp
 * @description LINKED LIST NODE
 * @course 2 c
 * @assignment 2
 * @date 12/20/2022
 * @author AMRO MOUSA ISMAIL BASEET
 */
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