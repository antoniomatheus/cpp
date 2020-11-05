template <typename T>
struct SimpleUniquePointer {
  // A default constructor is needed to have a non-default constructor
  SimpleUniquePointer() = default;
  SimpleUniquePointer(T* pointer) : pointer { pointer } {}
  ~SimpleUniquePointer() {
    if (pointer) {
      delete pointer;
    }
  }

  // A unique pointer can't have copy constructors
  SimpleUniquePointer(const SimpleUniquePointer&) = delete;
  SimpleUniquePointer& operator=(const SimpleUniquePointer&) = delete;

  // Move constructors
  SimpleUniquePointer(SimpleUniquePointer&& other) noexcept
    : pointer { other.pointer } {
      other.pointer = nullptr;
  }
  SimpleUniquePointer& operator=(SimpleUniquePointer&& other) noexcept {
    if (pointer) {
      delete pointer;
    }
    pointer = other.pointer;
    other.pointer = nullptr;
    return *this;
  }

  T* get() {
    return pointer;
  }

private:
  T* pointer;
};