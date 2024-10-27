#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

#include "../include/Heap.hpp"
#include "../include/HeapSort.hpp"

void HeapSort::heapSort(vector<int>& arr) {
    Heap heap;
    heap.buildHeap(arr);
    for (int i = arr.size() - 1; i >= 0; --i) {
        arr[i] = heap.extractMax();
    }
}


void HeapSort::printArray(const vector<int>& arr) {
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;
}

