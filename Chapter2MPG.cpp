/*
Program: Chapter 2 Exercise: Distance Per Tank of Gas (ExtraCredit)
Programmer: Benjamin Clarke
Date:09/06/2025
Project Requirements: A car holds 15 gallons of gasoline and can travel 375 miles before refueling. Write a program that calculates the number of miles per gallon the car gets. Display the result on the screen.
Once you have coded this and placed in your main branch, revise your code so that the user can enter the number of gallons and the miles driven.
*/

#include <iostream>
using namespace std;

int main()
{
    int gas_gal, miles, MPG;

        gas_gal = 15;
        miles = 375;

        MPG = miles / gas_gal;

        cout << "The MPG of a car that goes " 
            << miles << " miles with " 
            << gas_gal << " gallons of gasoline is: " 
            << MPG 
            << endl;
}

