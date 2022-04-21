#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "Resource.h"
#include "Map.h"
#include "Player.h"
#include "Battle.h"

using namespace std; 

//only call this function when we know the misfortune type is 1, meaning it will be an event
void Battle::eventMisfortune()
{
    srand(time(0));
    //picks a random event
    int eventType=rand()%3 +1; 
    //if the event type is 1
    if(eventType==1)
    {
        int x = p1.GetspacesuitGrade();
        int newH= 50-(10*x);
        //decrease player health by 10% and suit health(50-10x)
        p1.LoseHealth(10);
        p1.setSuitHealth(newH);
        cout<<"Oh no! You have encountered extreme weather! Your health decreased by 10%."<<endl;
    }
    //if the event type is 2
    if(eventType==2)
    {
        int x = p1.GetspacesuitGrade();
        int newH= 50-(10*x);
        //decrease player health by 10% and suit health(50-10x)
        p1.LoseHealth(50);
        p1.setSuitHealth(newH);
        cout<<"Oh no! You have encountered a crater! Your health decreased by 50%."<<endl;
    }
    //if the event type is 3
    if(eventType==3)
    {
        //decrease player health by 10% and suit health(50-10x)
        p1.LoseHealth(30);
        cout<<"Oh no! You have space sickness! Your health decreased by 30%."<<endl;
    }

}
void Battle::readAlienNames(string filename)
{
    int tracker=0;
    ifstream fin(filename);
    if(fin.is_open())
    {
        int x;
        string line="";
        while(getline(fin, line))
        {
                
            alienNames[tracker]=line;
            tracker++;
        }
    } 
}
void Battle::battleMisfortune()
{
    srand(time(0));
    Player p1;
    Resource r1;
    int random=rand()%20+1;
    int n= p1.getNumWeapons();
    string name=alienNames[random];
    int choice;
    cout<<"You just ran into "<<name<<"! Think you can beat this dangerous alien for helping save humanity?"<<endl;
    cout<<"Type 1 to attack and 2 to forfeit."<<endl;
    cin>>choice;
    if(choice==1)
    {
            if(p1.GetMoney()<1000 && n==0)
            {
                cout<<"You neither have a weapon nor enough money to buy a weapon. Consequently, the alien attacked and defeated you could not retreat :("<<endl;
                //consequences
                p1.LoseHealth(30);
                int x=p1.getSuitHealth();
                int newH=100-(20*x);
                p1.setSuitHealth(newH);
            }
            else 
            {
                r1.BuyWeapon(p1);
                int input;
                cout<<"Let's attack! Choose a weapon from your arsenal quickly and attack before the enemy advances!"<<endl;
                    cout<<"1. "<<p1.GetLightsabers()<<" Light Saber(s)"<<endl;
                    cout<<"2. "<<p1.GetBeamGuns()<<" Beam Gun(s)"<<endl;
                    cout<<"3. "<<p1.GetBlasters()<<" Blaster(s)"<<endl;
                cin>>input;
                if(1<=input&&input<=3)
                {
                    int weaponNum=input;
                    int planetNum= p1.getNumPlanets();
                    int r3=rand()%1+0;
                    int r1= rand()%6+1;
                    int r2= rand()%6+1;
                    int outcome=((weaponNum*r1)*(r3+1))-(r2*planetNum);
                    if(outcome>0)
                    {
                        cout<<"You defeated Dhith! Great Job! You won Beam gun. Unfortunatley you lost 10%" <<endl;
                        cout<<"of your space suit health. "<<endl;

                        p1.LoseHealth(10);
                        if(p1.GetLightsabers()!=2)
                        {
                            int x=p1.GetLightsabers()+1;
                            p1.setLightSaber(x);
                        }
                        if(p1.GetBeamGuns()!=2)
                        {
                            int x=p1.GetBeamGuns()+1;
                            p1.setBeamG(x);
                        }
                        if(p1.GetBlasters()!=2)
                        {
                            int x=p1.GetBlasters()+1;
                            p1.setBlaster(x);
                        }
                    }
                    else
                    {
                        p1.LoseHealth(30);
                        int x=p1.getSuitHealth();
                        int newH=100-(20*x);
                        p1.setSuitHealth(newH);
                        cout<<"Aggh! You lost the battle! Dhith seems to be hard for you! Tough times. Unfortunately, you experience the following due to this loss:"<<endl;
                        cout<<"1. Your health was decreased by 30%."<<endl;
                        cout<<"2. Your suit health decreased by "<<newH<<"% ."<<endl;
                        if(input==1)
                        {
                            int x=p1.GetLightsabers()-1;
                            p1.setLightSaber(x);
                        }
                        if(input==2)
                        {
                            int x= p1.GetBeamGuns()-1;
                            p1.setBeamG(x);
                        }
                        if(input==3)
                        {
                            int x= p1.GetBlasters()-1;
                            p1.setBlaster(x);
                        }
                    }
                }
            }
    }
    else if(choice==2)
    {
        if(n>0)
        {
            cout<<"Really?! You chose to forfeit the battle? This is disappointing!"<<endl;
            cout<<"You lost a weapon due to this decision. Hopefully, you git gud before you encounter the next alien."<<endl;
            p1.setNumWeapons(n-1);
        }
        else
        {
            cout<<"Really?! You chose to forfeit the battle? This is disappointing!"<<endl;
            cout<<"Since you do not have a weapon, you just lost a huge chunk of money from your account. "<<endl;
            cout<<"Hopefully, you git gud before you encounter the next alien."<<endl;
            int m=p1.GetMoney();
            p1.SetMoney(m-1);
        }
    }
    
}
void Battle::readAlienConvos(string filename)
{
    int tracker=0;
    ifstream fin(filename);
    if(fin.is_open())
    {
        int x;
        string line="";
        while(getline(fin, line))
        {
                
            int y=line.find(';');
            string str1= line.substr(0,y);
            string str2=line.substr(y+1);
            arr[tracker]=str1;
            alienNames[tracker]=str2;
            tracker++;
        }
    } 
}

void Battle::friendlyAlien()
{
    srand(time(0));
    int n=0;
    cout<<"You have run into a friendly alien!"<<endl;
    int numT=p1.GetTranslator();
    while(n==0)
    {
        if(numT==0)
        {
            cout<<"You do not have a translator and cannot communicate with this alien. "<<endl;
            cout<<"This alien may have useful information for you or money to offer, you can purchase a translator from the store if you would like to talk to them."<<endl;
            n=1;
        }
        else 
        {
            int m=0;
            string in;
            cout<<"You can communicate with this alien."<<endl;
            cout<<"You can defeat them in rock, paper, scissors three times and gain $200, or you can ask them about the habitability of this planet."<<endl;
            cout<<"The chance of the alien telling the truth is 70%. You can only pick one option."<<endl;
            cout<<"Enter 'p' for rock paper scissors, and enter 't'to hear what the alien has to say"<<endl;
            getline(cin, in);
            {
                if(in=="p")
                {
                    int numWon=0;
                    int numLost=0;
                    while(m<4)
                    { 
                        int rock=1;
                        int paper=2;
                        int scissors=3;
                        int alienW=rand()%3+1;
                        string userW;
                        cout<<"Choose: rock(r), paper(p) or scissors(s)"<<endl;
                        getline(cin, userW);
                        if(alienW==1 && userW=="p")
                        {
                            cout<<"The alien chose rock"<<endl;
                            cout<<"You win this round."<<endl;
                            m++;
                            numWon++;
                        }
                        if(alienW==2&& userW=="s")
                        {
                            cout<<"The alien chose paper"<<endl;
                            cout<<"You win this round."<<endl;
                            m++;
                            numWon++;
                        }
                        if(alienW==3&& userW=="r")
                        {
                            cout<<"The alien chose scissors"<<endl;
                            cout<<"You win this round."<<endl;
                            m++;
                            numWon++;
                        }
                        else
                        {
                            numLost++;
                            m++;
                        }
                    }
                    if(numLost==3)
                    {
                        cout<<"You failed to deafeat the alien! You don't get any money or intel."<<endl;
                    }
                    else 
                    {
                        cout<<"Congratulations! You defeated the alien and won $200"<<endl;
                        int x=p1.GetMoney()+200;
                        p1.SetMoney(x);
                    }
                    n=1;
                }
                else if(in=="t")
                {
                    int r2=rand()%10+1;
                    if(r2<7)
                    {
                        int response;
                        cout<<"Hello human! I have looked around this planet and think this would make a great home for you."<<endl;
                        cout<<"choose a response"<<endl;
                        for(int i=6; i<10; i++)
                        {
                            cout<<i-5<<"."<<alienConvos[i]<<endl;
                        }
                        cin>>response;
                        cout<<alienConvos[response+4]<<endl;
                    }
                    else
                    {
                        cout<<"Hello human! I have looked around this planet and think this would be a terrible choice for a home. Your fragile species could not handle these conditions, I would suggest finding someplace else."<<endl;
                        int response;
                        cout<<"Hello human! I have looked around this planet and think this would make a great home for you."<<endl;
                        cout<<"choose a response"<<endl;
                        for(int i=0; i<5; i++)
                        {
                            cout<<i+1<<"."<<alienConvos[i]<<endl;
                        }
                        cin>>response;
                        cout<<alienConvos[response-1]<<endl;
                    }
                    n=1;
                }
            }
        }
    }
}

int Battle::reportHabitable()
{
    int m=0;
        int yesOrno;
        cout<<"would you like to report this planet as habitable? type 1 for yes and 2 for no"<<endl;
        cin>>yesOrno;
        if(yesOrno==1)
        {
            numPplSaved+=m1.getCap();
            numPeopleLeft=numPeopleLeft-numPplSaved;
            cout<<"Congratulations! You have saved " <<numPplSaved<<"million people! "<<endl;
            cout<<"You have "<<numPeopleLeft<<" million people to save left." <<endl;
            return 1;

        }
        if(yesOrno==2)
        {
            cout<<"Your choice has led to tragedy. "<<endl;
            cout<<m1.getCap()<<" million people were sent to your planet and died due to its in-hospitable conditions. "<<endl;
            cout<<"You still have "<<numPeopleLeft<<"million people left to save, so keep exploring."<<endl;
            return 2;
        }
}



