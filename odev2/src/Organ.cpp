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
        mutability = true;
    }
}
void Organ::addElement(int data)
{
    if (is_tweny() == false)
    {
        if (this->NumOFNodes == 0)
            this->CheckMutability();
        OrganTree->AddLeaf(data);
        NumOFNodes++;
    }
    else
        cout << "\nCannot adding the Node Number is 20\n";
}
void Organ::DelAllElements()
{
    this->OrganTree->del_AllNodes();
    this->NumOFNodes = 0;
}
void Organ::PrintPostOrder()
{
    this->OrganTree->PrintPostOrder();
}