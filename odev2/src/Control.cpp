/**
 * @file Control.cpp
 * @description this calss job to control the Mutability
 * @course 2 c
 * @assignment 2
 * @date 12/20/2022
 * @author AMRO MOUSA ISMAIL BASEET
 */
#include <Control.hpp>

Control::Control(Organisim *Systms)
{
    this->Systms = Systms;
}

Control::~Control()
{
}

void Control::CheckSystemsMutability()
{
    this->Systms->CheckMutabilityAll();
}
