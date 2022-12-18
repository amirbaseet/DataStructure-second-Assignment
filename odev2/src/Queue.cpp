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
        CellNode *Ptr = First;
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
    CellNode *new_CellNode = new CellNode(data);
    if (First == NULL)
    {
        First = Last = new_CellNode;
    }
    else
    {
        Last->next = new_CellNode;
        Last = new_CellNode;
    }
    N_Number++;
}
void Queue::dlt()
{
    if (First != NULL)
    {
        CellNode *Ptr = First->next;
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
    CellNode *Ptr = this->First;
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
    CellNode *Ptr = queue.First;
    while (Ptr != 0)
    {
        os << setw(5) << Ptr->data;
        Ptr = Ptr->next;
    }

    os << endl;
    return os;
}