#include <iostream>
#include <vector>
#include <string>
using namespace std;

template<class T> void chmin(T& a, T b) {
  if (a > b) {
    a = b;
  }
}

const int INF = 1 << 29;

int main() {
  // Input
  string S, T;
  cout << "Input string S, T" << endl;
  cin >> S >> T;

  // define dp table
  vector< vector<int> > dp(S.size() + 1, vector<int>(T.size() + 1, INF));

  // dp initial state
  dp[0][0] = 0;

  // dp loop
  for (int i = 0; i <= S.size(); ++i) {
    for (int j = 0; j <= T.size(); ++j) {
      // change
      if (i > 0 && j > 0) {
        if (S[i-1] == T[j-1]) {
          chmin(dp[i][j], dp[i-1][j-1]);
        }
        else {
          chmin(dp[i][j], dp[i-1][j-1] + 1);
        }
      }

      // delete
      if (i > 0) chmin(dp[i][j], dp[i-1][j] + 1);

      // insert
      if (j > 0) chmin(dp[i][j], dp[i][j-1] + 1);
    }
  }

  // output
  cout << dp[S.size()][T.size()] << endl;
}