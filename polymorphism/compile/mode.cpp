#include <cstddef>
#include <type_traits>
#include <map>
#include <cstdio>

template <typename T>
concept Integer = std::is_integral<T>::value;

template <Integer T, size_t Length>
T mode(T (&arr)[Length]) {
  if (!Length) return 0;

  std::map<T, T> counter;
  for (size_t i{}; i < Length; i++) {
    const auto search = counter.find(arr[i]);
    if (search != counter.end()) {
        counter[search->first] = search->second + 1;
    } else {
        counter.insert({arr[i], 1});
    }
  }

  T mode{};
  int mode_freq{};
  for (auto value : counter) {
      if (value.second > mode_freq) {
        mode = value.first;
        mode_freq = value.second;
    }
  }

  return mode;
}

int main() {
    int numbers[]{ 1, 2, 3, 4, 2, 2, 6 };
    auto result = mode(numbers);
    printf("The mode is: %d\n", result);
//    double num_doubles[]{ 1.0, 2.0, 3.0, 4.0, 2.0, 2.0, 6.0 };
//    auto double_result = mode(num_doubles);
//    printf("The mode is: %f\n", double_result);
}