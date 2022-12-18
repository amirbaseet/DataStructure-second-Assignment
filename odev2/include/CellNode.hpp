#ifndef CellNode_hpp
#define CellNode_hpp

class CellNode
{
public:
    CellNode(int data);
    int data;
    CellNode *next;
    CellNode *prev;
};
#endif