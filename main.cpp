//  This is a program that takes a user string input and then displays the ICAO words for the individual letters
//
//  Created by moongazer07
//  Copyright none
//

#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>

using namespace std;

int main()
{
    string userinput;   // Declare user input string
    
    cout<<"Enter string: ";         // Prompt for string
    cin>>userinput;
    cout<<"Phonetic version is: ";  // Display statement beginning
    
    int count;                      // Declare counting integer
    for(count = 0; count <=20; count++) // Loop to go through string array
    {
        switch(userinput[count])    // Switch statement to determine output for each character
        {
            case 'A' :
            case 'a' : cout<<"always ";
                break;
            case 'B' :
            case 'b' : cout<<"be ";
                break;
            case 'C' :
            case 'c' : cout<<"changing ";
                break;
            case 'D' :
            case 'd' : cout<<"deny ";
                break;
            case 'E' :
            case 'e' : cout<<"everything ";
                break;
            case 'F' :
            case 'f' : cout<<"forever ";
                break;
            case 'G' :
            case 'g' : cout<<"gonna ";
                break;
            case 'H' :
            case 'h' : cout<<"how ";
                break;
            case 'I' :
            case 'i' : cout<<"Inside ";
                break;
            case 'J' :
            case 'j' : cout<<"just ";
                break;
            case 'K' :
            case 'k' : cout<<"know ";
                break;
            case 'L' :
            case 'l' : cout<<"lie ";
                break;
            case 'M' :
            case 'm' : cout<<"move ";
                break;
            case 'N' :
            case 'n' : cout<<"Never ";
                break;
            case 'O' :
            case 'o' : cout<<"other ";
                break;
            case 'P' :
            case 'p' : cout<<"play ";
                break;
            case 'Q' :
            case 'q' : cout<<"question ";
                break;
            case 'R' :
            case 'r' : cout<<"rest ";
                break;
            case 'S' :
            case 's' : cout<<"So ";
                break;
            case 'T' :
            case 't' : cout<<"Together ";
                break;
            case 'U' :
            case 'u' : cout<<"understand ";
                break;
            case 'V' :
            case 'v' : cout<<"venture ";
                break;
            case 'W' :
            case 'w' : cout<<"We're ";
                break;
            case 'X' :
            case 'x' : cout<<"xternal ";
                break;
            case 'Y' :
            case 'y' : cout<<"you ";
                break;
            case 'Z' :
            case 'z' : cout<<"zink ";
                break;
        }
        
        if(userinput[count] == '\n')    //triggers ending loop condition
            count = 25;
    }
    
    getchar();
    
    return 0;
}
