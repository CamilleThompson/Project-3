#include <iostream>
#include <string>
#include "Questions.h"


using namespace std;

    Questions::Questions(string question_, vector<string> options_)
    {
        question = question_;
        options=options_;
        correct=1;;
    }
    void Questions::setQuestion(string question_)
    {
        question=question_;
    }
    string Questions::getQuestion()
    {
        return question;
    }
    void Questions::setOptions(vector<string> options_)
    {
        options=options_;
    }
    vector<string> Questions::getOptions()
    {
        return options;
    }
    void Questions::setCorrect(int correct_)
    {
        correct=correct_;
    }
    int Questions::getCorrect()
    {
        return correct;
    }
