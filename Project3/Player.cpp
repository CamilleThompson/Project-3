#include "Player.h"

// #include "Crew.h"


using namespace std;

Player::Player()
{
    fuel = 200000;
    health = 100;
    money = 100000;
    spacesuitGrade = 1;
    amountofWeapons =1;
    lightSabers=1;
    beamGuns=0;
    blasters=0;
    translator=0;
    healthPacks=0;
    //weapons.push_back("lightsaber");
}
int Player::GetFuel()
{
    return fuel;
}
void Player::SetFuel(int fuel_)
{
    fuel+=fuel_;
}
int Player::GetHealth()
{
    return health;
}

int Player::GetMoney()
{
    return money;
}
void Player::SetMoney(int money_)
{
    money+=money_;
}
void Player::AddWeapon(char weaponchoice,int number)
{
    // if(weaponchoice=='a')
    // {
    //     for(int i=0;i<number;i++)
    //     {
    //         weapons.push_back("lightsaber");
    //         amountofWeapons++;  
    //     }
    // }
    // else if(weaponchoice=='b')
    // {
    //     for(int i=0;i<number;i++)
    //     {
    //     weapons.push_back("blaster");
    //     amountofWeapons++;
    //     }
    // }
    // else if(weaponchoice=='c')
    // {
    //     for(int i=0;i<number;i++)
    //     {
    //     weapons.push_back("beamgun");
    //     amountofWeapons++;
    //     }
    // }
}
int Player::LoseHealth(int minusHealth)
{
    health-=minusHealth;
    return 1;
}
int Player::GainHealth(int addHealth)
{
    health+=addHealth;
    return 1;
}
int Player::GetLightsabers()
{
    return lightSabers;
}
void Player::addLightsaber()
{
    lightSabers++;
}
int Player::GetBlasters()
{
    return blasters;
}
void Player::addBlaster()
{
    blasters++;
}
int Player::GetBeamGuns()
{
    return beamGuns;
}
void Player::addBeamGun()
{
    beamGuns++;
}
int Player::GetspacesuitGrade()
{
 return spacesuitGrade;
}
void Player::SetGrade(int grade)
{
    spacesuitGrade=grade;
}
int Player::GetTranslator()
{
    return translator;
}
void Player::SetTranslator()
{
    translator=1;
}
int Player::GetHealthPacks()
{
    return healthPacks;
}
void Player::AddHealthPacks(int number)
{
    healthPacks+=number;
}


