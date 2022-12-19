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

private:
    int ExistElemenNum;
    int ElemenNum;
    Bsystem *OrganisimArray;
};

#endif