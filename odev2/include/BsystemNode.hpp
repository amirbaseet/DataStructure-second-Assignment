/**
 * @file BsystemNode.hpp
 * @description linked List OF ORGANS NODE
 * @course 2 c
 * @assignment 2
 * @date 12/20/2022
 * @author AMRO MOUSA ISMAIL BASEET
 */
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