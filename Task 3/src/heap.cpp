#include <bits/stdc++.h>
#include "../include/Heap.hpp"
using namespace std;


void Heap::heapifyDown(int index) {
    int largest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;

    if (left < heap.size() && heap[left] > heap[largest]) {
        largest = left;
    }
    if (right < heap.size() && heap[right] > heap[largest]) {
        largest = right;
    }
    if (largest != index) {
        swap(heap[index], heap[largest]);
        heapifyDown(largest);
    }
}

void Heap::heapifyUp(int index) {
    while (index > 0) {
        int parent = (index - 1) / 2;
        if (heap[index] > heap[parent]) {
            swap(heap[index], heap[parent]);
            index = parent;
        } else {
            break;
        }
    }
}

void Heap::buildHeap(const vector<int>& arr) {
    heap = arr;
    for (int i = (heap.size() / 2) - 1; i >= 0; --i) {
        heapifyDown(i);
    }
}

int Heap::extractMax() {
    if (heap.empty()) {
        throw out_of_range("Heap is empty");
    }
    int maxElement = heap[0];
    heap[0] = heap.back();
    heap.pop_back();
    heapifyDown(0);
    return maxElement;
}

int Heap::extractMin() {
    if (heap.empty()) {
        throw out_of_range("Heap is empty");
    }
    int minElement = heap[0];
    for (int i = 1; i < heap.size(); ++i) {
        if (heap[i] < minElement) {
            minElement = heap[i];
        }
    }
    return minElement;
}

int Heap::size() {
    return heap.size();
}