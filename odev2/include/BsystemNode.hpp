#ifndef BsystemNode_hpp
#define BsystemNode_hpp
#include "Organ.hpp"

#include <iostream>

class BsystemNode
{
public:
    BsystemNode(Organ *tree);
    Organ *tree;
    BsystemNode *prev;
    BsystemNode *next;
};

#endif