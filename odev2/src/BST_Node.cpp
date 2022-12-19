#include "BST_Node.hpp"

BST_Node::BST_Node(int key)
{
    this->key = key;
    this->left = this->right = NULL;
    odd = false;
    if (key % 2 == 0)
        this->odd = true;
}

BST_Node::~BST_Node()
{
}
