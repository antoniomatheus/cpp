#pragma once

#include "FibonacciIterator.h"

// An iterable type needs to implement the begin() and end() methods
struct FibonacciRange {
    explicit FibonacciRange(int);
    FibonacciIterator begin() const;
    int end() const;
private:
    const int max;
};