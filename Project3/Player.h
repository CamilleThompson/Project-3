#include <iostream>
#ifndef WEAPON_H
#define WEAPON_H
#include <string>
#include <vector>
#include "Weapons.h"

using namespace std;

class Player
{
    public:
    Player();
    int GetFuel();
    void SetFuel(int fuel_);
    int GetMoney();
    void SetMoney(int money_);
    int GetspacesuitGrade();
    void SetGrade(int grade);
    void AddWeapon(char weaponchoice,int number);
    int GetHealth();
    int LoseHealth(int minusHealth);
    int GainHealth(int addHealth);
    int GetLightsabers();
    void addLightsaber();
    int GetBlasters();
    void addBlaster();
    int GetBeamGuns();
    void addBeamGun();
    int GetTranslator();
    void SetTranslator();
    int GetHealthPacks();
    void AddHealthPacks(int number);

    private:
    int health;
    int fuel;
    int money;
    int spacesuitGrade;
    int amountofWeapons;
    int lightSabers;
    int beamGuns;
    int blasters;
    vector<Weapons> weapons;
    int translator;
    int healthPacks;
};
#endif
