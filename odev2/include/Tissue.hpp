/**
 * @file Tissue.hpp
 * @description ITS A TISSUE THAT Consisting of LINKED LIST
 * @course 2 c
 * @assignment 2
 * @date 12/20/2022
 * @author AMRO MOUSA ISMAIL BASEET
 */
#ifndef Tissue_hpp
#define Tissue_hpp
#include "Linkedlist.hpp"
#include <Radix.hpp>
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
    int tissue_Length() const;
    int Ret_Organ() const;
    Linked_Node *ret_First_Cell() const;
    friend ostream &operator<<(ostream &os, const Tissue &tissueList);

private:
    int OrganElement;
    Linkedlist *tissueList;
};

#endif
