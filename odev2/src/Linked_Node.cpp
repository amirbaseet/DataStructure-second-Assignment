/**
 * @file Linked_Node.hpp
 * @description LINKED LIST NODE
 * @course 2 c
 * @assignment 2
 * @date 12/20/2022
 * @author AMRO MOUSA ISMAIL BASEET
 */
#include "Linked_Node.hpp"
Linked_Node::Linked_Node(int data)
{
    this->data = data;

    prev = next = NULL;
}