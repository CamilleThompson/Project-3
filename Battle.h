#ifndef BATTLE_H
#define BATTLE_H
#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "Map.h"
#include "Player.h"
#include "Resource.h"
using namespace std; 

class Battle
{
    public:
        void eventMisfortune();
        void readAlienNames(string filename);
        void battleMisfortune();
        void friendlyAlien();
        int reportHabitable();
        void readAlienConvos(string filename);
    private:
        Player p1;
        Map m1;
        Resource r1;
        int numPeopleLeft=8000;
        int numPplSaved;
        string alienNames[20];
        string alienConvos[10];
        string arr[10];
};
#endif
