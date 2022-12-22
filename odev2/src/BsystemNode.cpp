/**
 * @file Bsystem.cpp
 * @description linked List OF ORGANS NODE
 * @course 2 c
 * @assignment 2
 * @date 12/20/2022
 * @author AMRO MOUSA ISMAIL BASEET
 */
#include "BsystemNode.hpp"

BsystemNode::BsystemNode(Organ *tree)
{
    this->tree = tree;
    prev = next = NULL;
}
