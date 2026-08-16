#ifndef DIVIDE_H
#define DIVIDE_H
#include "Operation.h"

class Divide: public Operation {
  public:
  int calculate(int a, int b) const override;
};

#endif
