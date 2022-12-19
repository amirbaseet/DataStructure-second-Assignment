#ifndef OrganlinkedNode_hpp
#define OrganlinkedNode_hpp
#include <Organ.hpp>

#include <iostream>

class OrganlinkedNode
{
public:
    OrganlinkedNode(Organ tree);
    Organ tree;
    OrganlinkedNode *prev;
    OrganlinkedNode *next;
};

#endif