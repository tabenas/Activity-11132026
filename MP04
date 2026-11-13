
#include <iostream>
using namespace std;

int gcdRecursive(int a, int b);
long long lcm(int a, int b);
bool areCoprime(int a, int b);
void readPair(int &a, int &b);
int readPositiveInteger();

int main() {
    int choice;
    int a, b;

    do {
        cout << "\n===== GCD AND LCM CALCULATOR =====" << endl;
        cout << "1 - Find GCD" << endl;
        cout << "2 - Find LCM" << endl;
        cout << "3 - Check coprime" << endl;
        cout << "4 - Show GCD and LCM" << endl;
        cout << "0 - Exit" << endl;
        cout << "Enter your choice: ";

        cin >> choice;

        if (cin.fail()) {
            cout << "Invalid input. Please enter a number." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        switch (choice) {
            case 1:
                readPair(a, b);
                cout << "GCD: " << gcdRecursive(a, b) << endl;
                break;

            case 2:
                readPair(a, b);
                cout << "LCM: " << lcm(a, b) << endl;
                break;

            case 3:
                readPair(a, b);

                if (areCoprime(a, b)) {
                    cout << a << " and " << b
                         << " are coprime." << endl;
                } else {
                    cout << a << " and " << b
                         << " are not coprime." << endl;
                }
                break;

            case 4:
                readPair(a, b);
                cout << "GCD: " << gcdRecursive(a, b) << endl;
                cout << "LCM: " << lcm(a, b) << endl;
                break;

            case 0:
                cout << "byee:)" << endl;
                break;

            default:
                cout << "Invalid choice. Please select 0 to 4."
                     << endl;
        }

    } while (choice != 0);

    return 0;
}

int gcdRecursive(int a, int b) {
    if (b == 0) {
        return a;
    }

    return gcdRecursive(b, a % b);
}

long long lcm(int a, int b) {
    return (long long)(a / gcdRecursive(a, b)) * b;
}

bool areCoprime(int a, int b) {
    return gcdRecursive(a, b) == 1;
}

void readPair(int &a, int &b) {
    cout << "Enter first integer (1-10000): ";
    a = readPositiveInteger();

    cout << "Enter second integer (1-10000): ";
    b = readPositiveInteger();
}

int readPositiveInteger() {
    int number;

    while (true) {
        cin >> number;

        if (cin.fail()) {
            cout << "Invalid input. Enter an integer from 1 to 10000: ";
            cin.clear();
            cin.ignore(10000, '\n');
        }
        else if (number < 1 || number > 10000) {
            cout << "Out of range. Enter an integer from 1 to 10000: ";
        }
        else {
            return number;
        }
    }
}
