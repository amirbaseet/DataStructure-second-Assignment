#include <iostream>
#include <Tissue.hpp>
#include <iomanip>
using namespace std;
Tissue::Tissue(/* args */)
{
    First = Last = NULL;
    N_Number = 0;
    Organ = 0;
}

Tissue::~Tissue()
{
    CellNode *Ptr = this->First;
    for (int i = 0; i < this->N_numGet(); i++)
    {
        CellNode *del = Ptr;
        Ptr = Ptr->next;
        delete del;
    }
}
int Tissue::N_numGet() const
{
    return N_Number;
}
CellNode *Tissue::ReturnFirst() const
{
    return this->First;
}
void Tissue::addCellNode(int Data)
{
    // Adding a CellNode to A linked list
    /*
    first of all looking if the List is empty then The first =Last = New CellNode
    if Not will look at the list if it has a one CellNode if true the last CellNode pointer = new CellNode and the prev of the last=first
    if not will  make the Prev of new CellNode = last then make it the last CellNode in the list
    */
    CellNode *New_CellNode = new CellNode(Data);
    if (First == NULL)
    {
        First = Last = New_CellNode;
    }
    else if (First->next == NULL)
    {

        Last = New_CellNode;
        Last->prev = First;
        First->next = Last;
    }
    else
    {
        New_CellNode->prev = Last;
        Last->next = New_CellNode;
        Last = New_CellNode;
    }
    N_Number++;
}
int *Tissue::LinkedToArray()
{
    {
        int NumOfElements = this->N_numGet();
        int *array = new int[NumOfElements];
        CellNode *Ptr = First;
        for (int i = 0; i < NumOfElements; i++)
        {
            array[i] = Ptr->data;
            Ptr = Ptr->next;
        }
        return array;
    }
}
void Tissue::sort()
{
    int *List = this->LinkedToArray();
    const int List_Length = this->N_numGet();
    this->MakeListEmpty(List_Length);
    Radix Do_sort(List, List_Length);
    int *sortedList = Do_sort.sort();
    for (int i = 0; i < List_Length; i++)
    {
        this->addCellNode(sortedList[i]);
    }
    this->Def_Organ();
}
void Tissue::LastNdel()
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
        CellNode *prevOfLastCellNode = Last->prev;
        Last->prev = NULL;
        prevOfLastCellNode->next = NULL;
        delete Last;
        Last = prevOfLastCellNode;
    }
    N_Number--;
}
void Tissue::MakeListEmpty(const int NumOfCellNodes)
{
    for (int i = 0; i < NumOfCellNodes; i++)
    {
        this->LastNdel();
    }
}
void Tissue::Def_Organ()
{
    int MiddleValue = this->N_numGet();
    MiddleValue += 1;
    MiddleValue /= 2;
    CellNode *Ptr = this->First;
    for (int i = 1; i < MiddleValue; i++)
    {
        Ptr = Ptr->next;
    }
    this->Organ = Ptr->data;
}
int Tissue::Ret_Organ() const
{
    return this->Organ;
}
ostream &operator<<(ostream &os, const Tissue &liste)
{
    using namespace std;
    CellNode *Ptr = liste.First;
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