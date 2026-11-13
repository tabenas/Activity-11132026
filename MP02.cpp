#include <iostream>
using namespace std;


  int fibonacci(int n) {
      if (n==0) {
          return 0;
      }
      else if (n==1) {
          return 1;
      }
      else { 
          return fibonacci(n-1) + fibonacci(n-2);
  }

void printSequence(int n) {
    cout << "Sequence= ";
    
    for(int i=0;i<n;i++) {
        cout << fibonacci << " ";
        }
        
        cout << endl;
        
}

void countEven(int n) {
    int count = 0;
    
    for (int i=0;i<n;i++) {
        if (fibonacci%2==0) {
            count++;
        }
    }
    
    cout << "Even count= " << count << endl;
}

void sumSequence(int n) {
    int sum=0;
    
    for (int=0;i<n;i++) {
        sum=sum+fibonacci;
    }
    
    cout << "Sum= " << sum << endl;
}

int main() {
    int choice n;
    
    do {
        cout << "Fibonacci Sequence Analyzer" << endl;
        cout << "1-Display first n Fibonacci terms" << endl;
        cout << "2-Find Fibonacci term and index n" << endl;
        cout << "3-Count even terms among first n" << endl;
        cout << "4-Sum first n Fibonacci terms" << endl;
        cout << "0-Exit" << endl;
        
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            
         case 1;
            cout << "Enter number of terms: ";
            cin >> n;
            
            if (n>=1&&n<=20) {
                printSequence;
            }
            else {
                cout << "Invalid number! Please enter 1 to 20." << endl;
            }
         case 2;
            cout << "Enter index: ";
            cin >> n;
            
            if (n>=0&&n<=20) {
                cout << "F(" <<n<< ") = " << fibonacci << endl;
            }
            else {
                cout << "Invalid index! PLease enter 0 to 20." << endl;
            }
            break;
         case 3:
            cout << "Enter number of terms: ";
            cin >> n;
            
            if (n>=1&&n<=20) {
                countEven;
            }
            else {
                cout << "Invalid number! PLease enter 1 to 20." << endl;
            }
            break;
            
         case 4:
            cout << "Enter number of terms: ";
            cin >> n;
            
            if (n>1&&n<=20) {
                sumSequence;
            }
            else {
                cout << "Invalid number! Please enter 1 to 20." << endl;
            }
            break;
            
         case 0:
            cout << "Program exited." << endl;
            break;
            
         default:
           cout << "Invalid choice! Try again." << endl;
           
        }
    } while (choice 1=0);
    
    return 0;
}