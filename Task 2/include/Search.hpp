#ifndef _Search_hpp_
#define _Search_hpp_

class Search {
    public:
        int binarySearch(int arr[], int n, int target);
        int recursiveBinary(int arr[], int l, int r, int x);
        int sequentialSearch(int arr[], int n, int x);
        int recursiveSearch(int arr[], int target, int n, int index = 0);
        void printMenu(int arr[]);
};

#endif