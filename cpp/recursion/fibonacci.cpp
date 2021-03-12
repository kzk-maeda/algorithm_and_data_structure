#include <iostream>
#include <vector>
#include <chrono>
using namespace std;

// Global variables
vector<long long> memo;


int fibonacci(int N) {
  // report called
  // cout << "fibonacci(" << N << ") is called" << endl; 
  // base case
  if (N == 0) return 0;
  else if (N == 1) return 1;

  // recursion
  int result = fibonacci(N-1) + fibonacci(N-2);
  cout << "N: " << N << ", result: " << result << endl;

  return result;
}

long long fibonacci_with_memo(int N) {
  // base case
  if (N == 0) return 0;
  else if (N == 1) return 1;

  // check memo
  if (memo[N] != -1) return memo[N];

  // recursive culc and store in memo
  return memo[N] = fibonacci_with_memo(N-1) + fibonacci_with_memo(N-2);
}

int main() {
  // Input
  int F;
  cout << "Press 0(without memo) or 1(with memo) : " << endl;
  cin >> F;
  int N;
  cout << "Input N : " << endl;
  cin >> N;

  std::chrono::system_clock::time_point  start, end;

  start = std::chrono::system_clock::now();
  if (F == 0) {
    // without memo
    cout << "fibonacci without memo" << endl;
    fibonacci(N);
  } else if (F == 1) {
    // with memo
    cout << "fibonacci with memo" << endl;
    memo.assign(N, -1);
    fibonacci_with_memo(N);
    for (int i = 0; i < N; ++i) {
      cout << "N: " << i << ", result: " << memo[i] << endl;
    }
  } else {
    cout << "Invalid value!" << endl;
  }
  end = std::chrono::system_clock::now();
  double elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end-start).count();
  printf("time %lf[ms]\n", elapsed);
}