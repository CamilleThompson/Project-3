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
    if(whichCrew_=='1')
    {
        cout <<"2.Nerys Fighter: Nerys is a world-class warrior and weapons operator, increase your odds of winning a battle with hostile aliens by 10%." <<endl;
        cout <<"3.Millie Tycoon: Millie is an fuel tycoon and will allow you to start with double the fuel" <<endl;
        cout <<"4.Chuck Intimidator: Chuck was once part of the CIA and is very charismatic and intimidating, the friendly alien will be 10% more likely to tell the truth." <<endl;
    }
    else if(whichCrew_=='2')
    {
        cout<<"1.Lola Doctor: Lola is a very successful healer and doctor and will make you gain 5% health each time you lose health after a battle." <<endl;
        cout <<"3.Millie Tycoon: Millie is an fuel tycoon and will allow you to start with double the fuel" <<endl;
        cout <<"4.Chuck Intimidator: Chuck was once part of the CIA and is very charismatic and intimidating, the friendly alien will be 10% more likely to tell the truth." <<endl;
    }
    else if(whichCrew_=='3')
    {
        cout<<"1.Lola Doctor: Lola is a very successful healer and doctor and will make you gain 5% health each time you lose health after a battle."<<endl;
        cout <<"2.Nerys Fighter: Nerys is a world-class warrior and weapons operator, increase your odds of winning a battle with hostile aliens by 10%." <<endl;
        cout <<"4.Chuck Intimidator: Chuck was once part of the CIA and is very charismatic and intimidating, the friendly alien will be 10% more likely to tell the truth." <<endl;
    }
    else if(whichCrew_=='4')
    {
        cout<<"1.Lola Doctor: Lola is a very successful healer and doctor and will make you gain 5% health each time you lose health after a battle."<<endl;
        cout <<"2.Nerys Fighter: Nerys is a world-class warrior and weapons operator, increase your odds of winning a battle with hostile aliens by 10%." <<endl;
        cout <<"3.Millie Tycoon: Millie is an fuel tycoon and will allow you to start with double the fuel" <<endl;
    }
}
    // ifstream infile;
    // infile.open("crewmates.txt"); 
    // string line;
    // while (getline(infile,line))
    // {
    //     if(line[0]!=whichCrew_)
    //     {
    //         cout << line <<endl;
    //     }
    // }
    // infile.close();



