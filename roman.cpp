/*********************************
* Author: Arul Srivastava        *
* Class: CSCI121-00N, Summer 2021*
* Assignment: Assignment 1       *
* Due Date: June 7, 2021         *
* Last Modified: June 6, 2021    *
*********************************/

#include <iostream>
#include <string>

using namespace std;

/************************************************
 * Function: GetRoman                           *
 * Author: Arul Srivastava                      *
 * Purpose: Convert digits into roman numerals  *
 * depending on positon                         *
 * Parameters: myDigit and positon              *
 * Return Value: Roman numerals of the digit    * 
 * in a given positon parameter                 *
 * Last Modified: June 6, 2021                  *
 ************************************************/

string GetRoman(int myDigit, int position)
{
    string ReturnValue = "";
    if (position == 4)
    {
        if (myDigit == 1)
            ReturnValue = "I";
        else if (myDigit == 2)
            ReturnValue = "II";
        else if (myDigit == 3)
            ReturnValue = "III";
        else if (myDigit == 4)
            ReturnValue = "IV";
        else if (myDigit == 5)
            ReturnValue = "V";
        else if (myDigit == 6)
            ReturnValue = "VI";
        else if (myDigit == 7)
            ReturnValue = "VII";
        else if (myDigit == 8)
            ReturnValue = "VIII";
        else if (myDigit == 9)
            ReturnValue = "IX";
    }
    else if (position == 3)
    {
        if (myDigit == 1)
            ReturnValue = "X";
        else if (myDigit == 2)
            ReturnValue = "XX";
        else if (myDigit == 3)
            ReturnValue = "XXX";
        else if (myDigit == 4)
            ReturnValue = "XL";
        else if (myDigit == 5)
            ReturnValue = "L";
        else if (myDigit == 6)
            ReturnValue = "LX";
        else if (myDigit == 7)
            ReturnValue = "LXX";
        else if (myDigit == 8)
            ReturnValue = "LXXX";
        else if (myDigit == 9)
            ReturnValue = "XC";
    }
    else if (position == 2)
    {
        if (myDigit == 1)
            ReturnValue = "C";
        else if (myDigit == 2)
            ReturnValue = "CC";
        else if (myDigit == 3)
            ReturnValue = "CCC";
        else if (myDigit == 4)
            ReturnValue = "CD";
        else if (myDigit == 5)
            ReturnValue = "D";
        else if (myDigit == 6)
            ReturnValue = "DC";
        else if (myDigit == 7)
            ReturnValue = "DCC";
        else if (myDigit == 8)
            ReturnValue = "DCCC";
        else if (myDigit == 9)
            ReturnValue = "CM";
    }
    else
    {
        if (myDigit == 1)
            ReturnValue = "M";
        else if (myDigit == 2)
            ReturnValue = "MM";
        else if (myDigit == 3)
            ReturnValue = "MMM";
    }
    return ReturnValue;
}

/************************************************
 * Function: GetRomanNumeral                    *
 * Author: Arul Srivastava                      *
 * Purpose: Gives roman numerals based of year  *
 * Parameters: year                             *
 * Return Value: Roman numerals of the given    * 
 * year                                         *
 * Last Modified: June 6, 2021                  *
 ************************************************/

string GetRomanNumeral(int year)
{
    string roman = "";
    int FirstDig = year / 1000;
    roman = GetRoman(FirstDig, 1);
    int SecondDig = (year % 1000) / 100;
    roman += GetRoman(SecondDig, 2);
    int ThirdDig = (year % 100) / 10;
    roman += GetRoman(ThirdDig, 3);
    int FourthDig = (year % 10);
    roman += GetRoman(FourthDig, 4);
    return roman;
}
int main()
{
    int year;
    string roman = "";
    cout << "Please enter a year that is between 1000 and 3000 into convert to roman numerals" << endl;
    cin >> year;
    cout << "Enter digit=" << year << endl;
    if (year < 1000 || year > 3000)
    {
        cout << "Please enter valid number" << endl;
        return -1;
    }
    roman = GetRomanNumeral(year);
    cout << "Roman numeral for the year " << year << " is " << roman << endl;
    return 0;
}
