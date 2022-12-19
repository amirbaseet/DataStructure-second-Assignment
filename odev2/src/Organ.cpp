#include "Organ.hpp"
#include <iostream>
Organ::Organ()
{
    OrganTree = new BST;
    NumOFNodes = 0;
    mutability = false;
    Balanced = false;
}

Organ::~Organ()
{
    delete OrganTree;
}
bool Organ::is_tweny()
{
    if (this->NumOFNodes == 20)
        return true;
    else
        return false;
}
bool Organ::ret_mutability()
{
    return this->mutability;
}
void Organ::CheckMutability()
{
    if (this->OrganTree->ReturnRootKey() % 50 == 0)
    {
        this->mutability = true;
    }
    else
        this->mutability = false;
}
void Organ::addElement(int data)
{
    // if (this->NumOFNodes == 0)
    // {
    //     this->CheckMutability();
    // }
    OrganTree->AddLeaf(data);
    NumOFNodes++;
}

void Organ::PrintPostOrder()
{
    this->OrganTree->PrintPostOrder();
}
BST_Node *Organ::retFirst() const
{
    return OrganTree->retFirst();
}
void Organ::BstTOLinked()
{
    this->BstTOLinkedListPrivate(this->retFirst());
}
void Organ::BstTOLinkedListPrivate(BST_Node *Ptr)
{
    if (Ptr != NULL)
    {
        BstTOLinkedListPrivate(Ptr->left);
        BstTOLinkedListPrivate(Ptr->right);
        LinkedList.addLinked_Node(Ptr->key);
    }
}

int *Organ::BstTOArray()
{
    BstTOArrayPrivate();
}
void Organ::DelAllElements()
{
    this->OrganTree->del_AllNodes();
    this->NumOFNodes = 0;
}
int *Organ::BstTOArrayPrivate()
{
    BstTOLinked();
    int *Array = LinkedList.LinkedToArray();
    LinkedList.MakeListEmpty(LinkedList.N_numGet());
    return Array;
}
void Organ::PrintLinked()
{
    cout << LinkedList;
}
void Organ::ArrayToBST(int *Array, int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
    {
        this->addElement(Array[i]);
    }
    // AFTER COPYING THE ARRAY WILL BE DELETED
    delete[] Array;
}
void Organ::checkbalanced()
{
    bool balance = OrganTree->Balance();
    this->Balanced = balance;
}
bool Organ::retbalanced()
{
    return this->Balanced;
}
void Organ::PrintNumber()
{
    cout << "\nThe Number Of Elements is " << this->NumOFNodes << endl;
}