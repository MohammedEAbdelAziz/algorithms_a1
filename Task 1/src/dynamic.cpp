#include "../include/Fibonacci.hpp"
#include <bits/stdc++.h>
using namespace std;

int Fibonacci::dynamic(int n) {
    if (n <= 1)
        return n;

    vector<int> fib(n + 1);
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    return fib[n];
}
