#include <iostream>
#include <vector>
using namespace std;

int main() {
  // Input
  int N, v;
  cout << "Input size(N) and search target(v)" << endl;
  cin >> N >> v; // Wait User Input in stdin
  cout << "Input sample list element" << endl;
  vector<int> a(N);
  for (int i = 0; i < N; ++i) cin >> a[i];

  // liner search
  bool exist = false; // flag
  for (int i = 0; i < N; ++i) {
    if (a[i] == v) {
      exist = true;
    }
  }

  // output result
  if (exist) cout << "Yes" << endl;
  else cout << "No" << endl;
}