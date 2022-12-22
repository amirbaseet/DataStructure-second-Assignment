/**
 * @file BST_Node
 * @description BST Node
 * @course 2 c
 * @assignment 2
 * @date 12/20/2022
 * @author AMRO MOUSA ISMAIL BASEET
 */
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