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
    for (int i = 0; i < this->GetNodeNum(); i++)
    {
        LastNdel();
    }
}
void Bsystem::PrintSystem()
{
    BsystemNode *Ptr = this->First;
    while (Ptr->next != 0)
    {
        Ptr->tree->checkbalanced();
        if (Ptr->tree->retbalanced() == true)
            cout << " ";
        else
            cout << "#";

        Ptr = Ptr->next;
    }

    cout << endl;
}