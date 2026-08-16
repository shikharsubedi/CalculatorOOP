#include "Calculator.h"
#include "Operation.h"
#include "Add.h"
#include "Subtract.h"
#include "Multiply.h"
#include "Divide.h"
#include <iostream>
#include <memory>
#include <vector>

int main() {
  int a;
  int b;
  std::cout<<"Enter two integers: ";
  std::cin>>a>>b;
  auto addOp =std::make_unique<Add>();
  auto subOp = std::make_unique<Subtract>();
  auto divOp = std::make_unique<Divide>();
  auto mulOp = std::make_unique<Multiply>();

  std::vector<std::unique_ptr<Operation>> operations;

  operations.push_back(std::move(addOp));
  operations.push_back(std::move(subOp));
  operations.push_back(std::move(divOp));
  operations.push_back(std::move(mulOp));

  for(auto& op: operations) {
    std::cout<< op->calculate(a,b)<<"\n";
  }
  return 0;
}
