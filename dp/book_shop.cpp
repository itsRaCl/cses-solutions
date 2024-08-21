#include <iostream>
#include <vector>

using namespace std;

int dp(int idx, int p, vector<int> price, vector<int> pages,
       vector<vector<int>> &memo) {
  if (p == 0) {
    return 0;
  }
  if (idx == 0) {
    if (price[idx] <= p) {
      return pages[idx];
    }
    return 0;
  }

  if (memo[idx][p] != -1)
    return memo[idx][p];

  int take = 0;
  if (price[idx] <= p) {
    take = pages[idx] + dp(idx - 1, p - price[idx], price, pages, memo);
  }
  int notTake = dp(idx - 1, p, price, pages, memo);

  memo[idx][p] = max(take, notTake);
  return memo[idx][p];
}

int main() {
  int n, p;
  cin >> n >> p;

  vector<int> price(n, 0);
  vector<int> pages(n, 0);
  for (int i = 0; i < n; i++) {
    cin >> price[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> pages[i];
  }

  vector<vector<int>> tab(n, vector<int>(p + 1, 0));

  for (int i = price[0]; i <= p; i++) {
    tab[0][i] = pages[0];
  }

  for (int i = 1; i < n; i++) {
    for (int j = 0; j <= p; j++) {
      int take = 0;
      if (price[i] <= j) {
        take = pages[i] + tab[i - 1][j - price[i]];
      }
      int notTake = tab[i - 1][j];

      tab[i][j] = max(take, notTake);
    }
  }

  cout << tab[n - 1][p];
}
