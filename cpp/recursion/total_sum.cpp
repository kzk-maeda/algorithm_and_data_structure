#include <iostream>
#include <vector>
using namespace std;

int sum(int N) {
  // report called recursive function
  cout << "called func(" << N << ")" << endl;

  if (N == 0) return 0;

  // sum
  int result = N + sum(N - 1);
  cout << "Total num until " << N << ": " << result << endl;

  return result;
}

int main() {
  // Input Num
  int N;
  cout << "Input Number to sum :" << endl;
  cin >> N;

  sum(N);
}