#include <iostream>
using namespace std;

int main()
{
    // Part-1: While loop - 1
    // Print all numbers from 100-500 which are divisible by 3 and 5

    int i = 100;
    while (i<=500) {
        if (i%3==0 && i%5==0)
            cout << i << " ";
        i++;
    }
    

    // Part-2: While loop - 2
    // Count the number of digits in a number

    int num, count = 0;
    cout << "Enter a number: ";
    cin >> num;
    if (num == 0)
    {
        cout << "Entered number ios 0" << endl;
        count = 1;
    }
    else if (num > 0)
    {
    
        while (num>0) {
            num = num/10;
            count++;

        }
    }
    cout << "Number of digits of a number is: " << count << endl;
    

    
    // Part - 3: While loop - 3
    // Reverse a number
    int num, reversedNum=0;
    cout << "Enter a number: ";
    cin >> num;
    if (num<=0)
        cout << "The number entered is not valid" << endl;
    else {
        while (num>0) {
            int digit = num % 10;
            reversedNum = reversedNum *10 + digit;
            num = num / 10;
        }
    }
    cout << "Reversed number is: " << reversedNum << endl;
    

    // Part - 4: Do WHile loop
    // Validate the pin from the user
    
    int pin, correctPin = 1234, errorCount = 0;

    do {
        cout << "ENter the pin: ";
        cin >> pin;
        if (pin != correctPin) {
            errorCount++;
            cout << "Incorrect pin. You have " << (3 - errorCount) << " attempts left." << endl;
        } else {
            cout << "Pin accepted!" << endl;
        }

    } while (pin != correctPin && errorCount < 3);
    

    // Part - 5: For loop
    // Calculate the factorial of a number
    int num, factorial =1;
    cout << "ENter a  number to calculate the factorial: ";
    cin >> num;
    if (num < 0)
        cout << "Number entered is invalid" << endl;
    else if (num == 0)
        cout << "Factorial of 0 is 1" << endl;
    else {
        for (int i=1; i<=num; i++) 
            factorial *= i;
        cout << "Factorial of  " << num << " is: " << factorial << endl;
    }
    
}    