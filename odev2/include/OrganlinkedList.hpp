#ifndef OrganlinkedList_hpp
#define OrganlinkedList_hpp
#include "OrganlinkedNode.hpp"
using namespace std;

class OrganlinkedList
{
public:
    OrganlinkedList();
    ~OrganlinkedList();
    int GetNodeNum() const;
    void AddBst_Node(Organ tree);
    void LastNdel();
    void emptyList();
    OrganlinkedNode *ReturnFirst() const;

private:
    OrganlinkedNode *First;
    OrganlinkedNode *Last;
    int N_Number;
};
#endif