#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int digitSum(int n) {
    if (n == 0) return 0;
    return n % 10 + digitSum(n / 10);
}

int digitCount(int n) {
    if (n < 10) return 1;
    return 1 + digitCount(n / 10);
}

int reverseDigits(int n, int accumulator = 0) {
    if (n == 0) return accumulator;
    return reverseDigits(n / 10, accumulator * 10 + n % 10);
}

bool isPalindrome(int n) {
    return n == reverseDigits(n);
}

bool readInteger(const string& prompt, int minimum, int maximum, int& value) {
    string line;
    char extra;

    while (true) {
        cout << prompt;
        if (!getline(cin, line)) return false;

        istringstream input(line);
        if ((input >> value) && !(input >> extra) &&
            value >= minimum && value <= maximum) {
            return true;
        }

        cout << "Invalid input. Enter a whole number from "
             << minimum << " to " << maximum << ".\n";
    }
}

void displayMenu() {
    cout << "\nNUMBER ANALYSIS SYSTEM\n"
         << "1 - Sum of digits\n"
         << "2 - Count digits\n"
         << "3 - Reverse digits\n"
         << "4 - Check palindrome\n"
         << "0 - Exit\n";
}

void displayResult(int choice, int number) {
    switch (choice) {
        case 1:
            cout << "Sum = " << digitSum(number) << '\n';
            break;
        case 2:
            cout << "Digits = " << digitCount(number) << '\n';
            break;
        case 3:
            cout << "Reverse = " << reverseDigits(number) << '\n';
            break;
        case 4:
            cout << "Palindrome = "
                 << (isPalindrome(number) ? "Yes" : "No") << '\n';
            break;
    }
}

int main() {
    int choice, number;

    while (true) {
        displayMenu();
        if (!readInteger("Enter your choice: ", 0, 4, choice)) break;

        if (choice == 0) {
            cout << "Goodbye!\n";
            break;
        }

        if (!readInteger("Enter a number (0-999999): ",
                         0, 999999, number)) break;

        displayResult(choice, number);
    }

    return 0;
}
