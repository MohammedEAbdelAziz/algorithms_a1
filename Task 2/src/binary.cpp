#include "../include/Search.hpp"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int Search::binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;


        if (arr[mid] == target) {
            return mid;
        }

        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}
