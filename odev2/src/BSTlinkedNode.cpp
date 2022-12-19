#include "BSTlinkedNode.hpp"

BSTlinkedNode::BSTlinkedNode(BST tree)
{
    this->tree = tree;
    prev = next = NULL;
}

BSTlinkedNode::~BSTlinkedNode()
{
}