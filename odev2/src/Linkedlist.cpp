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
}
int Linkedlist::N_numGet() const
{
    return N_Number;
}
Node *Linkedlist::ReturnFirst() const
{
    return this->First;
}
void Linkedlist::addNode(int Data)
{
    // Adding a Node to A linked list
    /*
    first of all looking if the List is empty then The first =Last = New Node
    if Not will look at the list if it has a one Node if true the last Node pointer = new node and the prev of the last=first
    if not will  make the Prev of new node = last then make it the last node in the list
    */
    Node *New_node = new Node(Data);
    if (First == NULL)
    {
        First = Last = New_node;
    }
    else if (First->next == NULL)
    {

        Last = New_node;
        Last->prev = First;
        First->next = Last;
    }
    else
    {
        New_node->prev = Last;
        Last->next = New_node;
        Last = New_node;
    }
    N_Number++;
}
int *Linkedlist::LinkedToArray()
{
    {
        int NumOfElements = this->N_numGet();
        int *array = new int[NumOfElements];
        Node *Ptr = First;
        for (int i = 0; i < NumOfElements; i++)
        {
            array[i] = Ptr->data;
            Ptr = Ptr->next;
        }
        return array;
    }
}
ostream &operator<<(ostream &os, const Linkedlist &liste)
{
    using namespace std;
    Node *Ptr = liste.First;
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