#pragma once

// This iterator generates prime numbers using the sieve of Eratosthenes
// Generating prime numbers less than max.
class PrimeNumberIterator {
    size_t current{ 2 };
    size_t* numbers;
    const size_t max;
    bool finished{ false };
public:
    explicit PrimeNumberIterator(size_t max): max{ max } {
        numbers = new size_t[max];
        for (size_t i{ 0 }; i < max; i++) {
            numbers[i] = i;
        }
    };
    ~PrimeNumberIterator() {
        delete numbers;
    };
    PrimeNumberIterator& operator++();
    bool operator!=(size_t x) const;
    size_t operator*() const;
};