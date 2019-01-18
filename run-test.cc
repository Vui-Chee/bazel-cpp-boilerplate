#include "your-code.h"
#include <cassert>
#include <iostream>
#include <tuple>
#include <vector>

using namespace std;

// Change the types of input/expectedOutput as desired.
typedef pair<int, int> test;

int main(int argc, char const *argv[]) {

  vector<test> tests{
      // test( input, expectedOutput )
  };

  cout << endl << "Running Test(s)..." << endl;

  int test_num = 1;
  for (auto const &t : tests) {
    cout << "NO : " << test_num++ << endl;
    cout << "INPUT : " << get<0>(t) << endl;
    // output = your-function(get<0>(t));
    // cout << "OUTPUT: " << output << endl;
    // assert(output == get<1>(t));
    cout << "SUCCESS!!!" << endl << endl;
  }

  cout << endl << "Finished Test(s)..." << endl;
  return 0;
}
