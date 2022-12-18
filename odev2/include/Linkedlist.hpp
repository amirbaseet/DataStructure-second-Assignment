#ifndef Linkedlist_hpp
#define Linkedlist_hpp
#include <LNode.hpp>
#include <Radix.hpp>

using namespace std;
class Linkedlist
{
public:
    Linkedlist();
    ~Linkedlist();
    int N_numGet() const;
    void addNode(int data);
    Node *ReturnFirst() const;
    int *LinkedToArray();
    void LastNdel();
    void MakeListEmpty(const int NumOfNodes);
    void sort();
    void Def_Organ();

    int Ret_Organ() const;
    friend ostream &operator<<(ostream &os, const Linkedlist &liste);

private:
    Node *First;
    Node *Last;
    int N_Number;
    int Organ; // the middle of The List
};

#endif