#ifndef _PriortyQ_H
#define _PriortyQ_H

#include <bits/stdc++.h>
using namespace std;


class PriorityQueue {
private:
    vector<pair<int, int>> heap;
    void heapifyDown(int index);
    void heapifyUp(int index);
public:
    void insert(int element, int priority);
    pair<int, int> extractMax();
    bool isEmpty() const;
    void printQueue() const;
};

#endif