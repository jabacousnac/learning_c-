#include <iostream>
#include <vector>
using namespace std;

int main(){
  //let's define a vector
  vector<int> v = {1,2,3,4,5};

  //Say we wanted to print the vector. We can't just do: "std::cout << v << std::endl;" std::vector class does not have built-in output operator that allows us to print the entire vector
  //Instead, we iterate. The iterator is i, which goes over the range v.begin()..v.end() in increments of 1.
  //This is a vector iterator
  for (vector<int>::iterator i = v.begin();
       i != v.end();
       ++i){
    cout << *i;
  }

  cout << "\n";
  //What if we want to reverse the order? Simplest way is to use a reverse iterator.
  for (vector<int>::reverse_iterator i = v.rbegin();
       i != v.rend();
       ++i){
    cout << *i;
  }

  cout << "\n";
  //What if we don't want to use an iterator and a priori know the length of the vector?
  int n = v.size();
  int j; //note how we need to define the iterator beforehand.
  for (j=0; j<n; ++j){
    cout << v[j]*5 << " ";
  }
}
