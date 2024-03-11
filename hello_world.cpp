// First comment! <- This is how comments are written.

#include <iostream> //import essential functions.
int main()
{
  std::cout << "Hello World!" << std::endl;
}


//main is the function. No inputs

/*one more note: we need to compile. To do so from emacs:
1. save file
2. M-x compile
3. Then, "g++ hello_world.cpp". Should create a.out file
4. a.out is run with "./a.out"

Alternatively,
In step 3, run "make hello_world"
Run the executable makefile: "./hello_world"
*/
