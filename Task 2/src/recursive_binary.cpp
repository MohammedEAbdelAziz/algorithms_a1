#include "../include/Search.hpp"
#include <bits/stdc++.h>
using namespace std;



int Search::recursiveBinary(int arr[], int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x) {
            return mid;
        }
        if (arr[mid] > x) {
            return recursiveBinary(arr, l, mid - 1, x);
        }
        return recursiveBinary(arr, mid + 1, r, x);
    }
    return -1;
}
