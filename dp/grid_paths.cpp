#include <iostream>
#include <vector>

using namespace std;
const int mod = 1e9 + 7;

int main() {
  int n;
  cin >> n;
  vector<vector<int>> grid(n, vector<int>(n, 1));
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    for (int j = 0; j < n; j++) {
      if (s[j] == '*') {
        grid[i][j] = 0;
      }
    }
  }

  vector<vector<int>> tab(n, vector<int>(n, 0));

  tab[0][0] = 1;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (grid[i][j] == 0)
        tab[i][j] = 0;
      if (i == 0 && j == 0)
        continue;
      if (grid[i][j]) {
        int u = 0;
        int l = 0;
        if (i >= 1)
          u = tab[i - 1][j];
        if (j >= 1)
          l = tab[i][j - 1];
        tab[i][j] = (l + u) % mod;
      }
    }
  }
  cout << tab[n - 1][n - 1];
}
