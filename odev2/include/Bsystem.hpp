#ifndef Bsystem_hpp
#define Bsystem_hpp
#include "BsystemNode.hpp"
using namespace std;

class Bsystem
{
public:
    Bsystem();
    ~Bsystem();
    int GetNodeNum() const;
    void AddBst_Node(Organ *tree);
    void LastNdel();
    void emptyList();
    BsystemNode *ReturnFirst() const;

private:
    BsystemNode *First;
    BsystemNode *Last;
    int N_Number;
};
#endif