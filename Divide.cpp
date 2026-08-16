#include "Divide.h"
#include <stdexcept>

int Divide::calculate(int a, int b) const {
    if(b == 0) {
      throw std::invalid_argument("divisor cannot be zero");
    }
    return a/b;
  }
