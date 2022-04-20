#include <iostream>
#include <string>
#include <fstream>
#include "Player.h"
#include "Crew.h"
#include "Resource.h"

using namespace std;
int main()
{
    cout << "Enter Your Name Here: "<<endl;
    string userName;
    getline(cin,userName);
    Player p1;
    cout <<"Welcome " << userName<< "!"<<endl;
    ifstream infile;
    infile.open("firstText.txt"); 
    string line;
    while (getline(infile,line))
    {
    cout << line <<endl;
    }
    infile.close();
    string input;
    getline(cin,input);
    
    infile.open("crewmates.txt"); 
    while (getline(infile,line))
    {
        cout << line <<endl;
    }
    infile.close();
    cout << "Choose one Crewmate by entering the corresponding number: " <<endl;
    string crew1;
    string crew2;
    getline(cin,crew1);
    Crew player1;
    player1.setCrew(stoi(crew1));
    cout << "Choose a second Crewmate:" <<endl;
    player1.displayCrew(input[0]);
    getline(cin,crew2);
    player1.setCrew(stoi(crew2));
    cout << "You have a very impressive crew. With your leadership, you will be sure to succeed." <<endl;
    cout << "Hit enter to travel to the Resource Center" <<endl;
    getline(cin,input);
    infile.open("resourceCenter.txt"); 
    while (getline(infile,line))
    {
        cout << line <<endl;
    }
    infile.close();

    getline(cin,input);
}