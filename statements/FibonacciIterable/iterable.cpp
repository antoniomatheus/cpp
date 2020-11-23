#include <cstdio>

#include "FibonacciRange.h"

int main() {
    for (const auto i: FibonacciRange{ 5000 }) {
        printf("%d ", i);
    }
}