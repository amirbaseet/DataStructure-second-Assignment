/**
 * @file TestProgram.cpp
 * @description ITS A CLASS THAT HAVING A FUNCTIONS THAT MAKING IT EASELY TO READ THE CODE
 * @course 2 c
 * @assignment 2
 * @date 12/20/2022
 * @author AMRO MOUSA ISMAIL BASEET
 */
#include "TestProgram.hpp"
TestProgram::TestProgram(string fileName)
{
    /*
    giving Values to file name
    and calling the function lineCount(); to get the count of the lines in the .txt file
    So in the PDF have been said that
    1. every Line is a Tissue So the Number of tissue is equal to Line Count
    2. Organ element is the middle Value in the line After Sorting It
    3. Every 20 Organ Element is forming an Organ So Every 20 Tissues Middle Value is an One Organ
    4. So to get the Num Of Organs in the File We will Divide the Number Of Tissues by the 20
    5.Each System Will Contains a 100 Organ SO The Number Of Systems will be equal to (Organs Number) /100
    */
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
    delete control;
    delete Organsim;
    tissues = NULL;
    organs = NULL;
    control = NULL;
    Organsim = NULL;
}

void TestProgram::AddingTorgansAndOrganisim()
{
    /*
        Adding the 20 Organ Elements to Each Organ Tree
        After The Organ is Having a 20 element will be full
        then we will move to the next Organ tree  But Before moving we will Adding it The Organisim

    */
    int Organ_counter = 0;
    for (int i = 0; i < this->CountOfLines;)
    {
        while (organs[Organ_counter].is_tweny() == false)
        {
            organs[Organ_counter].addElement(tissues[i].Ret_Organ());
            i++;
        }
        Organsim->AddSystme(&organs[Organ_counter]);

        Organ_counter++;
    }
}

int TestProgram::lineCount()
{
    // find the line count in the .txt
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
    /*
        Opening The file Again And reading from it  and adding the cells to the tissues
    */
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
        // After sorting the tissue and taking the organ element i will delete all the elemnts in the linked list (heap)
        tissues[tissue_counter].Del_List();
        tissue_counter++;
    }
    myfile.close();
}
void TestProgram::PrintingOrganisim()
{

    system("cls");
    Organsim->PrintOrganisim();
    if (cin.get() == '\n')
    {
        system("cls");
        this->CheckMutability();
        // After checking the mutability we no more need the control class
        delete control;
        control = NULL;
        Organsim->MutauteALL();

        Organsim->PrintMutatedOrganisim();
    }
}
void TestProgram::DoEvrything()
{
    readingToTissueAndSort();
    AddingTorgansAndOrganisim();
    // after adding all the tissues elements we wil not need the tissues any more so i will delete it all
    delete[] tissues;
    tissues = NULL;
    Declarecontrol();
    PrintingOrganisim();
}
void TestProgram::CheckMutability()
{
    control->CheckSystemsMutability();
}
void TestProgram::Declarecontrol()
{
    control = new Control(Organsim);
}