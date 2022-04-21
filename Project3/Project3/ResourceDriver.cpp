#include <iostream>
#include "Resource.h"
#include "Player.h"
#include "Resource.cpp"
#include "Player.cpp"

using namespace std;

int main()
{
    Resource temp;
    Player p1=Player();
    //temp.BuyWeapon(p1);
    //temp.BuySpaceSuit(p1);
    //temp.BuyFuel(p1);
    temp.BuyMedicalKit(p1);
}