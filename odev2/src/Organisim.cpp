/**
 * @file Organisim.hpp
 * @description ITS AN LINKED LIST OF AN ORGAN
 * @course 2 c
 * @assignment 2
 * @date 12/20/2022
 * @author AMRO MOUSA ISMAIL BASEET
 */
#include <Organisim.hpp>
Organisim::Organisim(int ElemenNum)
{
    this->ElemenNum = ElemenNum;
    this->OrganisimArray = new Bsystem[ElemenNum];
    this->ExistElemenNum = 0;
}

Organisim::~Organisim()
{
    delete[] OrganisimArray;
    OrganisimArray = NULL;
}
int Organisim::retElemenNum() const
{
    return this->ElemenNum;
}
void Organisim::PrintOrganisim()
{
    cout << setw(35) << "ORGANISM" << endl;
    for (int i = 0; i < this->ExistElemenNum; i++)
    {
        OrganisimArray[i].PrintSystem();
    }
}
void Organisim::PrintMutatedOrganisim()
{
    cout << setw(42) << "ORGANISM(MUTATED)" << endl;
    for (int i = 0; i < this->ExistElemenNum; i++)
    {
        OrganisimArray[i].PrintSystem();
    }
}
void Organisim::AddSystme(Organ *Ptr)
{
    OrganisimArray[ExistElemenNum].AddBst_Node(Ptr);
    if (OrganisimArray[ExistElemenNum].GetNodeNum() == 100)
    {
        this->ExistElemenNum++;
    }
}
bool Organisim::Full()
{
    if (this->ElemenNum == this->ExistElemenNum)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int Organisim::retExstElemenNum() const
{
    return this->ExistElemenNum;
}
void Organisim::MutauteALL()
{
    for (int i = 0; i < retExstElemenNum(); i++)
    {
        BsystemNode *Ptr = OrganisimArray[i].ReturnFirst();
        while (Ptr)
        {
            Ptr->tree->Mututeit();
            Ptr = Ptr->next;
        }
    }
}
void Organisim::CheckMutabilityAll()
{

    for (int i = 0; i < retExstElemenNum(); i++)
    {
        BsystemNode *Ptr = OrganisimArray[i].ReturnFirst();
        OrganisimArray[i];
        while (Ptr)
        {
            Ptr->tree->CheckMutability();
            Ptr = Ptr->next;
        }
    }
}
