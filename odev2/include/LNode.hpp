#ifndef LNode_hpp
#define LNode_hpp

class Node
{
public:
    Node(int data);
    int data;
    Node *next;
    Node *prev;
};
#endif