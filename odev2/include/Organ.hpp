#ifndef Organ_hpp
#define Organ_hpp
#include "BST.hpp"
class Organ
{
public:
    Organ(/* args */);
    ~Organ();
    bool is_tweny();
    bool ret_mutability();
    void addElement(int data);
    void CheckMutability();
    void DelAllElements();
    void PrintPostOrder();

private:
    BST *OrganTree;
    int NumOFNodes;
    bool mutability;
};

#endif