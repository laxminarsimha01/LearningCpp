#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    // Part -1: Print a rectangle / square of asterisks
    int cols, rows;
    string shape;
    cout << "Enter the height (rows) of the rectangle: ";
    cin >> rows;
    cout << "Enter the width (columns) of the rectangle: ";
    cin >> cols;
    cout << "Enter the shape: ";
    cin >> shape;
    
    for (int i=0; i< rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << setw(3) << shape;
        cout << endl;
    }

    // Part -2: Print a right-angles triangle
    int height;
    cout << "Enter the height of the triangle: ";
    cin >> height;
    for (int i=1; i<=height; i++) {
        for (int j=1; j<=i; j++)
            cout << setw(3) << shape;
        cout << endl;
    }

    // Part -3: Print an inverted right-angled triangle
    cout << "Enter the height of inverted triangle: ";
    cin >> height;
    for (int i=height; i>=1; i--) {
        for ( int j=1; j<=i; j++)
            cout << setw(3) << shape;
        cout << endl;
    }

    // Part -4: Print a pyramid
    cout << "Enter the height of the pyramid: ";
    cin >> height;
    for (int i=1; i<=height; i++)
    {
        for (int k=height-i; k>0; k--)
        {
            cout << " ";
        }
        for (int j=1; j<=i; j++)
        {
            cout << shape << " ";
        }
        cout << endl;
    }

    // Part -5: Print an inverted pyramid
    cout << "Enter the height of the inverted pyramid: ";
    cin >> height;
    for (int i=height; i>=1; i--)
    {
        for (int k = 0; k<height-i; k++)
            cout << " ";
        for (int j=1; j<=i; j++)
            cout << shape << " ";
        cout << endl;
    }

}