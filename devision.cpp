#include <iostream>
using namespace std;
int main() {
    cout << "Simple Division Operation in C++" << endl;
    cout << "This program performs division using the numbers: 45, 68, 4, and 6." << endl;
    cout << "We will divide the numbers in the following order: (((68 / 45) / 4) / 6)" << endl << endl;

    double a = 45;
    double b = 68;
    double c = 4;
    double d = 6;
    double result = (((b / a) / c) / d);
    cout << "Division (((68 / 45) / 4) / 6) = " << result << endl;
    cout << "\nSummary:" << endl;
    cout << "We divided 68 by 45, then divided that result by 4, and then by 6." << endl;
    cout << "The final result after performing the division operations was: " << result << endl;

    return 0;
}

