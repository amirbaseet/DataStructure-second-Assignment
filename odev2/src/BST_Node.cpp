/**
 * @file BST_Node.cpp
 * @description BST Node
 * @course 2 c
 * @assignment 2
 * @date 12/20/2022
 * @author AMRO MOUSA ISMAIL BASEET
 */
#include "BST_Node.hpp"

BST_Node::BST_Node(int key)
{
    this->key = key;
    this->left = this->right = NULL;
}

BST_Node::~BST_Node()
{
}
