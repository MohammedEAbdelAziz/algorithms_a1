#include "./include/Fibonacci.hpp"
#include <bits/stdc++.h>
using namespace std;

int main() {
    bool exit = false;
    bool menu = false;
    Fibonacci fib;
    while (!exit) {
        int choice;
        fib.printMenu();
        cin >> choice;
        if (choice < 0 || choice > 3) {
            cout << "Invalid input. Please enter a valid value." << endl;
            continue;
        } else if (choice == 0) {
            exit = true;
            break;
        }
        else menu = false;
        int n;
        cout << "Enter the value of n: ";
        cin >> n;
        if (n < 0) {
            cout << "Invalid input. Please enter a valid value." << endl;
            continue;
        }
        while(!menu)  {
            switch (choice) {
                case 1:
                    cout << "Recursion method selected." << endl;
                    cout << "Fibonacci(" << n << ") = " << fib.recursion(n) << endl;
                    menu = true;
                    break;
                case 2:
                    cout << "Divide and Conquer method selected." << endl;
                    cout << "Fibonacci(" << n << ") = " << fib.dnc(n) << endl;
                    menu = true;
                    break;
                case 3:
                    cout << "Dynamic Programming method selected." << endl;
                    cout << "Fibonacci(" << n << ") = " << fib.dynamic(n) << endl;
                    menu = true;
                    break;
                default:
                    cout << "Invalid choice." << endl;
                    menu = true;
                    break;
            }
        }
    }
    system("pause");
    return 0;
}
