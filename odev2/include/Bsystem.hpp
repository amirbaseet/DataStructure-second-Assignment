/**
 * @file Bsystem.hpp
 * @description linked List OF ORGANS
 * @course 2 c
 * @assignment 2
 * @date 12/20/2022
 * @author AMRO MOUSA ISMAIL BASEET
 */
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
    void PrintSystem();
    BsystemNode *ReturnFirst() const;

private:
    BsystemNode *First;
    BsystemNode *Last;
    int N_Number;
};

#endif