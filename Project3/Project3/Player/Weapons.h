#include <iostream>
#include <string>
//#include "Player.h"

using namespace std;

class Weapons
{
    public:
    Weapons();
    Weapons(string name);
    int getAmount();
    void setAmount(int amount_);


    private:
    int amount;
    string name;
};

