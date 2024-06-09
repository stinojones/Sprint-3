#include <iostream>
// library collection of things for std and other things

#include "wordle.h"

using namespace std;
// saying this helps so we don't have to write std before every cout

int main()
// the main returns as a int kinda like a result
{
    cout << "Welcome to Worlde!" << endl;
    // cout = console out - this is an object which has the ability to use a string
    // std = standard template - you need this to use cout
    // endl means to end the line, \n means new line
    
    
    string secret = "BUST";
    Wordle w(secret);
    
    while (!w.win())
    {
        
        string guess;
    //    this sets the variable string of guess
        cout << "Enter a Guess: ";
        cin >> guess;
    //    arrows point the other way for an input with cin = console in
        w.guess(guess);
        w.display();
        
    }
    
    cout << "Congrats! You Win!" << endl;
    
    


    return 0;
    // this implies that the main ran just fine




}
