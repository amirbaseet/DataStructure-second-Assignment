/**
 * @file main.cpp
 * @description  program startup
 * @course 2 c
 * @assignment 2
 * @date 12/20/2022
 * @author AMRO MOUSA ISMAIL BASEET
 */
#include "TestProgram.hpp"
using namespace std;
int main()
{
    TestProgram start("Data.txt");
    start.DoEvrything();

    TestProgram start2("Fish.txt");
    start2.DoEvrything();
}
