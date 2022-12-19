#include <iostream>
#include <Linkedlist.hpp>
#include <iomanip>
using namespace std;
Linkedlist::Linkedlist(/* args */)
{
    First = Last = NULL;
    N_Number = 0;
}

Linkedlist::~Linkedlist()
{
    // calling function to delete all nodes
    this->MakeListEmpty(N_numGet());
}
int Linkedlist::N_numGet() const
{
    // returninig the number of the nodes
    return N_Number;
}
Linked_Node *Linkedlist::ReturnFirst() const
{
    // returning the first node from the linked list
    return this->First;
}
void Linkedlist::addLinked_Node(int Data)
{
    // Adding a Linked_Node to A linked list
    /*
    first of all looking if the List is empty then The first =Last = New Linked_Node
    if Not will look at the list if it has a one Linked_Node if true the last Linked_Node pointer = new Linked_Node and the prev of the last=first
    if not will  make the Prev of new Linked_Node = last then make it the last Linked_Node in the list
    */
    Linked_Node *New_Linked_Node = new Linked_Node(Data);
    if (First == NULL)
    {
        First = Last = New_Linked_Node;
    }
    else if (First->next == NULL)
    {

        Last = New_Linked_Node;
        Last->prev = First;
        First->next = Last;
    }
    else
    {
        New_Linked_Node->prev = Last;
        Last->next = New_Linked_Node;
        Last = New_Linked_Node;
    }
    N_Number++;
}
int *Linkedlist::LinkedToArray()
{
    {
        int NumOfElements = this->N_numGet();
        int *array = new int[NumOfElements];
        Linked_Node *Ptr = First;
        for (int i = 0; i < NumOfElements; i++)
        {
            array[i] = Ptr->data;
            Ptr = Ptr->next;
        }
        return array;
    }
}

void Linkedlist::LastNdel()
{
    if (this->First == NULL)
        return;
    if (First == Last)
    {
        delete First;
        First = Last = NULL;
    }
    else
    {
        Linked_Node *prevOfLastLinked_Node = Last->prev;
        Last->prev = NULL;
        prevOfLastLinked_Node->next = NULL;
        delete Last;
        Last = prevOfLastLinked_Node;
    }
    N_Number--;
}
void Linkedlist::MakeListEmpty(const int NumOfLinked_Nodes)
{
    for (int i = 0; i < NumOfLinked_Nodes; i++)
    {
        this->LastNdel();
    }
}

ostream &operator<<(ostream &os, const Linkedlist &liste)
{
    using namespace std;
    Linked_Node *Ptr = liste.First;
    cout << "----------------------------------------------------------------" << endl;
    cout << setw(10) << "Adress:" << setw(10) << "Data:" << setw(15) << "Prev:" << setw(15) << "next:" << endl;
    cout << "----------------------------------------------------------------" << endl;
    for (int i = 0; i < liste.N_numGet(); i++)
    {
        cout << setw(10) << Ptr << setw(10) << Ptr->data << setw(15) << Ptr->prev << setw(15) << Ptr->next << endl;
        cout << "----------------------------------------------------------------" << endl;
        Ptr = Ptr->next;
    }
    return os;
}