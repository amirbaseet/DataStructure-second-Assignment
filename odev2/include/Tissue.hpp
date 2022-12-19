#ifndef Tissue_hpp
#define Tissue_hpp
#include "Linkedlist.hpp"
#include <iostream>
using namespace std;
class Tissue
{
public:
    Tissue(/* args */);
    ~Tissue();
    void Def_Organ();
    void sort();
    void add_cell(int data);
    void Del_List();
    int DNA_Length() const;
    int Ret_Organ() const;
    Linked_Node *ret_First_Cell() const;
    friend ostream &operator<<(ostream &os, const Tissue &tissueList);

private:
    int Organ;
    Linkedlist *tissueList;
};

#endif
