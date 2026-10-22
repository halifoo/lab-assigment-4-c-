
#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    if (num1 > num2) {
        cout << "Larger number is: " << num1;
    } else if (num2 > num1) {
        cout << "Larger number is: " << num2;
    } else {
        cout << "Both numbers are equal.";
    }

    return 0;
}

