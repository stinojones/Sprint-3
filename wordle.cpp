//this wordle.cpp file is for defining all the wordle.h file private and public members and their functionalities


#include <string>
using namespace std;
#include "wordle.h"
//with including classes, it is with "" instead

#include <iostream>


void Wordle::guess(const string& guess)
//    const on both these string is because these string variables don't want to change, they stay the same
//    when passing string as function, pass it by reference is a good rule, do this by adding the & sign after
// the & signs are needed if paramaters are gonna change, it's just good practice so the main is easier to write
{
    guesses.push_back(guess);
    
}
void Wordle::display() const
//    const on the outside of function says it won't change any of the data in the class
//
{
    
    
//    loop through each guess in the guess vector
    for (auto guess : guesses)
//        auto is for whatever the list is already set, or you could've put string
        
        
        
            //    loop through each letter in the guess
        
        for (int i = 0; i < guess.size(); i++)
        {
            // if matches word - GREEN
            if (guess[i] == word[i])
            {
                cout << "\033[32m" << guess[i] << " " << "\033[0m";
            }
            
            
            // if exists in word - YELLOW
            else if (word.find(guess[i]) != string::npos)
//                this finds the location
            {
                cout << "\033[33m" << guess[i] << " " << "\033[0m";
            }
            
            
            
            else
            {
                cout << "\033[31m" << guess[i] << " " << "\033[0m";
            }
        }
    
    cout << endl << endl;
                        
                    
    
}
bool Wordle::win() const
{
    
    if (guesses.empty())
    {
        return false;
    }
//    when need this if statement if there is no guesses yet
    return word == guesses[guesses.size() - 1];
//    this is returning the first guess I believe from the list
    
}
