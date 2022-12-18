#ifndef Tissue_hpp
#define Tissue_hpp
#include <CellNode.hpp>
#include <Radix.hpp>

using namespace std;
class Tissue
{
public:
    Tissue();
    ~Tissue();
    int N_numGet() const;
    void addCellNode(int data);
    CellNode *ReturnFirst() const;
    int *LinkedToArray();
    void LastNdel();
    void MakeListEmpty(const int NumOfCellNodes);
    void sort();
    void Def_Organ();

    int Ret_Organ() const;
    friend ostream &operator<<(ostream &os, const Tissue &liste);

private:
    CellNode *First;
    CellNode *Last;
    int N_Number;
    int Organ; // the middle of The List
};

#endif