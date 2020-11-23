#include <cstdio>

// An iterator is returned by the iterable type in the begin() method
// An iterator needs to implement the operators:
// - operator!=
// - operator++
// - operator*
struct FibonacciIterator {
    // This method checks if the iterator has reached its end, with
    // the expression: iterable.begin() != iterable.end()
    bool operator!=(int x) const {
        return x >= current;
    }

    // This will update the iterator for the next iteration
    FibonacciIterator& operator++() {
        const auto tmp = current;
        current += last;
        last = tmp;
        return *this;
    }

    // This method will be responsible for dereferencing the object to access
    // its value. *(iterable.begin())
    int operator*() const {
        return current;
    }

private:
    int current{ 1 }, last{ 1 };
};

// An iterable type needs to implement the begin() and end() methods
struct FibonacciRange {
    explicit FibonacciRange(int max): max{ max } {}

    FibonacciIterator begin() const {
        return FibonacciIterator{};
    }

    int end() const {
        return max;
    }

private:
    const int max;
};

int main() {
    FibonacciRange range{ 5000 };
    const auto end = range.end();
    for (auto x = range.begin(); x != end; ++x) {
        const auto i = *x;
        printf("%d ", i);
    }
}