#include <iostream> //we've encountered this import before. Formally, it's called a declaration

//constants are...constant. i.e. their values won't change once initialized. Usually written in BLOCK letters

const float E = 2.7; //one way of defining a constant. This is a global constant.

int main(){
  std::cout << "e = " << E << std::endl; //we should be able to access the global variable
  int c = 300000000; //define a variable c
  std::cout << "c = " << c << std::endl;

  return 0;
}
    
  


