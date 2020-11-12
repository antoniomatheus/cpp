#include <cstddef>
#include <type_traits>
#include <cstdio>

template<typename T>
concept Averageable = std::is_default_constructible<T>::value &&
    requires(T a, T b) {
        { a += b };
        { a / size_t{ 1 } };
    };

template<Averageable T, size_t Length>
T mean(T (&values)[Length]) {
  T result{};
  for (size_t i{}; i < Length; i++) {
    result += values[i];
  }
  return result / Length;
}

int main() {
  double nums_d[] { 1.0f, 2.0f, 3.0f, 4.0f };
  const auto result1 = mean(nums_d);
  printf("Double: %f\n", result1);

  float nums_f[] { 1.0, 2.0, 3.0, 4.0 };
  const auto result2 = mean(nums_f);
  printf("Float: %f\n", result2);

  size_t nums_c[] { 1, 2, 3, 4 };
  const auto result3 = mean(nums_c);
  printf("size_t: %ld\n", result3);
}