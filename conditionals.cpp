#include <iostream>
using namespace std;

int main(){
  int a = 0;
  int b = 5;
  //conditionals are fairly straightforward: if(condition){[do thing]}...else if(condition){[do different thing]}
  if (a==b){
    cout << "a=b" << endl;
  }
  else if (a>b){
    cout << "a>b" << endl;
  }
  else {
    cout << "a<b" << endl;
  }
}
//expect "a<b"
