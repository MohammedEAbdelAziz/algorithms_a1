#include <iostream>
#include "../include/Search.hpp"
using namespace std;


void Search::printMenu(int arr[]) {
    cout << "Array: ";
    for (int i = 0; i < sizeof(arr); i++) {
        cout << arr[i] << " ";
    }
    cout << "Select search Method:" << endl;
    cout << "1. Sequential Search" << endl;
    cout << "2. Recursive Sequential Search" << endl;
    cout << "3. Binary Search" << endl;
    cout << "4. Recursive Binary Search" << endl;
    cout << "0. Exit" << endl;
    cout << "Enter your choice: ";
}