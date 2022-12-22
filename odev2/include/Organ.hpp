/**
 * @file Organ.hpp
 * @description
 *          CLASS ORGAN
            IS A COMPINATION FROM TWO DATA STRUCT
            BST , LINKED LIST
            AND HAVING EXTRA FEATURES
            LIKE
            CheckMutability() CHECKING IF THE TREE IS ABLE TO MUTATE OR NOT BY LOOKING TO THE ROOT%50==0
            CONVVERTING FROM BST TO ARRAY USING LINKED LIST
 * @course 2 c
 * @assignment 2
 * @date 12/20/2022
 * @author AMRO MOUSA ISMAIL BASEET
 */
#ifndef Organ_hpp
#define Organ_hpp
#include "BST.hpp"
#include "Linkedlist.hpp"

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
    BST_Node *retFirst() const;
    void Mututeit();
    int *BstTOArray();
    void BstTOLinked();
    void PrintLinked();
    void ArrayToBST(int *array, int ArrayLength);
    bool checkbalanced();
    void PrintNumber();

private:
    Linkedlist LinkedList;
    BST *OrganTree;
    int NumOFNodes;
    int *BstTOArrayPrivate();
    void BstTOLinkedListPrivate(BST_Node *ptr);
    void MututeitPrivate(BST_Node *ptr);
    bool mutability;
};

#endif