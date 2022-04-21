#include <iostream>
#ifndef QUESTIONS_H
#define QUESTIONS_H
#include <string>
using namespace std;

class Questions
{
    public:
    Questions(string question, vector<string> options);
    void setQuestion(string question_);
    string getQuestion();
    void setOptions(vector<string> options_);
    vector<string> getOptions();
    void setCorrect(int correct);
    int getCorrect();

    private:
    string question;
    vector<string> options;
    int correct=1;
};
#endif

