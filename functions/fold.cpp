#include <cstdio>
#include <limits>

template <typename Fn, typename In, typename Out>
constexpr Out fold(Fn function, In* input, size_t length, Out initial) {
    auto result = initial;
    for (size_t i{}; i < length; i++) {
        result = function(result, input[i]);
    }
    return result;
}

int main() {
    int data[]{ 100, 200, 300, 400, 500 };
    size_t data_len = 5;
    auto sum = fold([](auto x, auto y) { return x + y; }, data, data_len, 0);
    printf("Sum: %d\n", sum);
    auto max = fold([](auto x, auto y) { return x > y ? x : y; },
                    data, data_len, std::numeric_limits<int>::min());
    printf("Max: %d\n", max);
    auto min = fold([](auto x, auto y) { return x < y ? x : y; },
                    data, data_len, std::numeric_limits<int>::max());
    printf("Min: %d\n", min);
    auto n_greater = fold([](auto x, auto y) { return y > 200 ? x + 1 : x; },
                          data, data_len, 0);
    printf("Greater than 200: %d\n", n_greater);
}