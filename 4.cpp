#include <iostream>

long long fib(int n) {
    if (n <= 0) { return -1; }
    if (n >= 1) {
        std::cout << "0" << std::endl;
    }
    if (n >= 2) {
        std::cout << "1" << std::endl;
    }

    long long x = 0, y = 1;
    for (int i = 2; i < n; i++) {
        long long z = x + y;
        x = y;
        y = z;
        std::cout << y << std::endl;
    }
    return y;
}

int main() {
    fib(10);
}