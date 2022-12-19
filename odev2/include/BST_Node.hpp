#ifndef TLinked_Node_hpp
#define TLinked_Node_hpp
#include <iostream>
class BST_Node
{
public:
    int key;
    BST_Node *left;
    BST_Node *right;

    BST_Node(int key);
    ~BST_Node();
};

#endif