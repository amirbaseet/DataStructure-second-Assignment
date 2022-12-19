#include "TestProgram.hpp "
void TestProgram::PrintingOrganisim()
{
    system("cls");
    Organsim->PrintOrganisim();
    if (cin.get() == '\n')
    {
        system("cls");
        Organsim->MutauteALL();
        Organsim->PrintMutatedOrganisim();
    }
}
void TestProgram::AddingTorgansAndOrganisim()
{
    int Organ_counter = 0;

    for (int i = 0; i < this->CountOfLines;)
    {
        while (organs[Organ_counter].is_tweny() == false)
        {
            organs[Organ_counter].addElement(tissues[i].Ret_Organ());
            i++;
        }
        organs[Organ_counter].CheckMutability();
        Organsim->AddSystme(&organs[Organ_counter]);

        Organ_counter++;
    }
}
TestProgram::TestProgram(string fileName)
{
    this->fileName = fileName;
    this->CountOfLines = lineCount();
    tissues = new Tissue[CountOfLines];
    NumOfOrgans = CountOfLines / 20;
    NumOfSystems = NumOfOrgans / 100;
    organs = new Organ[NumOfOrgans];
    Organsim = new Organisim(NumOfSystems);
}

TestProgram::~TestProgram()
{
    delete[] tissues;
    delete[] organs;
    delete Organsim;
}
int TestProgram::lineCount()
{
    ifstream myfile(this->fileName);
    // read line
    int line_counter = 0;
    string satir;

    /* code */
    if (!myfile)
        cout << "ERR\n";
    // Finding the number of the raow
    while (getline(myfile, satir))
    {
        line_counter++;
    }
    myfile.close();

    return line_counter;
}

void TestProgram::readingToTissueAndSort()
{
    ifstream myfile(this->fileName);
    string str;
    // finding the number of

    string space = " ";
    int tissue_counter = 0; //
    while (getline(myfile, space))
    {
        istringstream ss(space);
        while (getline(ss, str, ' '))
        {
            tissues[tissue_counter].add_cell(stoi(str));
        }
        tissues[tissue_counter].sort();
        tissue_counter++;
    }
    myfile.close();
}
void TestProgram::DoEvrything()
{
    readingToTissueAndSort();
    AddingTorgansAndOrganisim();
    PrintingOrganisim();
}