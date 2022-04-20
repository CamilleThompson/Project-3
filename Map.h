#ifndef MAP_H
#define MAP_H
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <fstream>

using namespace std; 

class Map
{
    public:
        void createNewMap();
        //
        bool isMisfortune(int row, int column);
        int getPlayerColPosition();
        int getPlayerRowPosition();
        int getMisfortuneType(int row, int column);
        int getSiteTrait(int row, int column);
        void setSize();
        double getSize();
        void setCapacity();
        int getCap();
        int getNum_NonHabitable();
        int getNumHabitable();
        void displayMap();


    private:
        char mapData[12][12];
        int misFortune[12][12];
        int site_trait[12][12];
        int playerRow=0;
        int playerCol=0;
        double size=1.0;
        int cap=615;

};
#endif