//  This is a program that takes a user string input and then displays the ICAO words for the individual letters
//
//  Created by Milan Patel on 10/23/18.
//  Copyright © 2018 Milan Patel. All rights reserved.
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
            case 'a' : cout<<"Alpha ";
                break;
            case 'B' :
            case 'b' : cout<<"Bravo ";
                break;
            case 'C' :
            case 'c' : cout<<"Charlie ";
                break;
            case 'D' :
            case 'd' : cout<<"Delta ";
                break;
            case 'E' :
            case 'e' : cout<<"Echo ";
                break;
            case 'F' :
            case 'f' : cout<<"Foxtrot ";
                break;
            case 'G' :
            case 'g' : cout<<"Golf ";
                break;
            case 'H' :
            case 'h' : cout<<"Hotel ";
                break;
            case 'I' :
            case 'i' : cout<<"India ";
                break;
            case 'J' :
            case 'j' : cout<<"Juliet ";
                break;
            case 'K' :
            case 'k' : cout<<"Kilo ";
                break;
            case 'L' :
            case 'l' : cout<<"Lima ";
                break;
            case 'M' :
            case 'm' : cout<<"Mike ";
                break;
            case 'N' :
            case 'n' : cout<<"November ";
                break;
            case 'O' :
            case 'o' : cout<<"Oscar ";
                break;
            case 'P' :
            case 'p' : cout<<"Papa ";
                break;
            case 'Q' :
            case 'q' : cout<<"Quebec ";
                break;
            case 'R' :
            case 'r' : cout<<"Romeo ";
                break;
            case 'S' :
            case 's' : cout<<"Sierra ";
                break;
            case 'T' :
            case 't' : cout<<"Tango ";
                break;
            case 'U' :
            case 'u' : cout<<"Uniform ";
                break;
            case 'V' :
            case 'v' : cout<<"Victor ";
                break;
            case 'W' :
            case 'w' : cout<<"Whiskey ";
                break;
            case 'X' :
            case 'x' : cout<<"X-ray ";
                break;
            case 'Y' :
            case 'y' : cout<<"Yankee ";
                break;
            case 'Z' :
            case 'z' : cout<<"Zulu ";
                break;
        }
        
        if(userinput[count] == '\n')    //triggers ending loop condition
            count = 25;
    }
    
    getchar();
    
    return 0;
}
