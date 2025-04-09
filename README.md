#include <iostream>
using namespace std;

int main() {
    // Introduction
    cout << "Simple Subtraction Operation in C++" << endl;
    cout << "This program performs a subtraction using the numbers: 45, 68, 4, and 6." << endl << endl;

    // Declare variables
    int a = 45;
    int b = 68;
    int c = 4;
    int d = 6;

    // Perform subtraction
    int result = a - b - c - d;

    // Display result
    cout << "Subtraction (45 - 68 - 4 - 6) = " << result << endl;

    // Summary
    cout << "\nSummary:" << endl;
    cout << "We subtracted the numbers 68, 4, and 6 from 45." << endl;
    cout << "The final result after performing the subtraction was: " << result << endl;

    return 0;
}
