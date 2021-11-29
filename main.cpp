/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Vishal Choday
 */
#include "std_lib_facilities.h"

int main()
{
    int numbere_wer_putting;
    //ask user for number.
    cout << "Enter a number:";
    //stores what they put into the variable.
    cin >> numbere_wer_putting;
//calculates if it is even.
    if (0 == numbere_wer_putting % 2)
    {
        cout << "The value " << numbere_wer_putting << " is an even number.\n";
    }
    //if it does not detect that it is even, it will count it as an odd number.
    else
    {
        cout << "The value " << numbere_wer_putting << " is an odd number.\n";
    }
    
    return 0;
}
