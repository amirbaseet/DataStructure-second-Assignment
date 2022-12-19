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
}
int Organisim::retElemenNum() const
{
    return this->ElemenNum;
}
void Organisim::PrintOrganisim()
{
    cout << setw(30) << "ORGANISM" << endl;
    for (int i = 0; i < this->ExistElemenNum; i++)
    {
        OrganisimArray[i].PrintSystem();
    }
}
void Organisim::PrintMutatedOrganisim()
{
    cout << setw(38) << "MUTATED ORGANISM" << endl;
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
        while (Ptr->next != NULL)
        {
            Ptr->tree->Mututeit();
            Ptr = Ptr->next;
        }
    }
}