#include <iostream>
#include <fstream>
#include <ctime>
#include "Map.h"
#include <cstdlib>
using namespace std;

void Map:: createNewMap()
{
    srand(time(0));
    misFortune[0][0]=8;
    mapData[0][0]='X';
    for(int i=0; i<12; i++)
    {
        for (int j=0; j<12; j++)
        {
            if(mapData[i][j]!='X')
            {
                mapData[i][j]='-';
            }
        }
    }
    for(int s=0; s<7; s++)
    {
        int r1= rand() % 11 +1;
        int r2= rand() % 11 +1;
        mapData[r1][r2]='S';
    }
    for(int a=0; a<1; a++)
    {
        int r1= rand() % 11 +1;
        int r2= rand() % 11 +1;
        if(mapData[r1][r2]!='S')
        {
            mapData[r1][r2]='A';
        }
    }
    for(int i=0; i<12; i++)
    {
        for (int j=0; j<12; j++)
        {
            if(mapData[i][j]=='S')
            {
                site_trait[i][j]=rand()%6+1;
                //calculates the number of habitable and non habitable traits on the map
            }
            else
            {
                site_trait[i][j]=0;
            }
        }
    }
    for(int i=0; i<12; i++)
    {
        for (int j=0; j<12; j++)
        {
            if(misFortune[i][j]!=8)
            {
                misFortune[i][j]=0;
            }
        }
    }
    for(int s=0; s<=6; s++)
    {
        int r1= rand() % 11 +1;
        int r2= rand() % 11 +1;
        if(mapData[r1][r2]!='S'&&mapData[r1][r2]&&mapData[r1][r2]!='A' && mapData[r1][r2]!='X')
        {
            misFortune[r1][r2]=rand()%4+1;
        }
    }

}
void Map::displayMap()
{
    for (int z=0; z<12; z++)
    {
        for (int h=0; h<12; h++)
        {
            cout<<mapData[z][h];
        }
        cout<<endl;
    }
}
bool Map::isMisfortune(int row, int column)
{
    if( misFortune[row][column]!=0 && misFortune[row][column]!=8)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int Map::getMisfortuneType(int row, int column)
{
    if( misFortune[row][column]!=0 && misFortune[row][column]!=8)
    {
        return misFortune[row][column];
    }
}
int Map::getSiteTrait(int row, int column)
{
    if(site_trait[row][column]!=0)
    {
        return site_trait[row][column];
    }
    else 
    {
        return 0;
    }

}
int Map:: getPlayerColPosition()
{
    //looping through columns first
    for(int j=0; j<12; j++)
    {
        //through the rows
        for(int i=0; i<12;j++)
        {
            if(mapData[i][j]=='X')
            {
                j=playerCol;
                return j; 
            }
        }
    }
}
int Map::getPlayerRowPosition()
{
    for(int i=0; i<12; i++)
    {
        //through the rows
        for(int j=0; j<12;j++)
        {
            if(mapData[i][j]=='X')
            {
                i=playerRow;
                return i; 
            }
        }
    }
}

void Map::setSize()
{
    srand(time(0));
    size=(float)(rand()%8+0.5);
}
double Map::getSize()
{
    return size;
}
void Map::setCapacity()
{
    cap=size*615.0;
}
int Map::getCap()
{
    return cap;
}




