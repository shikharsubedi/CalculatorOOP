#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <cstdio>
#include "Operation.h"
#include <memory>

class Calculator {
  private:
  std::unique_ptr<Operation> _operation;
  public:

  Calculator(std::unique_ptr<Operation> operation);
  
  int calculate(int a, int b) const;
    
};

#endif
