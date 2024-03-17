#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) { //we'll get to this function later.
    return n && !(n & (n - 1)); 
}

int main(){

  int a = 1;
  int b = 2;

  //going back to logical operators.

  //1. We can swap two variables without a temporary by using the XOR operator
  a ^= b;
  b ^= a;
  a ^= b;
  cout << a << "\t" << b << endl; //we expect the output to be 2, 1

  //2. Left bitwise shift
  int c = 5; //5 is 1+4 -> (101)_2 in binary
  int d = 5 << 2; //this operation shifts the bits of d by 2, padding the lsb with 0s. (101)_2 // 2 -> (10100)_2 -> 4+16 = 20
  cout << "\n" << d << endl;
  //3. Right bitwise shift
  int e = d >> 2; //should get 5
  cout << e << endl;

  //4. Check if an integer is power of 2. (This will require use of conditionals which will be covered next.)

  cout << "Enter a number: ";
  int num = 128; //<- change this to try for different numbers.
  if (isPowerOfTwo(num)) { //n && !(n & (n - 1));
    //Explanation: (n & (n - 1)) checks the bits in n and n-1 elementwise and applies AND operator. E.g. if n=8, n-1=7. Comparing (1000)_2 and (0111)_2, which should return (0000)_2 -> 0. The exclamation mark before it returns true if 0, false otherwise. Repeat this, now comparing n and the result from before. Remember that "&" is bitwise, "&&" is logical.
    cout << num << " = power of 2." << endl;
  } else {
    cout << num << " != power of 2." << endl;
  }
}
