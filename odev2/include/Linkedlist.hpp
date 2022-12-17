#ifndef Linkedlist_hpp
#define Linkedlist_hpp
#include <LNode.hpp>

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

    friend ostream &operator<<(ostream &os, const Linkedlist &liste);

private:
    Node *First;
    Node *Last;
    int N_Number;
};

#endif