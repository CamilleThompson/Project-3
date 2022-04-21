#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <string>
#include "Player.h"
#include "Player.cpp"
#include "Map.h"
#include "Page.h"
#include "Page.h"
using namespace std;

class Game
{
    public:
    Game();
    void makeAMove();
    void enterWormhole(Player Username);
    void ViewStatus(Player Username);
    //void reportAPlanet();
    void endGame();
    void addNewPlanet();
    int getPlanet();
    int getScore();
    void setScore();
    



    private:
    int newPlanet;
    int score;
    int pages;
    vector<Map> Planets_;
    int fuelNeeded;
    int fuel_;
    vector<Page> LogBook;

    

    
};
#endif