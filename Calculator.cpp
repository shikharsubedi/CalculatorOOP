#include "Operation.h"
#include "Calculator.h"
#include <stdexcept>

Calculator::Calculator(std::unique_ptr<Operation> operation)
  :_operation{
    std::move(operation)
  } {
    if(!operation) {
      throw std::invalid_argument("operation cannot be null");
    }
  }


int Calculator::calculate(int a, int b) const {
  return _operation->calculate(a,b);
}
