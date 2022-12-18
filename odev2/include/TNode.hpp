#ifndef TCellNode_hpp
#define TCellNode_hpp
#include <iostream>
class TNode
{
public:
    int key;
    TNode *left;
    TNode *right;
    bool odd; // check if the data odd or not

    TNode(int key);
    ~TNode();
};

#endif