#ifndef BST_hpp
#define BST_hpp
#include <BST_Node.hpp>
#include "Linkedlist.hpp"

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
    int ReturnNumOfNodes();
    bool empty();
    bool is_twenyOrgan();
    bool mutability();
    void del_AllNodes();
    int *BstTOArray();
    void BstTOLinked();
    void PrintLinked();

private:
    BST_Node *root;
    int *BstTOArrayPrivate();
    void BstTOLinkedListPrivate(BST_Node *ptr);
    void del_AllNodes_private(BST_Node *&root);
    void AddLeafPrivate(int key, BST_Node *ptr);
    void PrintInOrderPrivate(BST_Node *ptr);
    void PrintPostOrderPrivate(BST_Node *ptr);
    Linkedlist LinkedList;
    int NumOfNodes;
};

#endif