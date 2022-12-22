/**
 * @file TestProgram.hpp
 * @description ITS A CLASS THAT HAVING A FUNCTIONS THAT MAKING IT EASELY TO READ THE CODE
 * @course 2 c
 * @assignment 2
 * @date 12/20/2022
 * @author AMRO MOUSA ISMAIL BASEET
 */
#ifndef TestProgram_hpp
#define TestProgram_hpp

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <iomanip>

#include "Tissue.hpp"
#include "Organ.hpp"
#include "Organisim.hpp"
#include "Control.hpp"
using namespace std;

class TestProgram
{
public:
    TestProgram(string filename);
    ~TestProgram();
    void DoEvrything();

private:
    string fileName;
    int CountOfLines;
    Tissue *tissues;
    Organ *organs;
    Organisim *Organsim;
    Control *control;
    void readLine();
    int lineCount();
    void readingToTissueAndSort();
    void AddingTorgansAndOrganisim();
    void PrintingOrganisim();
    void CheckMutability();
    void Declarecontrol();
    void BeforeMutuate();
    void MutuateItPrint();

    int NumOfOrgans;
    int NumOfSystems;
};

#endif