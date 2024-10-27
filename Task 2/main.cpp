#include <bits/stdc++.h>
using namespace std;

#include "./include/Search.hpp"



int main(){
    bool exit = false;
    bool menu = false;
    Search search;
    while (!exit) {
        cout << "Enter the number of items in the array: ";
        int nItems;
        cin >> nItems;
        if (nItems < 0) {
            cout << "Invalid input. Please enter a valid value." << endl;
            continue;
        }
        int arr[nItems];
        cout << "Enter the elements of the array: ";
        for (int i = 0; i < nItems; i++) {
            cin >> arr[i];
        }
        int choice;
        search.printMenu(arr);
        cin >> choice;
        if (choice < 0 || choice > 4) {
            cout << "Invalid input. Please enter a valid value." << endl;
            continue;
        } else if (choice == 0) {
            exit = true;
            break;
        }
        else menu = false;
        int target;
        cout << "Enter the target value: ";
        cin >> target;
        int index;
        while(!menu)  {
            switch (choice) {
                case 1:
                    cout << "Sequential Search method selected." << endl;
                    index = search.sequentialSearch(arr, nItems, target);
                    if (index != -1) {
                        cout << "Target " << target << " found at index " << index << "." << endl;
                    } else {
                        cout << "Target " << target << " not found." << endl;
                    }
                    menu = true;
                    break;
                case 2:
                    cout << "Recursive Sequential Search method selected." << endl;
                    index = search.recursiveSearch(arr, nItems, target);
                    if (index != -1) {
                        cout << "Target " << target << " found at index " << index << "." << endl;
                    } else {
                        cout << "Target " << target << " not found." << endl;
                    }
                    menu = true;
                    break;
                case 3:
                    cout << "Binary Search method selected." << endl;
                    index = search.binarySearch(arr, nItems, target);
                    if (index != -1) {
                        cout << "Target " << target << " found at index " << index << "." << endl;
                    } else {
                        cout << "Target " << target << " not found." << endl;
                    }
                    menu = true;
                    break;
                case 4:
                    cout << "Recursive Binary Search method selected." << endl;
                    index = search.recursiveBinary(arr, 0, nItems - 1, target);
                    if (index != -1) {
                        cout << "Target " << target << " found at index " << index << "." << endl;
                    } else {
                        cout << "Target " << target << " not found." << endl;
                    }
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
