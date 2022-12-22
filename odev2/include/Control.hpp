/**
 * @file Control.hpp
 * @description this calss job to control the Mutability
 * @course 2 c
 * @assignment 2
 * @date 12/20/2022
 * @author AMRO MOUSA ISMAIL BASEET
 */
#ifndef Control_hpp
#define Control_hpp

#include "Organisim.hpp"

class Control
{
public:
    Control(Organisim *Systms);
    void CheckSystemsMutability();
    ~Control();

private:
    Organisim *Systms;
    int Length;
};

#endif