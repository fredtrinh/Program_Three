/*

DESCRIPTION:    PROGRAM THREE

CLASS:          COSC 1436.3S1

AUTHOR:         FRED TRINH

DATE:           15 JUNE 2017

*/

#include <iostream>

using namespace std;

void main ()

{
    short firstWholeNumber;
    short secondWholeNumber;
    short thirdWholeNumber;
    
    
    cout << "Enter a whole number:" << endl;
    cin >> firstWholeNumber;
    cout << "Enter a second whole number:" << endl;
    cin >> secondWholeNumber;
    
    
    cout << endl;
    cout << endl;
    
    
    if (firstWholeNumber > secondWholeNumber)
        cout << firstWholeNumber << " is larger than " << secondWholeNumber << endl;
    if (secondWholeNumber > firstWholeNumber)
        cout << secondWholeNumber << " is larger than " << firstWholeNumber << endl;
    if (firstWholeNumber == secondWholeNumber)
        cout << "These numbers are the same." << endl;
    if (firstWholeNumber < 0)
        cout << firstWholeNumber << " is a negative number." << endl;
    else
        cout << firstWholeNumber << " is a positive number." << endl;
    if (secondWholeNumber < 0)
        cout << secondWholeNumber << " is a negative number." << endl;
    else
        cout << secondWholeNumber << " is a positive number." << endl;
    
    
    cout << endl;
    cout << endl;
    
    
    cout << "Enter a whole number from 0 to 9:" << endl;
    cin >> thirdWholeNumber;
    
    
    cout << endl;
    cout << endl;
    
    
    switch (thirdWholeNumber)
    {
        case 0:
            cout << "ZERO" << endl;
            break;
        case 1:
            cout << "ONE" << endl;
            break;
        case 2:
            cout << "TWO" << endl;
            break;
        case 3:
            cout << "THREE" << endl;
            break;
        case 4:
            cout << "FOUR" << endl;
            break;
        case 5:
            cout << "FIVE" << endl;
            break;
        case 6:
            cout << "SIX" << endl;
            break;
        case 7:
            cout << "SEVEN" << endl;
            break;
        case 8:
            cout << "EIGHT" << endl;
            break;
        case 9:
            cout << "NINE" << endl;
            break;
        default:
            cout << "Number out of range." << endl;
            break;
    }
}
