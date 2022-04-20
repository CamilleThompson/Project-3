#include <iostream>
#include <string>
#include "Player.h"
#include "Player.cpp"
#include "Resource.cpp"
#include "Resource.h"
using namespace std;

class Game
{
    public:
    Game();
    void makeAMove(char move);
    void ViewStatus();
    void viewLogBook();
    void reportAPlanet();



    private:
    int choice;
    
};