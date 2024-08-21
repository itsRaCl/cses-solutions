#include <iostream>
#include <vector>

using namespace std;

int const mod = 1e9 + 7;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    vector<vector<int>> tab(n, vector<int>(2, 1));
    int m = 1;
    for (int i = 0; i < n; i++) {
      tab[i][0] = m++;
      tab[i][1] = m++;
    }

    for (int i = 1; i < n; i++) {
      int prev_row = (tab[i - 1][0] + tab[i - 1][1]) % mod;
      tab[i][0] = (tab[i][0] + prev_row) % mod;
      tab[i][1] = (tab[i][1] + tab[i - 1][1] + tab[i][0]) % mod;
    }

    cout << tab[n - 1][1] << endl;
  }
}
