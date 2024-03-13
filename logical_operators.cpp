#include <iostream>
#include <string>

using namespace std; //this is cool. because then later on, we can dispense of the "std". For e.g., cout << "hi!"; instead of std::cout << "hi!";

int main(){
  bool A = true;
  bool B = false;
  bool C = 1;
  bool D = 0;
  cout << "1. " << A << endl; //TRUE
  cout << "2. " << (A && B) << endl; //TRUE AND FALSE = FALSE
  cout << "3. " << (A || D) << endl; //TRUE OR FALSE = TRUE
  cout << "4. " << ((C ^ D) && C) << endl; //(TRUE XOR FALSE) AND TRUE = FALSE
  return 0;
}
