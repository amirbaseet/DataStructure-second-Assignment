#ifndef Linkedlist_hpp
#define Linkedlist_hpp
#include <Linked_Node.hpp>
#include <Radix.hpp>

using namespace std;
class Linkedlist
{
public:
    Linkedlist();
    ~Linkedlist();
    int N_numGet() const;
    void addLinked_Node(int data);
    Linked_Node *ReturnFirst() const;
    int *LinkedToArray();
    void LastNdel();
    void MakeListEmpty(const int NumOfLinked_Nodes);

    friend ostream &operator<<(ostream &os, const Linkedlist &liste);

private:
    Linked_Node *First;
    Linked_Node *Last;
    int N_Number;
};

#endif