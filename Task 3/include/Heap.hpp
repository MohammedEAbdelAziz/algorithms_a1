#include <bits/stdc++.h>
#ifndef _Heap_H
#define _Heap_H
using namespace std;


class Heap {
    private:
    vector<int> heap;
    void heapifyDown(int index);
    void heapifyUp(int index);
public:
    void buildHeap(const vector<int>& arr);
    int extractMax();
    int extractMin();
    int size();
};
#endif