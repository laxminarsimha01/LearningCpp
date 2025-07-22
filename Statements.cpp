#include<iostream>
using namespace std;

int main()
{
    // Part - 1: If-else statement
    // Check the number is even or odd with If-else statement
    
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n%2==0) {
        cout << n << " is even" <<endl;
    }
    else {
        cout << n << " is odd" << endl;
    }
    

    
    // Part - 2: Nested if-else statement
    // Check wheather the triangle is isoceles, equilateral or scalene

    int a, b, c;
    cout << "Enter the sides of triangle: ";
    cin >> a>> b>>c;
    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Invalid triangle sides" << endl;
    } 
    else if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "Not a triangle" << endl;
    }
    else
    {
        if (a==b && b==c) {
        cout << "Equilateral triangle" << endl;
    }
        else if (a!=b && b!=c && a!=c) {
        cout << "Scalene triangle" << endl;
    } 
        else {
        cout << "Isoceles triangle" << endl;
        }
    }
    


    
    // Part - 3: Switch statement - 1
    // Building calculator using switch statement
    float num1, num2;
    char operation;
    cout << "ENter the operation with two numbers: ";
    cin >> num1 >> operation >> num2;
    switch (operation)
    {
        case '+': cout << "Sum is: " << num1 + num2 << endl; break;
        case '-': cout << "Difference is: " << num1 - num2 << endl; break;
        case '*': cout << "Product is: " << num1 * num2 << endl; break;
        case '/': 
            if (num2 != 0) {
                cout << "Quotient is: " << num1 / num2 << endl;
            } else {
                cout << "Division by zero is not allowed." << endl;
            }
            break;
        case '%': 
            if (static_cast<int>(num2) != 0) {  // Ensure num2 is an integer for modulus operation
                cout << "Remainder is: " << static_cast<int>(num1) % static_cast<int>(num2) << endl;
            } else {
                cout << "Division by zero is not allowed." << endl;
            }
        default: cout << "Invalid operation" << endl; break;
    }
    
    
}