#include "TNode.hpp"

TNode::TNode(int key)
{
    this->key = key;
    this->left = this->right = NULL;
    odd = false;
    if (key % 2 == 0)
        this->odd = true;
}

TNode::~TNode()
{
}
