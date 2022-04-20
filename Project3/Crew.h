#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include "Player.h"
//#ifndef PLAYER_H
//#define PLAYER_H
using namespace std;

class Crew
{
    public:
    Crew();
    vector<int> getCrew();
    void setCrew(int whichCrew);
    void useCrew(int whichCrew,Player name);
    void displayCrew(char whichCrew_);
    
    private:
    vector<int> crewMates;
    int number;
   
};
//#endif
