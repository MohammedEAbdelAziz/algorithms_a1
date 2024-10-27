#include "../include/PriortyQ.hpp"
#include <bits/stdc++.h>
using namespace std;


void PriorityQueue::heapifyDown(int index) {
    int largest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;


    if (left < heap.size() && heap[left].first > heap[largest].first) {
        largest = left;
    }

    if (right < heap.size() && heap[right].first > heap[largest].first) {
        largest = right;
    }

    if (largest != index) {
        swap(heap[index], heap[largest]);
        heapifyDown(largest);
    }
}
void PriorityQueue::heapifyUp(int index) {
    int parent = (index - 1) / 2;

    if (index > 0 && heap[index].first > heap[parent].first) {
        swap(heap[index], heap[parent]);
        heapifyUp(parent);
    }
}

void PriorityQueue::insert(int element, int priority) {
    heap.push_back({priority, element});
    heapifyUp(heap.size() - 1);
}
pair<int, int> PriorityQueue::extractMax() {
    if (heap.empty()) {
        throw runtime_error("Priority queue is empty.");
    }
    pair<int, int> maxElement = heap[0];
    heap[0] = heap.back();
    heap.pop_back();
    heapifyDown(0);
    return maxElement;
}
bool PriorityQueue::isEmpty() const {
    return heap.empty();
}
void PriorityQueue::printQueue() const {
    for (const auto& p : heap) {
        cout << "(Element: " << p.second << ", Priority: " << p.first << ") ";
    }
    cout << endl;
}
