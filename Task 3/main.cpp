#include "./include/HeapSort.hpp"
#include "./include/Heap.hpp"
#include "./include/PriortyQ.hpp"
#include <bits/stdc++.h>
using namespace std;


int main() {
    bool exit = false;
    bool menu = false;
    while (!exit) {
        int choice;
        cout << "Select what you want to do:" << endl;
        cout << "1. Priority Queue" << endl;
        cout << "2. Heap Sort" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice < 0 || choice > 3) {
            cout << "Invalid input. Please enter a valid value." << endl;
            continue;
        } else if (choice == 0) {
            exit = true;
            break;
        }
        else menu = false;
        PriorityQueue pq;
        vector<int> arr;
        while(!menu)  {
            switch (choice) {
                case 1:
                    cout << "Priority Queue Selected." << endl;
                    int c, element, priority;
                    cout << "Priority Queue Operations:" << endl;
                    cout << "1. Insert element with priority" << endl;
                    cout << "2. Extract highest priority element" << endl;
                    cout << "3. Print priority queue" << endl;
                    cout << "4. Exit" << endl;

                    while (true) {
                        cout << "\nEnter your choice: ";
                        cin >> c;

                        switch (c) {
                            case 1:
                                cout << "Enter element: ";
                                cin >> element;
                                cout << "Enter priority: ";
                                cin >> priority;
                                pq.insert(element, priority);
                                cout << "Inserted element " << element << " with priority " << priority << "." << endl;
                                break;

                            case 2:
                                try {
                                    pair<int, int> maxElem = pq.extractMax();
                                    cout << "Extracted element " << maxElem.second
                                        << " with priority " << maxElem.first << "." << endl;
                                } catch (const runtime_error& e) {
                                    cout << e.what() << endl;
                                }
                                break;

                            case 3:
                                cout << "Priority Queue: ";
                                pq.printQueue();
                                break;

                            case 4:
                                cout << "Exiting..." << endl;
                                menu = true;
                                break;
                            default:
                                cout << "Invalid choice! Please try again." << endl;
                        }
                    }
                    menu = true;
                    break;
                case 2:
                    cout << "Heap Sort Selected." << endl;
                    cout << "Enter the number of elements in the array: ";
                    int n;
                    cin >> n;
                    int stuff;
                    cout << "Enter the elements of the array: ";
                    for (int i = 0; i < n; i++) {
                        cin >> stuff;
                        arr.push_back(stuff);
                    }
                    HeapSort hs;
                    hs.heapSort(arr);
                    cout << "Sorted array: ";
                    hs.printArray(arr);
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