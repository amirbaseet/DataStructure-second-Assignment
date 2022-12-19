#ifndef BSTlinkedNode_hpp
#define BSTlinkedNode_hpp
#include "BST.hpp"
#include <iostream>
class BSTlinkedNode
{
public:
    BSTlinkedNode(BST tree);
    BST tree;
    BSTlinkedNode *prev;
    BSTlinkedNode *next;
};

#endif