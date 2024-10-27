#include "../include/Fibonacci.hpp"
#include <bits/stdc++.h>
using namespace std;

void Fibonacci::printMenu() {
    cout << "Select Fibonacci Calculation Method:" << endl;
    cout << "1. Recursion" << endl;
    cout << "2. Divide and Conquer" << endl;
    cout << "3. Dynamic Programming" << endl;
    cout << "0. Exit" << endl;
    cout << "Enter your choice: ";
}