/**
 * @file BST.cpp
 * @description BST
 * @course 2 c
 * @assignment 2
 * @date 12/20/2022
 * @author AMRO MOUSA ISMAIL BASEET
 */
#ifndef BST_hpp
#define BST_hpp
#include <BST_Node.hpp>
#include <cmath>

class BST
{
public:
    BST();
    ~BST();
    BST_Node *CreatLeaf(int key);
    void AddLeaf(int key);
    void PrintInOrder();
    void PrintPostOrder();
    int ReturnRootKey();
    int ReturnNumOfNodes() const;
    int height();
    bool empty();
    // bool is_twenyOrgan();
    void del_AllNodes();

    bool Balance();
    BST_Node *retFirst() const;

private:
    BST_Node *root;

    void del_AllNodes_private(BST_Node *&root);
    void AddLeafPrivate(int key, BST_Node *ptr);
    void PrintInOrderPrivate(BST_Node *ptr);
    void PrintPostOrderPrivate(BST_Node *ptr);
    int heightPrivate(BST_Node *Ptr);
    int NumOfNodes;
};

#endif