#include "Tissue.hpp"
Tissue::Tissue(/* args */)
{
    Organ = 0;
    tissueList = new Linkedlist;
}
Tissue::~Tissue()
{
    // deleting the tissueList from the heap
    this->Del_List();
}
Linked_Node *Tissue::ret_First_Cell() const
{
    // returning the first elemnet in the list
    return tissueList->ReturnFirst();
}
int Tissue::DNA_Length() const
{
    // returning the length of the list
    tissueList->N_numGet();
}
void Tissue::add_cell(int data)
{
    // adding  an element to the list
    this->tissueList->addLinked_Node(data);
}
void Tissue::Def_Organ()
{
    // getting the middle value of the list after sorting it using Radix Sort
    int MiddleValue = this->DNA_Length();
    MiddleValue += 1;
    MiddleValue /= 2;
    Linked_Node *Ptr = this->ret_First_Cell();
    for (int i = 1; i < MiddleValue; i++)
    {
        Ptr = Ptr->next;
    }
    this->Organ = Ptr->data;
}
int Tissue::Ret_Organ() const
{
    // returning the middle value o  the lists
    return this->Organ;
}

void Tissue::sort()
{
    // sorting the list using Radix Sort
    int *List = tissueList->LinkedToArray();
    const int List_Length = tissueList->N_numGet();
    tissueList->MakeListEmpty(List_Length);
    Radix Do_sort(List, List_Length);
    int *sortedList = Do_sort.sort();
    for (int i = 0; i < List_Length; i++)
    {
        tissueList->addLinked_Node(sortedList[i]);
    }
    this->Def_Organ();
}

ostream &operator<<(ostream &os, const Tissue &tissueList)
{
    Linked_Node *Ptr = tissueList.ret_First_Cell();
    cout << "----------------------------------------------------------------------" << endl;
    cout << setw(10) << "Adress:" << setw(10) << "DNA" << setw(15) << "Prev:" << setw(15) << "next:" << setw(15) << "Organ" << setw(15) << "index" << endl;
    cout << "----------------------------------------------------------------------" << endl;
    for (int i = 0; i < tissueList.DNA_Length(); i++)
    {
        cout << setw(10) << Ptr << setw(10) << Ptr->data << setw(15) << Ptr->prev << setw(13) << Ptr->next << setw(15) << tissueList.Ret_Organ() << setw(15) << i << endl;
        cout << "----------------------------------------------------------------------" << endl;
        Ptr = Ptr->next;
    }
    return os;
}
void Tissue::Del_List()
{
    delete this->tissueList;
}