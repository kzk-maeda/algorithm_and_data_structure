#include <iostream>
#include <vector>
using namespace std;

// coin value
const vector<int> value = {500, 100, 50, 10, 5, 1};

int main() {
  // Input
  cout << "Input number X: " << endl;
  int X;
  cin >> X;
  cout << "Input coin nums" << endl;
  vector<int> a(6);
  for (int i = 0; i < 6; ++i) cin >> a[i];

  // greedy algorithm
  int result = 0;
  for (int i = 0; i < 6; ++i) {
    // without think about coin num
    int add = X / value[i];

    // compare with coin num
    if(add > a[i]) add = a[i];

    // add coin num to result
    X -= add * value[i];
    result += add;
  }

  cout << result << endl;
}