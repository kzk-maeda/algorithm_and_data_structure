#include <iostream>
#include <vector>
using namespace std;

template<class T> void chmax(T& a, T b) {
  if (a < b) {
    a = b;
  }
}

int main() {
  // Input
  cout << "Input N and W" << endl;
  int N; long long W;
  cin >> N >> W;

  vector<long long> weight(N), value(N);
  cout << "Input weight[i] and value[i]" << endl;
  for (int i = 0; i < N; ++i) cin >> weight[i] >> value[i];

  //define dp table
  vector< vector<long long> > dp(N + 1, vector<long long>(W + 1, 0));

  // loop
  for (int i = 0; i < N; ++i) {
    for (int w = 0; w <= W; ++w) {
      // if choice item[i]
      if (w - weight[i] >= 0) {
        chmax(dp[i + 1][w], dp[i][w - weight[i]] + value[i]);
      }

      // if not choice iten[i]
      chmax(dp[i + 1][w], dp[i][w]);
    }
  }

  cout << dp[N][W] << endl;
}