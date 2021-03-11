#include <iostream>
#include <vector>
using namespace std;

/*
Problem
  int K, N
  A = { (X, Y, Z) | 0 <= X, Y, Z <= K }
  X + Y + Z = N

Solution
  When K, N = 5, 10
  if (X, Y) are decided, automaticaly Z is decided as below.
    Z = N - (X + Y)
  But it is neccesarry to check whether {0 <= Z <= K}
*/

bool is_exist_z(int N, int K, int x, int y) {
  bool result = false;
  int z;
  z = N - (x + y);
  if ((z >= 0) && (z <= K)) result = true;
  cout << "(X, Y, Z) == " << x << y << z << endl;
  return result;
}

int main() {
  // Input
  int N, K;
  cout << "Input N, K" << endl;
  cin >> N >> K;

  int count = 0;

  for (int x = 0; x < K; ++x) {
    for (int y = 0; y < K; ++y) {
      if (is_exist_z(N, K, x, y)) ++count;
    }
  }

  // output result
  cout << count << endl;
}