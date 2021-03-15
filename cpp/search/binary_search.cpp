#include <iostream>
#include <vector>
using namespace std;

const int N = 8;
const vector<int> a = { 3, 5, 8, 10, 14, 17, 21, 39 };

// return key index
int binary_search(int key) {
  int left = 0, right = (int)a.size() - 1;
  while (right >= left) {
    int mid = left + (left + right) / 2;
    if (a[mid] == key) return mid;
    else if (a[mid] > key) right = mid - 1;
    else if (a[mid] < key) left = mid + 1;
  }
  return -1;
}

int main() {
  cout << binary_search(10) << endl;
}