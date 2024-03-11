#include <iostream>

//let's define a function where we add the number b to it

//function definition:
int add(int i, int b = 5) //b, here, is a parameter with default value of 5.
{
  int j = i + b; //notice the semi-colon
  return j;
}

//now that the function has been defined, let's call it
int main()
{
  std::cout << add(13) << "\n"; //b will have a default value of 5, and need not be called.
  return 0;
}
//expect this function to print 18.
