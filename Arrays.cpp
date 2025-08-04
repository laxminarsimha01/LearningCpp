#include <iostream>
using namespace std;

int main()
{
    int A[5]; // Array declaration
    A[0] = 5;
    A[1] = 10;
    A[2] = 15;
    A[3] = 20;
    A[4] = 25;

    cout << size(A) << endl; // Output the size of the array
    cout << sizeof(A) << endl; // Output the size in bytes of the array

    cout << A[1] << endl;
    printf("%d\n", A[2]); // Using printf to print the third element

    int B[3] = {1, 2, 3}; // Array initialization
    int C[10] = {4,5,2,7,8,3,1,1}; // Array initialization without size

    for (int i: C)
        cout << i << " "; // Print elements of array C

    return 0;
}