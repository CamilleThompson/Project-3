#include <iostream>
#include <string>
#include "Player.h"
//#include "Resource.h"
#include "Game.h"
//#include "Page.h"
//#include "Map.h"
using namespace std;

Game::Game()
{
    fuel_=50000;
    int newPlanet=0;
}

void Game::enterWormhole(Player Username)
{
    string input_;
   int fuelNeeded=(fuel_*fuel_/1000000)+fuel_;
    Map temp;
    Planets_.push_back(temp);
    newPlanet++;
    fuel_=fuelNeeded;
    if(fuelNeeded>Username.GetFuel())
    {
        int n=0;
        while(n==0)
    {
        cout << "You do not have enough fuel, you need " <<fuelNeeded-Username.GetFuel() <<" more gallons."<<endl;
        cout << "Would you like to make the purchase?(y/n)" <<endl;
        cin.ignore();
        getline(cin,input_);
        if(input_=="y")
        {
            cout << "You are entering the wormhole in 3...2...1..." <<endl;
            Username.SetFuel(-fuelNeeded);
            Username.SetMoney((fuelNeeded/10000)*-1000);
            n=1;
        }
        else if(input_=="n")
        {
            cout << "You are not moving to the next planet as you have declined the payment. Redirecting you to the current planet…" <<endl;
            n=1;
        }
        else
        {
            cout << "Invalid Input"<<endl;
        }
    }

    }
    else
    {
        cout << fuelNeeded;
        Username.SetFuel(-fuelNeeded);
        cout << "You are entering the wormhole in 3...2...1..." <<endl;
        cout << Username.GetFuel() <<endl;
    }
}

// void Game::viewLogBook(string userName)
// {
//     Map tempMap=Planets_[newPlanet-1];
//     Page tempPage;
//     tempPage.addPlanet(tempMap);
//     pages++;
//     LogBook.push_back(tempPage);
//     tempPage.displayPage(pages, userName,tempMap);  
// }

