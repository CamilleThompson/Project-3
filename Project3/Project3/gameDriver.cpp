#include <iostream>
#include "Game.h"
#include "Game.cpp"
#include "Map.h"
#include "Map.cpp"

using namespace std;
int main()
{
    Game tempGame;
    Player tempPlayer=Player();
    tempGame.enterWormhole(tempPlayer);
    //tempGame.viewLogBook("Camille");
    return 0;

}