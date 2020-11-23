#include "FibonacciIterator.h"

// This method checks if the iterator has reached its end, with
// the expression: iterable.begin() != iterable.end()
bool FibonacciIterator::operator!=(int x) const {
    return x >= current;
}

// This will update the iterator for the next iteration
FibonacciIterator& FibonacciIterator::operator++() {
    const auto tmp = current;
    current += last;
    last = tmp;
    return *this;
}

// This method will be responsible for dereferencing the object to access
// its value. *(iterable.begin())
int FibonacciIterator::operator*() const {
    return current;
}