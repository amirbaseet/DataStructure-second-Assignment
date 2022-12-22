/**
 * @file Queue.cpp
 * @description ITS AN QUEUE DATA STRUCTURE
 * @course 2 c
 * @assignment 2
 * @date 12/20/2022
 * @author AMRO MOUSA ISMAIL BASEET
 */
#include <Queue.hpp>
Queue::Queue(/* args */)
{
    First = Last = NULL;
    N_Number = 0;
}

Queue::~Queue()
{
    while (First != NULL)
    {
        Linked_Node *Ptr = First;
        First = First->next;
        delete Ptr;
    }
}
bool Queue::empty()
{
    if (First == 0)
        return true;
    return false;
}
void Queue::add(int data)
{
    Linked_Node *new_Linked_Node = new Linked_Node(data);
    if (First == NULL)
    {
        First = Last = new_Linked_Node;
    }
    else
    {
        Last->next = new_Linked_Node;
        Last = new_Linked_Node;
    }
    N_Number++;
}
void Queue::dlt()
{
    if (First != NULL)
    {
        Linked_Node *Ptr = First->next;
        delete First;
        First = Ptr;
        if (First == NULL)
            Last = NULL;
        N_Number--;
    }
}
int Queue::get() const
{
    if (First != NULL)
        return First->data;
    return -100000000;
}
int Queue::GetN_Number() const
{
    return N_Number;
}
int Queue::get_Organ() const
{
    int eleman_Number = this->GetN_Number();
    eleman_Number += 1;
    eleman_Number /= 2;
    Linked_Node *Ptr = this->First;
    for (int i = 1; i < eleman_Number; i++)
    {
        Ptr = Ptr->next;
    }
    return Ptr->data;
}
ostream &operator<<(ostream &os, Queue &queue)
{
    if (queue.First == NULL)
        os << "----KUYRUK BOS----";
    Linked_Node *Ptr = queue.First;
    while (Ptr != 0)
    {
        os << setw(5) << Ptr->data;
        Ptr = Ptr->next;
    }

    os << endl;
    return os;
}