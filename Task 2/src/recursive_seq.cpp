#include "../include/Search.hpp"
#include <iostream>
#include <vector>
using namespace std;


int Search::recursiveSearch(int arr[], int target, int n, int index = 0) {
    if (index >= n) {
        return -1;
    }
    if (arr[index] == target) {
        return index;
    }
    return recursiveSearch(arr, target, n, index + 1);
}
