#include <iostream>
#include <string>
#include <iomanip>
#include "Crew.h"
#include "Player.h"
using namespace std;

Crew::Crew()
{
    number=0;
}
void Crew::setCrew(int whichCrew)
{
    crewMates.push_back(whichCrew);
}
vector<int> Crew::getCrew()
{
    return crewMates;
}
void Crew::useCrew(int whichCrew,Player name)
{
    int newHealth;
    int newFuel;
    if(whichCrew==1)
    {
        newHealth=name.GetHealth()*.5;
        name.GainHealth(newHealth);
    }
    else if(whichCrew==2)
    {
        //increases odds to win a battle by 5%
    }
    else if(whichCrew==3)
    {
        newFuel=name.GetFuel()*2;
        name.SetFuel(newFuel);
    }
    else if(whichCrew==4)
    {
        //increase odds for a alien to tell the truth by 10%;
    }
}
void Crew::displayCrew(char whichCrew_)
{
    if(whichCrew_=='1')
    {
        cout <<"Great choice! Lola will bring a lot to your team. Pick your last crewmate. " <<endl;
    }
    else if(whichCrew_=='2')
    {
         cout <<"Great choice! Nerys will bring a lot to your team. Pick your last crewmate. " <<endl;
    }
    else if(whichCrew_=='3')
    {
        cout <<"Great choice! Millie will bring a lot to your team. Pick your last crewmate. " <<endl;
    }
    else if(whichCrew_=='4')
    {
        cout <<"Great choice! Chuck will bring a lot to your team. Pick your last crewmate. " <<endl;
    }
    ifstream infile;
    infile.open("crewmates.txt"); 
    string line;
    while (getline(infile,line))
    {
        if(line[0]!=whichCrew_)
        {
            cout << line <<endl;
        }
    }
    infile.close();
}


