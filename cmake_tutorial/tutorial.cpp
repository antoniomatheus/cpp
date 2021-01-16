#include <iostream>
#include "TutorialConfig.h"
#include <string>
#include <stdexcept>

#ifdef USE_MYMATH
#  include "MathFunctions.h"
#else
#  include <cmath>
# endif

int main(int argc, char *argv[]) {
  if (argc < 2) {
    std::cout << argv[0] << " Version " << Tutorial_VERSION_MAJOR << "."
              << Tutorial_VERSION_MINOR << std::endl;
    std::cout << "Usage: " << argv[0] << " number" << std::endl;
    return 1;
  }

  std::string arg = argv[1];
  int x{};

  try {
    std::size_t pos;
    x = std::stoi(arg, &pos);
    if (pos < arg.size()) {
      std::cerr << "Trailing characters after number: " << arg << std::endl;
    }
  } catch (std::invalid_argument const &ex) {
    std::cerr << "Invalid number: " << arg << std::endl;
  } catch (std::out_of_range const &ex) {
    std::cerr << "Number out of range: " << arg << std::endl;
  }

  double inputValue{ static_cast<double>(x) };

#ifdef USE_MYMATH
  const double outputValue = mysqrt(inputValue);
#else
  const double outputValue = sqrt(inputValue);
#endif
  std::cout << "The square root of " << inputValue << " is " << outputValue
            << std::endl;
}
