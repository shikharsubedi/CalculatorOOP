#ifndef SUBTRACT_H
#define SUBTRACT_H
#include "Operation.h"

class Subtract: public Operation {
  public:
  int calculate(int a, int b) const override;
};

#endif
