#include <iostream>
#include <string>
#include <fstream>
#include "Player.h"
#ifndef RESOURCE_H
#define RESOURCE_H
using namespace std;

class Resource
{
    public:
    Resource();
    int BuyWeapon(Player Username_);
    int Translator(Player Username_);
    int BuySpaceSuit(Player Username_);
    int BuyMedicalKit(Player Username_);
    int BuyFuel(Player Username_);

    private:
    Player username_;
    int money_R;
    int fuel_R;
    int health_R;
};
#endif