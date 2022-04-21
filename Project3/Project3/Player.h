#include <iostream>
#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <vector>


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
    //void AddWeapon(char weaponchoice,int number);
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
    void addPlanet();
    int getNumPlanets();
    void changeSpaceSuitHealth(int change);
    void setSpaceSuitHealth(int suitHealth);
    int getSpaceSuitHealth();
    //void getQuestions(string filename);
    //int getRandomQuestion(); //will return 0 if correct and 1 if incorrect
    private:
    int health;
    int fuel;
    int money;
    int spacesuitGrade;
    int spaceSuitHealth;
    int amountofWeapons;
    int lightSabers;
    int beamGuns;
    int blasters;
    int translator;
    int healthPacks;
    int numPlanets;
    //vector<Questions> questions_;

};
#endif
