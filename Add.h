#ifndef ADD_H
#define ADD_H
#include "Operation.h"

class Add: public Operation {
  public:
  int calculate(int a, int b) const override;
};

#endif
