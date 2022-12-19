#include "Organ.hpp"
#include <iostream>
Organ::Organ()
{
    OrganTree = new BST;
    NumOFNodes = 0;
    mutability = false;
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
bool Organ::checkbalanced()
{
    return OrganTree->Balance();
}

void Organ::PrintNumber()
{
    cout << "\nThe Number Of Elements is " << this->NumOFNodes << endl;
}
void Organ::Mututeit()
{
    if (ret_mutability() == true)
    {
        this->MututeitPrivate(this->OrganTree->retFirst());
        int *BstArray = this->BstTOArray();
        const int ArrayLength = this->OrganTree->ReturnNumOfNodes();
        DelAllElements();
        this->ArrayToBST(BstArray, ArrayLength);
    }
}
void Organ::MututeitPrivate(BST_Node *Ptr)
{
    if (Ptr != NULL)
    {
        BstTOLinkedListPrivate(Ptr->left);
        BstTOLinkedListPrivate(Ptr->right);
        if (Ptr->key % 2 == 0)
        {
            Ptr->key /= 2;
        }
    }
}