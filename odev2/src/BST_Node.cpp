#include "BST_Node.hpp"

BST_Node::BST_Node(int key)
{
    this->key = key;
    this->left = this->right = NULL;
}

BST_Node::~BST_Node()
{
}
