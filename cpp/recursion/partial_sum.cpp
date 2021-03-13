#include <iostream>
#include <vector>
using namespace std;

bool recursive_partial_sum(int i, int w, const vector<int> &a) {
  // base case
  if (i == 0) {
    if (w == 0) return true;
    return false;
  }

  // when not choice a[i-1]
  if (recursive_partial_sum(i-1, w, a)) return true;

  // when choice a[i-1]
  if (recursive_partial_sum(i-1, w-a[i-1], a)) return true;

  return false;
}

int main() {
  int N, W;
  cout << "Input N, W : " << endl;
  cin >> N >> W;

  cout << "Input sample list element" << endl;
  vector<int> a(N);
  for (int i = 0; i < N; ++i) cin >> a[i];

  // culc recursively
  if (recursive_partial_sum(N, W, a)) cout << "Yes" << endl;
  else cout << "No" << endl;

}