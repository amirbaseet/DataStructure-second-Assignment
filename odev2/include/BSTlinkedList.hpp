#ifndef BSTlinkedList_hpp
#define BSTlinkedList_hpp
#include "BSTlinkedNode.hpp"
using namespace std;

class BSTlinkedList
{
public:
    BSTlinkedList();
    ~BSTlinkedList();
    int GetNodeNum() const;
    void AddBst_Node(BST tree);
    void LastNdel();
    void emptyList();
    BSTlinkedNode *ReturnFirst() const;

private:
    BSTlinkedNode *First;
    BSTlinkedNode *Last;
    int N_Number;
};
#endif