#ifndef Organ_hpp
#define Organ_hpp
#include "BST.hpp"
#include "Linkedlist.hpp"

class Organ
{
public:
    Organ(/* args */);
    ~Organ();
    bool is_tweny();
    bool ret_mutability();
    void addElement(int data);
    void CheckMutability();
    void DelAllElements();
    void PrintPostOrder();
    BST_Node *retFirst() const;
    int *BstTOArray();
    void BstTOLinked();
    void PrintLinked();
    void ArrayToBST(int *array, int ArrayLength);

private:
    Linkedlist LinkedList;
    BST *OrganTree;
    int NumOFNodes;
    int *BstTOArrayPrivate();
    void BstTOLinkedListPrivate(BST_Node *ptr);
    bool mutability;
};
#endif