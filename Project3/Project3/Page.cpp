#include <iostream>
#include "Page.h"
#include <string>

using namespace std;
Page::Page()
{
    alienAssessment=0;
}
void Page::addPlanet(Map planet_)
{
    planets.push_back(planet_);
}
void Page::addHabitableTraits(string trait)
{
    habitableTraits.push_back(trait);
}
void Page::getHabitableTraits()
{
    if(habitableTraits.size()==0)
    {
        cout <<"none"<<endl;
    }
    else
    {
    for(int i=0;i<habitableTraits.size();i++)
    {
        cout<<habitableTraits[i] <<",";
    }
    }
}
void Page::addInhabitableTraits(string traits)
{
    inhabitableTraits.push_back(traits);
}
void Page::getInhabitableTraits()
{
    if(inhabitableTraits.size()==0)
    {
        cout <<"none"<<endl;
    }
    else
    {
        for(int i=0;i<habitableTraits.size();i++)
        {
            cout<<inhabitableTraits[i] <<",";
        }
    }
}
void Page::displayPage(int pageNumber,string username,Map temp)
{
    //temp=planets[pageNumber-1];
    temp.setSize();
    cout << username <<"'s Log Book page #" <<pageNumber<<": " ;//<< temp.getPlanetName() <<endl;
    cout <<"Planet size (in diameter of 1000 kms): " << temp.getSize() <<endl;
    cout <<"Planet carrying capacity (in millions): "<<temp.getCap() <<endl;
    cout <<"Habitable traits discovered: ";
    if(habitableTraits.size()==0)
    {
        cout <<"none" <<endl;
    }
    else
    {
        for(int i=0;i<habitableTraits.size();i++)
        {
            cout << habitableTraits[i] <<", ";
        }
        cout <<endl;
    }
    cout << "Non-habitable traits discovered: ";
    if(inhabitableTraits.size()==0)
    {
        cout <<"none" <<endl;
    }
    else
    {
        for(int i=0;i<inhabitableTraits.size();i++)
        {
            cout << inhabitableTraits[i] <<", ";
        }
        cout <<endl;
    }
    cout <<"Friendly alien assessment: ";
    if(alienAssessment==0)
    {
        cout <<"none"<<endl;
    }
    else if(alienAssessment==1)
    {
        cout <<"Habitable" <<endl;
    }
    else
    {
        cout <<"Non-habitable" <<endl;
    }
}
// void Page::setCapacity(int campacity_)
// {

// }
// int Page::getCapacity()
// {

// }
// void Page::setSize(int size_)
// {

// }
// int Page::getSize()
// {

// }
// void Page::setName(string name)
// {

// }