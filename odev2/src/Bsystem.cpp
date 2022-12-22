/**
 * @file Bsystem.CPP
 * @description linked List OF ORGANS
 * @course 2 c
 * @assignment 2
 * @date 12/20/2022
 * @author AMRO MOUSA ISMAIL BASEET
 */
#include "Bsystem.hpp"
Bsystem ::Bsystem(/* args */)
{
    First = Last = NULL;
    N_Number = 0;
}

Bsystem ::~Bsystem()
{
    emptyList();
}
int Bsystem::GetNodeNum() const
{
    return N_Number;
}
BsystemNode *Bsystem::ReturnFirst() const
{
    return this->First;
}
void Bsystem::AddBst_Node(Organ *tree)
{
    // Adding a Linked_Node to A linked list
    /*
    first of all looking if the List is empty then The first =Last = New Linked_Node
    if Not will look at the list if it has a one Linked_Node if true the last Linked_Node pointer = new Linked_Node and the prev of the last=first
    if not will  make the Prev of new Linked_Node = last then make it the last Linked_Node in the list
    */
    BsystemNode *Ptr = new BsystemNode(tree);
    if (First == NULL)
    {
        First = Last = Ptr;
    }
    else if (First->next == NULL)
    {
        Last = Ptr;
        Last->prev = First;
        First->next = Last;
    }
    else
    {
        Ptr->prev = Last;
        Last->next = Ptr;
        Last = Ptr;
    }

    N_Number++;
}
void Bsystem::LastNdel()
{
    /*
    Deleting Last Node From The LIST
    */
    if (First == NULL)
        return;
    if (First == Last)
    {
        delete First;
        First = Last = NULL;
    }
    else
    {
        BsystemNode *Ptr = Last->prev;
        Last->prev = NULL;
        Ptr->next = NULL;
        delete Last;
        Last = Ptr;
    }
    N_Number--;
}
void Bsystem::emptyList()
{
    /*
    DELETE ALL NODES FROM THE LIST
    */
    for (int i = 0; i < this->GetNodeNum(); i++)
    {
        LastNdel();
    }
}
void Bsystem::PrintSystem()
{
    /*
        Printing the Sistem
    */
    BsystemNode *Ptr = this->First;
    while (Ptr)
    {

        if (Ptr->tree->checkbalanced())
            cout << " ";
        else
            cout << "#";

        Ptr = Ptr->next;
    }

    cout << endl;
}
