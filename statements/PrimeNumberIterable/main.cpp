#include <iostream>
#include <cstddef>

#include "PrimeNumberRange.h"

int main() {
    size_t max{ 100 };
    PrimeNumberRange pnr{ max };
    std::cout << "Hello! Starting to generate primes up until " << max 
              << std::endl;
    for (auto prime: pnr) {
        std::cout << prime << " - ";
    }
    std::cout << std::endl;
}