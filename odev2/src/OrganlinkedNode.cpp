#include "OrganlinkedNode.hpp"

OrganlinkedNode::OrganlinkedNode(Organ tree)
{
    this->tree = tree;
    prev = next = NULL;
}
