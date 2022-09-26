#include <iostream>
#include <iomanip>

using namespace std;

// the cose of the seed to sow one square metre of lawn (c) 0 < c < 100
//the number of lawns to sow (L) 0 < L < 100
// L lines containin two positive real numbers W (width), and E (length) of the lawn
//all real numbers given with at most 8 decimals after the deimal point

//output
//one line containing the cost to sow all of the lawns
//all ouputs must be accurate to an absolute or relative error of at most 10^-6

int main() {

  double C, L, W, E, total;

  // enter the number of fields and cost per one square metre of lawn
  cin >> C >> L;

  for (int i = 0; i <= 1; ++i){
    cin >> E >> W;
    total = ((E*W)* C) * L;
    
    }
  cout << setprecision(12) << total;
    
    
  
}