#include "../include/Search.hpp"
#include <bits/stdc++.h>
using namespace std;



int Search::sequentialSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}