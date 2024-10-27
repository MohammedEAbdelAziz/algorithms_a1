#include "../include/Fibonacci.hpp"
#include <bits/stdc++.h>
using namespace std;


int Fibonacci::recursion(int n) {
    if (n <= 2) {
        return 1;
    }
    return recursion(n - 2) + recursion(n - 1);
}
