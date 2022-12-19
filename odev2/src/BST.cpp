#include "BST.hpp"
#include <iostream>
#include <cstdlib>
using namespace std;
BST::BST()
{
    root = NULL;
    NumOfNodes = 0;
}
BST::~BST()
{
    del_AllNodes_private(this->root);
}
void BST::AddLeaf(int key)
{
    AddLeafPrivate(key, root);
}
void BST::AddLeafPrivate(int key, BST_Node *Ptr)
{
    // if the key already exist will be added to the left
    BST_Node *New_BST_Node = new BST_Node(key);
    if (root == NULL)
    {
        root = New_BST_Node;
        this->NumOfNodes++;
    }
    else if (key < Ptr->key || key == Ptr->key)
    {
        if (Ptr->left != NULL)
        {
            AddLeafPrivate(key, Ptr->left);
        }
        else
        {
            Ptr->left = New_BST_Node;
            this->NumOfNodes++;
        }
    }
    else if (key > Ptr->key)
    {
        if (Ptr->right != NULL)
        {
            AddLeafPrivate(key, Ptr->right);
        }
        else
        {
            Ptr->right = New_BST_Node;
            this->NumOfNodes++;
        }
    }
}

void BST::PrintInOrder()
{
    PrintInOrderPrivate(this->root);
}
void BST::PrintInOrderPrivate(BST_Node *Ptr)
{
    if (root != NULL)
    {
        if (Ptr->left != NULL)
        {
            this->PrintInOrderPrivate(Ptr->left);
        }
        cout << Ptr->key << " ";
        if (Ptr->right != NULL)
        {
            this->PrintInOrderPrivate(Ptr->right);
        }
    }
    else
        cout << "THE TREE IS EMPTY\n";
}
void BST::PrintPostOrder()
{
    if (this->root == NULL)
    {
        cout << "THE TREE IS EMPTY\n";
        return;
    }
    PrintPostOrderPrivate(this->root);
}
void BST::PrintPostOrderPrivate(BST_Node *Ptr)
{
    if (Ptr != NULL)
    {
        PrintPostOrderPrivate(Ptr->left);
        PrintPostOrderPrivate(Ptr->right);
        cout << Ptr->key << " ";
    }
}
bool BST::empty()
{
    if (this->root == NULL)
        return true;
    return false;
}
bool BST::is_twenyOrgan()
{
    if (this->NumOfNodes == 20)
        return true;
    return false;
}
bool BST::mutability()
{
    if (this->root->key % 50 == 0)
        return true;
    return false;
}
int BST::ReturnRootKey()
{
    if (root != NULL)
        return root->key;
    else
    {
        return -100000;
    }
}
void BST::del_AllNodes()
{
    del_AllNodes_private(this->root);
}
void BST::del_AllNodes_private(BST_Node *&Ptr)
{
    if (Ptr == NULL)
        return;
    del_AllNodes_private(Ptr->left);
    del_AllNodes_private(Ptr->right);
    if (Ptr->right == NULL && Ptr->left == NULL)
    {
        delete Ptr;
        Ptr = NULL;
        this->NumOfNodes--;
    }
}
int BST::ReturnNumOfNodes()
{
    return this->NumOfNodes;
}
int *BST::BstTOArray()
{
    BstTOArrayPrivate();
}
void BST::BstTOLinked()
{
    this->BstTOLinkedListPrivate(this->root);
}
void BST::BstTOLinkedListPrivate(BST_Node *Ptr)
{
    if (Ptr != NULL)
    {
        BstTOLinkedListPrivate(Ptr->left);
        BstTOLinkedListPrivate(Ptr->right);
        LinkedList.addLinked_Node(Ptr->key);
    }
}
int *BST::BstTOArrayPrivate()
{
    BstTOLinked();
    int *Array = LinkedList.LinkedToArray();
    LinkedList.MakeListEmpty(LinkedList.N_numGet());
    return Array;
}
void BST::PrintLinked()
{
    cout << LinkedList;
}
int BST::height()
{
    return heightPrivate(this->root);
}
int BST::heightPrivate(BST_Node *Ptr)
{
    if (Ptr != NULL)
    {
        return 1 + max(heightPrivate(Ptr->left),
                       heightPrivate(Ptr->right));
    }
    return -1;
}
bool BST::Balance()
{
    const int height = this->height();
    if (height == -1 || height == 0 || height == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}