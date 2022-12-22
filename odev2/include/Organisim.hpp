/**
 * @file Organisim.hpp
 * @description ITS AN LINKED LIST OF AN ORGAN
 * @course 2 c
 * @assignment 2
 * @date 12/20/2022
 * @author AMRO MOUSA ISMAIL BASEET
 */
#ifndef Organisim_hpp
#define Organisim_hpp
#include "Bsystem.hpp"
#include <iomanip>
class Organisim
{
public:
    Organisim(int ElemenNum);
    ~Organisim();
    void PrintOrganisim();
    void PrintMutatedOrganisim();
    int retElemenNum() const;
    int retExstElemenNum() const;
    void AddSystme(Organ *Ptr);
    void MutauteALL();
    bool Full();
    void CheckMutabilityAll();

private:
    int ExistElemenNum;
    int ElemenNum;
    Bsystem *OrganisimArray;
};

#endif