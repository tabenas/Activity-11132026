
#include <iostream>
using namespace std;

long long factorial(long long num){
    if (num == 0 || num == 1){
        return 1;
    }

    return num * factorial(num - 1);
}

long long sum(long long num2){
    if (num2 == 0){
        return 0;
    }
    else{
        return num2 + sum(num2 - 1);
    }
}

long long squareSum(long long num3){
    if (num3 == 0){
        return 0;
    }
    else{
        return (num3 * num3) + squareSum(num3 - 1);
    }
}

long long compare(long long num4){
    long long factorialResult = factorial(num4);
    long long sumResult = sum(num4);

    cout << "FACTORIAL = " << factorialResult << endl;
    cout << "SUM = " << sumResult << endl;

    if(factorialResult > sumResult){
        cout << "FACTORIAL GREATER";
    }
    else if(factorialResult < sumResult){
        cout << "SUM GREATER";
    }
    else{
        cout << "EQUAL";
    }

    return 0;
}

int main()
{
    int selectionNum;
    long long num;
    long long num2;
    long long num3;
    long long num4;

    returnPoint:
    cout << "=========== MENU ===========\n";
    cout << "[1]-FACTORIAL n!\n";
    cout << "[2]-SUM 1 + 2 +...+ n\n";
    cout << "[3]-SUM OF SQUARES 1² +...+ n²\n";
    cout << "[4]-COMPARE FACTORIAL AND SUM\n";
    cout << "[0]-EXIT\n\nSELECTION: ";

    if (!(cin >> selectionNum)){
        cout << "INVALID INPUT. PLEASE ENTER A VALID MENU OPTION.\n\n";
        cin.clear();
        cin.ignore(10000, '\n');
        goto returnPoint;
    }

    if(selectionNum == 1){
        cout << "PLEASE ENTER A NUMBER FROM 0-12: ";
        cin >> num;

        if(num < 0 || num > 12){
            cout << "INVALID NUMBER. PLEASE ENTER 0-12.\n\n";
            goto returnPoint;
        }

        cout << "FACTORIAL " << num << "! = " << factorial(num) << "\n\n\n";
        goto returnPoint;
    }

    if(selectionNum == 2){
        cout << "SUM (1 + 2 +...+ n)\nPLEASE ENTER A NUMBER FROM 0-12: ";
        cin >> num2;

        if(num2 < 0 || num2 > 12){
            cout << "INVALID NUMBER. PLEASE ENTER 0-12.\n\n";
            goto returnPoint;
        }

        cout << "SUM = " << sum(num2) << "\n\n\n";
        goto returnPoint;
    }

    if(selectionNum == 3){
        cout << "SUM OF SQUARES (1² +...+n²)\nPLEASE ENTER A NUMBER FROM 0-12: ";
        cin >> num3;

        if(num3 < 0 || num3 > 12){
            cout << "INVALID NUMBER. PLEASE ENTER 0-12.\n\n";
            goto returnPoint;
        }

        cout << "SUM OF SQUARES = " << squareSum(num3) << "\n\n\n";
        goto returnPoint;
    }

    if(selectionNum == 4){
        cout << "COMPARISON\nPLEASE ENTER A NUMBER FROM 0-12: ";
        cin >> num4;

        if(num4 < 0 || num4 > 12){
            cout << "INVALID NUMBER. PLEASE ENTER 0-12.\n\n";
            goto returnPoint;
        }

        compare(num4);
        cout << "\n\n";
        goto returnPoint;
    }

    if(selectionNum == 0){
        cout << "PROGRAM EXITED.\n";
        return 0;
    }

    cout << "INVALID SELECTION. PLEASE CHOOSE 0-4.\n\n";
    goto returnPoint;
}
