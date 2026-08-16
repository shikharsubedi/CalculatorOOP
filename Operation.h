#ifndef OPERATION_H
#define OPERATION_H
#include <cstdio>

class Operation {
  public:
  virtual int calculate(int a, int b) const = 0;

  virtual ~Operation() = default;
};

#endif
