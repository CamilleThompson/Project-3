#ifndef PAGE_H
#define PAGE_H
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <fstream>
#include "Map.h"
#include "Player.h"
using namespace std;

class Page
{
    public:
    Page();
    void addPlanet(Map planet_);
    // void setCapacity(int campacity_);
    // int getCapacity();
    // void setSize(int size_);
    // int getSize();
    // void setName(string name);
    void addHabitableTraits(string trait);
    void getHabitableTraits();
    void addInhabitableTraits(string traits);
    void getInhabitableTraits();
    void displayPage(int pageNumber,string username,Map temp);



    private:
    vector<Map> planets;
    int size;
    int capcity;
    string name;
    vector<string> habitableTraits;
    vector<string> inhabitableTraits;
    int alienAssessment; //is zero none, one if habitable, 2 inhabitable

};
#endif