#ifndef BST_hpp
#define BST_hpp
#include <TNode.hpp>
#include "Tissue.hpp"

class BST
{
public:
    BST();
    ~BST();
    TNode *CreatLeaf(int key);
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
    TNode *root;
    int *BstTOArrayPrivate();
    void BstTOLinkedListPrivate(TNode *ptr);
    void del_AllNodes_private(TNode *&root);
    void AddLeafPrivate(int key, TNode *ptr);
    void PrintInOrderPrivate(TNode *ptr);
    void PrintPostOrderPrivate(TNode *ptr);
    Tissue LinkedList;
    int NumOfNodes;
};

#endif