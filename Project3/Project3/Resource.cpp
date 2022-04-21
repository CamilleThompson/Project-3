#include "Resource.h"

using namespace std;

Resource::Resource()
{
    money_R =0;
    fuel_R=0;
    health_R=0;
}
int Resource::BuyWeapon(Player Username_)
{
    string choice;
    int n=0;
    int m=0;
    money_R=Username_.GetMoney();
    while(n==0)
    {
    int numberOfLightSaber=Username_.GetLightsabers();
    int numberOfBlasters=Username_.GetBlasters();
    int numberofBeamGuns=Username_.GetBeamGuns();
    cout << "Which weapon type do you wish to buy?" <<endl;
    cout <<"1. Light Saber" <<endl;
    cout <<"2. Blaster" <<endl;
    cout << "3. Beam Gun" <<endl;
    cout <<"4. Go back to menu" <<endl;
    getline(cin, choice);
    if(choice.size()>1)
    {
        cout << "Invalid Input"<<endl;
    }
    else if(choice[0]>=49&& choice[0]<=52)
    {
        string numberOfWeapons;
        int numberOfWeapons_;
        int m=0;

        if(choice[0]==49)
        {
            while(m==0)
            {
                cout << "How many Light Sabers would you like ($1,000 each)?" << endl;
                getline(cin,numberOfWeapons);
            
                numberOfWeapons_=stoi(numberOfWeapons);
                if(numberOfLightSaber+numberOfWeapons_>2||numberOfWeapons_>2||numberOfLightSaber>2)
                {
                    cout << "You cannot have more than two weapons at the same time." <<endl;
                    m=1;
                }
                else if (numberOfWeapons_<=0)
                {
                  cout <<"Invalid Input" <<endl; 
                  m=1;
                }
                
                else if(numberOfWeapons_+numberOfLightSaber<=2)
                {
                    if(money_R>=numberOfWeapons_*1000)
                    {
                        Username_.addLightsaber();
                        numberOfLightSaber++;
                        m=1;
                        username_.SetMoney(numberOfWeapons_*-1000);
                        cout <<"You have $" << username_.GetMoney() <<" left." <<endl;
                    }
                    else
                    {
                        cout <<"You do not have enough money for that." <<endl;
                        m=1;
                    }
                }
            }
        }
        else if(choice[0]==50)
        {
          while(m==0)
            {
                cout << "How many Blasters would you like ($2,000 each)?" << endl;
                getline(cin,numberOfWeapons);
            
                numberOfWeapons_=stoi(numberOfWeapons);
                if(numberOfBlasters+numberOfWeapons_>2)
                {
                    cout << "You cannot have more than two weapons at the same time." <<endl;
                    m=1;
                }
                else if (numberOfWeapons_<=0)
                {
                  cout <<"Invalid Input" <<endl; 
                  m=1;
                }
                else if(numberOfWeapons_+numberOfBlasters>0&&numberOfWeapons_+numberOfBlasters<=2)
                {
                    if(money_R>=numberOfWeapons_*2000)
                    {
                        Username_.addBlaster();
                        numberOfLightSaber++;
                        m=1;
                        Username_.SetMoney(numberOfWeapons_*-2000);
                        cout <<"You have $" << Username_.GetMoney() <<" left." <<endl;
                    }
                    else
                    {
                        cout <<"You do not have enough money for that." <<endl;
                        m=1;
                    }
               }
            }
        }
        else if(choice[0]==51)
        {
          while(m==0)
            {
                cout << "How many Beam Guns would you like ($5,000 each)?" << endl;
                getline(cin,numberOfWeapons);
            
                numberOfWeapons_=stoi(numberOfWeapons);
                if(numberofBeamGuns+numberOfWeapons_>=2)
                {
                    cout << "You cannot have more than two weapons at the same time." <<endl;
                    m=1;
                }
                else if (numberOfWeapons_<=0)
                {
                  cout <<"Invalid Input" <<endl; 
                  m=1;
                }
                else if(numberOfWeapons_+numberofBeamGuns>0&&numberOfWeapons_+numberofBeamGuns<=2)
                {
                    if(money_R>=numberOfWeapons_*5000)
                    {
                        Username_.addBlaster();
                        numberOfBlasters++;
                        m=1;
                        Username_.SetMoney(numberOfWeapons_*-5000);
                        cout <<"You have $" << Username_.GetMoney() <<" left." <<endl;
                    }
                    else
                    {
                        cout <<"You do not have enough money for that." <<endl;
                        m=1;
                    }
               }
            }
        }
        else if(choice[0]==52)
        {
            n=1;
        }
    }
    else
    {
        cout << "Invalid Input" <<endl;
    }
    }
    return 0;

}
int Resource::Translator(Player Username_)
{
    int n=0;
    while(n==0)
    {
    string input;
    cout <<"Would you like to purchase a translator device ($5,000)? 1 for yes, 0 for no." <<endl;
    getline(cin,input);
    if(input=="1")
    {
        Username_.SetTranslator();
        Username_.SetMoney(-5000);
        cout <<"You have $" << Username_.GetMoney() <<" left." <<endl;
        n=1;
        return 1;
    }
    else if(input=="1")
    {
        n=1;
        return 0;
    }
    else
    {
        cout <<"Invalid Input" <<endl;
    }
    }
    return 0;
}
int Resource::BuySpaceSuit(Player Username_)
{
    int m=0;
    string input;
    int choice;
    while(m==0)
    {
    int Grade=Username_.GetspacesuitGrade();
    money_R=Username_.GetMoney();
    cout << "1.Space suit grade 2: $5,000" <<endl;
    cout << "2.Space suit grade 3: $10,000" <<endl;
    cout << "3.Space suit grade 4: $15,000" <<endl;
    cout << "4.Space suit grade 5: $20,000" <<endl;
    cout << "5.Go back to menu" <<endl;
    getline(cin,input);
    choice =stoi(input);
    if(choice<0||choice>5)
    {
        cout <<"Invalid Input" <<endl;
    }
    else if(choice ==0)
    {
        m=1;
        return 0;
    }
    else if(Grade>choice+1&&choice!=5)
    {
        cout << "You already have a higher grade suit" <<endl;
        m=1;
    }
    else if(choice==1)
    {
        if(money_R>=5000)
        {
        cout << "Your spacesuit is now a grade 2." <<endl;
        Username_.SetMoney(-5000);
        Username_.setSpaceSuitHealth(100);
        cout <<"You have $" << Username_.GetMoney() <<" left." <<endl;
        Username_.SetGrade(2);
        m=1;
        }
        else
        {
            cout <<"You do not have enough money for that." <<endl;
            m=1;
        }
    }
    else if (choice==2)
    {
        if(money_R>=((choice+1)-Grade)*5000)
        {
        cout << "Your spacesuit is now a grade 3." <<endl;
        Username_.SetMoney(((choice+1)-Grade)*-5000);
        cout <<"You have $" << Username_.GetMoney() <<" left." <<endl;
        Username_.SetGrade(3);
        Username_.setSpaceSuitHealth(100);
        m=1;
        }
        else
        {
            cout <<"You do not have enough money for that." <<endl;
            m=1;
        }
    }
    else if(choice==3)
    {
         if(money_R>=((choice+1)-Grade)*5000)
        {
        cout << "Your spacesuit is now a grade 4." <<endl;
        Username_.SetMoney(((choice+1)-Grade)*-5000);
        Username_.SetGrade(4);
        cout <<"You have $" << Username_.GetMoney() <<" left." <<endl;
        Username_.setSpaceSuitHealth(100);
        m=1;
        }
        else
        {
            cout <<"You do not have enough money for that." <<endl;
            m=1;
            return 0;
        }
    }
    else if(choice==4)
    {
        if(money_R>=((choice+1)-Grade)*5000)
        {
        cout << "Your spacesuit is now a grade 5." <<endl;
        Username_.SetMoney(((choice+1)-Grade)*-5000);
        Username_.SetGrade(5);
        cout <<"You have $" << Username_.GetMoney() <<" left." <<endl;
        Username_.setSpaceSuitHealth(100);
        m=1;
        }
        else
        {
            cout <<"You do not have enough money for that." <<endl;
            m=1;
            return 0;
        }
    }
    else if(choice==5)
    {
        m=1;
        return 0;
    }
    }

    return 0;
}
int Resource::BuyMedicalKit(Player Username_)
{
    int n=0;
    string input;
    while(n==0)
    {
    int kits= Username_.GetHealthPacks();
    cout <<"How many medical kits would you like to purchase ($2,000 each)? You currently have 0, and can at most have 5."<<endl;
    getline(cin,input);
    if(kits>=5)
    {
        cout <<"You already have 5 health packs." <<endl;
        n=1;
        return 0;
    }
    else if(stoi(input)+kits>=5)
    {
        cout <<"You cannot have more than 5 health packs." <<endl;
        n=1;
        return 0;
    }
    else if(stoi(input)+kits<=5)
    {
        if(Username_.GetMoney()>=stoi(input)*2000)
        {
          Username_.SetMoney(stoi(input)*-2000);
          Username_.AddHealthPacks(stoi(input));
          cout <<"You have purchased " << stoi(input) <<" health packs, and you have $" <<Username_.GetMoney()<<"."<<endl;
          return 1;
        }
        else
        {
            cout <<"You do not have enough money." <<endl;
            n=1;
            return 0;
        }
    }
    else
    {
        return 0;
    }
    
    }
    return 0;
}
int Resource::BuyFuel(Player Username_)
{
    int m=0;
    string input;
    int gas;
    while(m==0)
    {
    int fuel=Username_.GetFuel();
    int money=Username_.GetMoney();
    cout <<"You have " <<fuel<<" gallons of fuel. Your spacecraft can hold 300k gallons of fuel. How many gallons would you like to purchase ($1,000 per 10,000 gallons)? Input must be in multiples of 10000s." <<endl;
    getline(cin,input);
    gas=stoi(input);
    if(gas%10000!=0)
    {
        cout << "Input must be in multiples of 10000s. Re-enter a valid quantity" <<endl;
    }
    else if(gas<=0)
    {
        return 0;
    }
    else
    {
        if(money>=(gas/10000)*1000&&fuel+gas<=4000000)
        {
            Username_.SetFuel(gas);
            Username_.SetMoney((gas/10000)*-1000);
            cout << "You now have "<< Username_.GetFuel() <<" gallons of fuel and $" <<Username_.GetMoney()<<"." <<endl;
            m=1;
        }
        else if(fuel+gas>4000000)
        {
            cout << "You cannot buy more fuel than the fuel tank's capacity, which is 400K." <<endl;
            m=1;
        }
        else
        {
            cout <<"You do not have enough money" <<endl;
            m=1;
        }
    }
    }
 return 0;
}