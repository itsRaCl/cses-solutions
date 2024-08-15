#include <iostream>
using namespace std;

int64_t pow(int64_t n) {
  int64_t res = 1;
  int64_t mod = 1e9 + 7;
  while (n--) {
    res = (res * 2) % mod;
  }

  return res;
}
int32_t main() {
  int64_t n;
  cin >> n;

  cout << pow(n);
}
