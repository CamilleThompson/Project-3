#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "Map.h"
#include "Player.h"
#include "Resource.h"
#include "Battle.h"
using namespace std;

class Game
{
    public:
    //Game();
    void makeAMove(int x);
    //void ViewStatus();
    //void viewLogBook();

    private:
    Map m1;
    Player p1;
    Resource r1;
    Battle b1;
    
};
#endif