#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Player.h"
#include "Player.cpp"
#include "Crew.h"
#include "Crew.cpp"
#include "Resource.h"
#include "Resource.cpp"
#include "Page.h"
#include "Page.cpp"
//#include "Game.cpp"
//#include "Game.h"
#include "Map.h"
#include "Map.cpp"

using namespace std;
int main()
{
    vector<Page> LogBook;
    vector<Map> Planets;
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
    if(crew1=="3")
    {
        p1.SetFuel(200000);
    }
    cout << "Choose a second Crewmate:" <<endl;
    player1.displayCrew(input[0]);
    getline(cin,crew2);
    player1.setCrew(stoi(crew2));
     if(crew2=="3")
    {
        p1.SetFuel(200000);
    }
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
    int n=0;
    Resource R1;
    while(n==0)
    {
        infile.open("resourceMenu.txt");
    while (getline(infile,line))
    {
        cout << line <<endl;
    }
    cin.ignore();
    getline(cin,input);
    if(stoi(input)<=0||stoi(input)>6)
    {
        cout <<"Invalid input" <<endl;
    }
    else if(stoi(input)==1)
    {
        R1.BuyWeapon(p1);
    }
    else if(stoi(input)==2)
    {
        R1.Translator(p1);
    }
    else if(stoi(input)==3)
    {
        R1.BuySpaceSuit(p1);
    }
    else if(stoi(input)==4)
    {
        R1.BuyMedicalKit(p1);
    }
    else if(stoi(input)==5)
    {
        R1.BuyFuel(p1);
    }
    else if(stoi(input)==6)
    {
        cout << "Great purchase, Elon is sending a Cybertruck with your supplies to you right now." <<endl;
        n=1;
    }
    }
    int x=0;
    Map tempMap=Map();
    tempMap.createNewMap();
    int newPlanet;
    int fuel_=50000;
    cout << "Welcome to Your First Planet, you will now be able to choose from any function in the main menu. Goodluck!" <<endl;
    //Game tempGame;
    while(x==0)
    {
        tempMap.displayMap();
        cout <<"    Select one:" <<endl;
        cout <<"1.Move" <<endl;
        cout <<"2.View Status" <<endl;
        cout <<"3.View Log Book" <<endl;
        cout <<"4.Resource Center" <<endl;
        cout <<"5.Report Planet as Habitable" <<endl;
        cout <<"6.Enter wormhole to next planet" <<endl;
        getline(cin,input);
        if(stoi(input)>6 || stoi(input)<=0||input=="")
        {
            cout <<"Invalid Input" <<endl;
        }
        else if(stoi(input)==1)
        {
            //this is where you will put in the move funtion
        }
        else if(stoi(input)==2)
        {
            int health =p1.GetHealth();
            int spaceSuitHealth=p1.getSpaceSuitHealth();
            int fuelTank=p1.GetFuel();
            int fuelTankPercent=fuelTank/4000;
            cout <<"Health"<<endl;
            for(int i=0;i<health/5;i++)
            {
                cout <<"_";
            }
            cout <<"                    " << health<<"%"<<endl;
            for(int i=0;i<spaceSuitHealth/5;i++)
            {
                cout <<"_";
            }
            cout <<"                    " << spaceSuitHealth<<"%"<<endl;
            for(int i=0;i<fuelTank/20000;i++)
            {
                cout <<"_";
            }
            cout <<"                    " << fuelTankPercent<<"%"<<endl;
            cout <<endl;
            //cout << "Planets Explored: " << tempGame.getPlanet()<<endl;
            //print out how many people have been saved, and how many plants were reported

            cout << endl;
            cout <<"-Money: " <<p1.GetMoney();
            cout <<"-Weapons: "<<p1.GetLightsabers()+p1.GetBlasters()+p1.GetBeamGuns();
            cout <<"    -Lightsabers: " <<p1.GetLightsabers()<<endl;
            cout <<"    -Blasters: " <<p1.GetBlasters() <<endl;
            cout <<"    -Beam Guns: " <<p1.GetBeamGuns()<<endl;
            cout <<"-Translators: " <<p1.GetTranslator() <<endl;
            cout <<"-Space Suit Grade # " <<p1.GetspacesuitGrade() <<endl;
            cout <<"-Medical Kits: " <<p1.GetHealthPacks()<<endl;
            cout <<"-Fuel: " <<p1.GetFuel()<<endl;
        } 
        else if(stoi(input)==6)
        {
            string input_;
            int fuelNeeded=(fuel_*fuel_/1000000)+fuel_;
            fuel_=fuelNeeded;
             if(fuelNeeded>p1.GetFuel())
    {
        int n=0;
        while(n==0)
    {
        cout << "You do not have enough fuel, you need " <<fuelNeeded-p1.GetFuel() <<" more gallons."<<endl;
        cout << "Would you like to make the purchase?(y/n)" <<endl;
        cin.ignore();
        getline(cin,input_);
        if(input_=="y")
        {
            cout << "You are entering the wormhole in 3...2...1..." <<endl;
            p1.SetFuel(-fuelNeeded);
            p1.SetMoney((fuelNeeded/10000)*-1000);
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
            p1.SetFuel(-fuelNeeded);
            cout << "You are entering the wormhole in 3...2...1..." <<endl;
            cout << p1.GetFuel() <<endl;
         }
        }
        else if(stoi(input)==3)
        {
            Page tempPage;
            Map tempMap;
            LogBook.push_back(tempPage);
            tempPage.displayPage(newPlanet+1,userName,tempMap);
        }
        else if(stoi(input)==4)
        {
            while(n==0)
            {
            infile.open("resourceMenu.txt");
            while (getline(infile,line))
            {
                cout << line <<endl;
            }
            cin.ignore();
            getline(cin,input);
            if(stoi(input)<=0||stoi(input)>6)
            {
                cout <<"Invalid input" <<endl;
            }
            else if(stoi(input)==1)
            {
                R1.BuyWeapon(p1);
            }
            else if(stoi(input)==2)
            {
                R1.Translator(p1);
            }
            else if(stoi(input)==3)
            {
                R1.BuySpaceSuit(p1);
            }
            else if(stoi(input)==4)
            {
                R1.BuyMedicalKit(p1);
            }
            else if(stoi(input)==5)
            {
                R1.BuyFuel(p1);
            }
            else if(stoi(input)==6)
            {
                cout << "Great purchase, Elon is sending a Space Ship with your supplies to you right now." <<endl;
                n=1;
            }
            }
        }
        else if(stoi(input)==8)
        {
            //sample sight collecting
        }
        else if(stoi(input)==7)
        {
            cout <<"Are you sure you want to give up (y/n)"<<endl;
            getline(cin,input);
            if(input=="y")
            {
                x=1;
            }
            else if(input=="n")
            {
                x=0;
            }
            else
            {
                cout <<"Invalid Input"<<endl;
            }   
        }
        
    }


    
    
}