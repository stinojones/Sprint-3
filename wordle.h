// This wordle.h file is mainly for creating all the private and public variables and constructor



#pragma once
// ensures this header file is only included once - this important when there is multiple classes
#include <string>
//this and ios stream include string
#include <vector>
//gets vector lists included

using namespace std;
//helps us use the string without putting std in front

class Wordle
{
    
private:
    string word;
    vector<string> guesses;
    //    vector = list
    //    we put string to define what kinda list it is
    
public:
    Wordle(const string& secret) : word(secret) {}
//    set this as a function and the word is now the secret
    void guess(const string& guess);
    void display() const;
    bool win() const;

    
//    constructor
    
    
    
    

    
    
    
};





