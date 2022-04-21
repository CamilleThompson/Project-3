#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <fstream>
#include "Page.h"
#include "Page.cpp"
#include "Map.h"
#include "Map.cpp"

using namespace std;
int main()
{
    Page temp=Page();
    Map tempMap;
    temp.displayPage(1,"Camille",tempMap);
}