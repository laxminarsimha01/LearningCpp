//MyFirstApp.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;
int main() 
{
    // Part-1 Output messages to the console
    cout << "Hello World!" << endl;
    cout << "This is my first C++ application.\n";
    cout << "Myself,Learning c++ Programming." << endl;
    

    // Part-2
    // Data Types
    // int, float, double, char, string, bool
    // Variables
    double annualSalary;
    cout << "Enter your Annual Salary: ";
    cin >>  annualSalary; // User input for annual salary
    double monthlySalary = annualSalary / 12;
    cout <<"Your Monthly Salary is " << monthlySalary << endl;
    cout << "In 10 Years, your will earn " <<(annualSalary * 10) << endl;

    // char
    char character = 'A';

    // Give your Variable a valuable name for easy understanding
    // Don't use single variable names or dont use special characters
    // Variable names cannot begin with numbers

    // sizeOf operator for data types to know the size in bytes
    cout << "Size of int: " << sizeof(int) << " bytes" << " and max values is "<< INT_MAX<< " min value is " << INT_MIN << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(bool) << " bytes" << endl;
    cout << "Size of string: " << sizeof(string) << " bytes" << endl;  
    
    
    // Data Type Overflow
    int intMax = INT_MAX;
    cout << "Max Value is : " << INT_MAX << endl;
    cout << "Max Value + 1 is : " << intMax+1 << endl; // This will cause overflow
    cout << "Min Value is : " << INT_MIN << endl;
    cout << "Min Value - 1 is : " << intMax-1 << endl; // This will cause underflow

    // Part-3
    // Discussion about ASCII values
    cout << int('c')<< endl; // ASCII value of 'a'
    cout << int('A')<< endl; // ASCII value of 'A'
    cout << int('0')<< endl; // ASCII value of '0'
    cout << char(67)<< endl; // Character for ASCII value 67


    // Ciphering words into ASCII values -- "Extra spaces and New lines dosen't matter"
    string word, decipheredWord;
    cin >> word;
    for (char c : word)
    {
        cout <<int(c) << " "; // Printing ASCII word in 1 line
        decipheredWord += int(c); // Concatenating ASCII values to decipheredWord
    } 

    // Deciphering ASCII values back to characters
    cout << endl << "Deciphered Word: "; // This will print the ASCII values as characters
    for (char c : decipheredWord)
    {
        cout << char(c); // Printing characters from ASCII values
    }

    //system("pause>0"); // Pause the console to see the output

}
//Alt+Ctrl+N to Run the Code