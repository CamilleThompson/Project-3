#include <iostream>
#include <string>
#include <vector>
#include "Player.h"
#include "Player.cpp"
#include "Questions.h"
#include "Questions.cpp"
using namespace std;

int main()
{
    Player P1 = Player();
    P1.getQuestions("questions.txt");
    
}