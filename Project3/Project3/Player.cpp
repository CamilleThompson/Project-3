#include "Player.h"
#include <fstream>
#include <string>


// #include "Crew.h"


using namespace std;
int split(string inputString, char seperater, string arr[],int size) //function type int
{
    int counter = 0;
    int arraycounter = 0;
    string firstsubString;
    string substring = inputString.substr();
    cin >> inputString >> seperater >>arr[size] >>size; //user input
    if (inputString == "")
    {
        return arraycounter;
        return -1;
    }
     for (int i=0; i<inputString.length(); i++) // a for loop that runs through the string
     {
         if(inputString[i]!=seperater) //enters this loop if not a seperator and updates the string to add to the array until a seperator appears
         {
         firstsubString += inputString.substr(i,1);
         arr[arraycounter]=firstsubString;
         }
         else if (inputString[i]==seperater) //if it reaches a seperator adds one to the array
         {
            
                arr[arraycounter]=firstsubString;
                firstsubString = "";
                arraycounter ++;    
            // string substring = inputString.substr(i+1,counter);
            // arr[arraycounter] = substring;
            // arraycounter++;
            // counter = 0;
            // counter++;
         }
         if (arraycounter >= size) //input validation
         {
             return -1;
         }
         
     }
     arraycounter++;
     return arraycounter;

}

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
//void Player::AddWeapon(char weaponchoice,int number)
//{
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
//}
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
void Player::addPlanet()
{
    numPlanets++;
}
int Player::getNumPlanets()
{
    return numPlanets;
}
void Player::setSpaceSuitHealth(int suitHealth)
{
    spaceSuitHealth=suitHealth;
}
int Player::getSpaceSuitHealth()
{
    return spaceSuitHealth;
}
void Player::changeSpaceSuitHealth(int change)
{
    spaceSuitHealth+=change;
}

// void Player::getQuestions(string filename)
// {
//     ifstream infile;
//     infile.open("questions.txt"); 
//     string line;
//    string temp[2];
//    string name;
//    vector<string> options;
//    string options_[4];
//    char c1=';';
//    char c2=',';
//     while (getline(infile,line))
//     {
//         split(line,c1,temp,2);
//         name =temp[0];
//         split(temp[1],c2,options_,4);
//         for(int i=0;i<4;i++)
//         {
//         options[i]=options_[i];
//         }
//        questions_.push_back(Questions(name,options));
//     }
//     cout << name;
// }
// //int Player::getRandomQuestion()
// //{
//     // srand(time(0));
//     // vector<string> tempOptions;
//     // string input_;
//     // int v=rand()%questions_.size()-1;
//     // Questions temp=questions_[v];
//     // cout << temp.getQuestion() <<endl;
//     // tempOptions=temp.getOptions();
//     // return 0;
//     // for(int i=0;i<4;i++)
//     // {
//     //     cout << i+1 <<". " <<tempOptions[i];
//     // }
//     // getline(cin,input_);
//     // if(stoi(input_)==1)
//     // {
//     //     return 0;
//     // }
//     // else{
//     //     return 1;
//     // }
//     //return 0;

// //}

// //set suit health back to %100



