#ifndef TestProgram_hpp
#define TestProgram_hpp

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <iomanip>
#include "Linkedlist.hpp"
#include "Queue.hpp"
#include "Radix.hpp"
#include "BST.hpp"
#include "Tissue.hpp"
#include "Organ.hpp"
#include "Bsystem.hpp"
#include "Organisim.hpp"

using namespace std;
class TestProgram
{
public:
    TestProgram(string filename);
    ~TestProgram();
    void readingToTissueAndSort();
    void AddingTorgansAndOrganisim();
    void PrintingOrganisim();
    void DoEvrything();

private:
    string fileName;
    int CountOfLines;
    Tissue *tissues;
    Organ *organs;
    Organisim *Organsim;
    void readLine();
    int lineCount();
    int NumOfOrgans;
    int NumOfSystems;
};

#endif