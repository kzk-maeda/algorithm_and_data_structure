#include <iostream>
#include <vector>
using namespace std;

int main() {
  // Input
  int N ;
  cout << "Input size(N): " << endl;
  cin >> N;
  cout << "Input sample list element" << endl;
  vector<int> a(N);
  for (int i = 0; i < N; ++i) cin >> a[i];

  // search max result of diff every 2 list elements
  // Brute force
  int max_diff = 0;
  int diff;
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N; ++j) {
      if (i == j) continue;
      diff = abs(a[i] - a[j]);
      if (max_diff < diff) max_diff = diff;
    }
  }

  // find min/max value and calc their diff
  int max = 0;
  int min = 20000000;
  int diff_2;
  for (int i = 0; i < N; ++i) {
    if (a[i] > max) max = a[i];
    if (a[i] < min) min = a[i];
  }
  diff_2 = max - min;

  // output result
  cout << max_diff << endl;
  cout << diff_2 << endl;
}