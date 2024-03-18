#include <iostream>
using namespace std;

int main(){
  //array can be initialized in a number of ways
  
  //The first way is to declare the type of the objects within the array, array name, and array size
  int evens_le10[4]; //even numbers < 10
  
  //we can also just define them directly with the elements
  int odds_le10[] = {1, 3, 5, 7, 9}; //notice how we just did empty square brackets instead of [5]. Either works

  //if we have a large array, and only want to list the first elements, we can do so. The rest of the array will then be filled with 0s.
  int integers_le20[20] = {0, 1, 2};
  cout << integers_le20 << "\n" << endl; //Note: it will just output the address

  //obviously, doesn't have to be array of integers...
  string high_scoring_scrabble_letters[3] = {"Q", "Z", "J"};

  //Now, let's access elements of an array. The usual
  int large_odd_num = odds_le10[4];
  cout << large_odd_num << "\n" << endl; //should get 9

  //Let's define a 2D array. It will be like "{ {}, {}, {}, ...}. Similar to python/numpy. Indexing works as arr[i][j] to get j-th column in i-th row
  int const n_rows = 3;
  int const n_cols = 7;
  int const m[n_rows][n_cols] = {
				 {1, 2, 3, 4, 5, 6, 7},
				 {8, 9, 10, 11, 12, 13, 14},
				 {15, 16, 17, 18, 19, 20, 21}};
  cout << m[2][3]+0.5 << "\n" << endl; //expect 18.5

  //Similarly, if we don't want to list out all elements
  int arr[12][5];
  //Now, let's get the dimensions of this array
  int nrows = sizeof(arr)/sizeof(arr[0]);
  int ncols = sizeof(arr[0])/sizeof(arr[0][0]);
  cout << "nrows:" << nrows << "\t" << "ncols:" << ncols << endl;
}
