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


int main()
{
    int selectionNum;
    int num;
    int num2;
    int enter;
    returnPoint:
    cout << "=========== MENU ===========\n[1]-FACTORIAL n!\n[2]-SUM 1 + 2 +...+ n\n[3]-SUM OF SQUARES 1² +...+ n²\n[4]-COMPARE FACTORIAL AND SUM\n[0]-EXIT\n\nSELECTION: ";
    cin >> selectionNum;
    if(selectionNum == 1){
        cout << "FACTORIAL n!\nPLEASE ENTER A NUMBER FROM 0-12: ";
        cin >> num;
        cout << "FACTORIAL " << num << "! = " << factorial(num) << "\n\n\n";
        goto returnPoint;
    }
    if(selectionNum == 2){
        cout << "SUM (1 + 2 +...+ n)\nPLEASE ENTER A NUMBER FROM 0-12: ";
        cin >> num2;
        cout << "SUM = " << sum(num2) << "\n\n\n";
    }
    if(selectionNum == 3){
        cout << "SUM OF SQUARES (1² +...+n²)\nPLEASE ENTER A NUMBER FROM 0-12: ";
    }
    if(selectionNum == 4){
        cout << "COMPARE FACTORIAL AND SUM\nPLEASE ENTER A NUMBER FROM 0-12: ";
    }
    if(selectionNum == 0){
        return 0;
    }
}
