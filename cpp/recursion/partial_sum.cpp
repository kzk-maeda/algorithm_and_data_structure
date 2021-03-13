#include <iostream>
#include <vector>
using namespace std;

// global variables
vector< vector<int> > memo;

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

// 0：false、1: true
int recursive_partial_sum_with_memo(int i, int w, const vector<int> a) {
  // base case
  if (i == 0) {
    if (w == 0) return true;
    return false;
  }

  // check memo
  if (memo[i][w] != -1) return memo[i][w];

  // when not choice a[i-1]
  if (recursive_partial_sum_with_memo(i-1, w, a)) return memo[i][w] = 1;

  // when choice a[i-1]
  if (recursive_partial_sum_with_memo(i-1, w-a[i-1], a)) return memo[i][w] = 1;

  return memo[i][w] = 0;

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

  // culc with memo
  memo.assign(N+1, vector<int>(W+1, -1));
  if (recursive_partial_sum_with_memo(N, W, a)) cout << "Yes" << endl;
  else cout << "No" << endl;

}