#include "BsystemNode.hpp"

BsystemNode::BsystemNode(Organ *tree)
{
    this->tree = tree;
    prev = next = NULL;
}
