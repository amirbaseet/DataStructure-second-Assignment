#include <iostream>
#include <Linkedlist.hpp>
#include <iomanip>
using namespace std;
Linkedlist::Linkedlist(/* args */)
{
    First = Last = NULL;
    N_Number = 0;
    Organ = 0;
}

Linkedlist::~Linkedlist()
{
    Node *Ptr = this->First;
    for (int i = 0; i < this->N_numGet(); i++)
    {
        Node *del = Ptr;
        Ptr = Ptr->next;
        delete del;
    }
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
void Linkedlist::sort()
{
    int *List = this->LinkedToArray();
    const int List_Length = this->N_numGet();
    this->MakeListEmpty(List_Length);
    Radix Do_sort(List, List_Length);
    int *sortedList = Do_sort.sort();
    for (int i = 0; i < List_Length; i++)
    {
        this->addNode(sortedList[i]);
    }
    this->Def_Organ();
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
        Node *prevOfLastNode = Last->prev;
        Last->prev = NULL;
        prevOfLastNode->next = NULL;
        delete Last;
        Last = prevOfLastNode;
    }
    N_Number--;
}
void Linkedlist::MakeListEmpty(const int NumOfNodes)
{
    for (int i = 0; i < NumOfNodes; i++)
    {
        this->LastNdel();
    }
}
void Linkedlist::Def_Organ()
{
    int MiddleValue = this->N_numGet();
    MiddleValue += 1;
    MiddleValue /= 2;
    Node *Ptr = this->First;
    for (int i = 1; i < MiddleValue; i++)
    {
        Ptr = Ptr->next;
    }
    this->Organ = Ptr->data;
}
int Linkedlist::Ret_Organ() const
{
    return this->Organ;
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