#ifndef MULTIPLY_H
#define MULTIPLY_H
#include "Operation.h"

class Multiply: public Operation {
  public:
  int calculate(int a, int b) const override;
};

#endif
