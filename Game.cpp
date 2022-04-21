#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Map.h"
#include "Player.h"
#include "Resource.h"
#include "Game.h"
#include "Battle.h"
using namespace std;

void Game::makeAMove(int x)
{
    Map m1;
    if(x==1)
    {
        cout<<"site trait"<<endl;
        //needs site trait function
    }
    else if(x==2)
    {
        int r= m1.getPlayerRowPosition();
        int c= m1.getPlayerColPosition();
        int y= m1.getMisfortuneType(r,c);
        if(y==1)
        {
            b1.eventMisfortune();
        }
        else if(y==2)
        {
            b1.battleMisfortune();
        }
    }
    else if(x==3)
    {
        b1.friendlyAlien();
    }
    else if(x==5)
    {
        cout<<"go back to main menu"<<endl;
    }

}


        