#pragma once

// An iterator is returned by the iterable type in the begin() method
// An iterator needs to implement the operators:
// - operator!=
// - operator++
// - operator*
struct FibonacciIterator {
    bool operator!=(int) const;
    FibonacciIterator& operator++();
    int operator*() const;
private:
    int current{ 1 }, last{ 1 };
};