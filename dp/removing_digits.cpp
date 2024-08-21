#include <iostream>
#include <vector>
using namespace std;

int dp(int n, vector<int> &memo) {
  if (n < 0) {
    return 1e9;
  }
  if (n > 0 && n < 10) {
    return 1;
  }

  if (memo[n] != -1) {
    return memo[n];
  }
  int ways = 1e9;
  int x = n;

  while (x) {
    int dig = x % 10;
    x = x / 10;
    if (dig) {
      ways = min(1 + dp(n - dig, memo), ways);
    }
  }

  memo[n] = ways;
  return ways;
}

int main() {
  int n;
  cin >> n;

  vector<int> memo(n + 1, -1);

  cout << dp(n, memo);
}
