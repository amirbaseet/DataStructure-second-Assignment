#include "CellNode.hpp"
CellNode::CellNode(int data)
{
    this->data = data;

    prev = next = 0;
}