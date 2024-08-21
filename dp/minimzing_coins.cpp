#include <iostream>
#include <vector>
using namespace std;

const int mod = 1e9 + 7;
int main() {
  int n, t;

  cin >> n >> t;

  vector<int> arr;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    arr.push_back(x);
  }

  vector<long long> tab(t + 1, 1e9);

  tab[0] = 0;
  for (int j = 0; j <= t; j++) {
    for (auto i : arr) {
      if (j + i <= t) {
        tab[j + i] = min(1 + tab[j], tab[j + i]);
      }
    }
  }

  if (tab[t] >= 1e9)
    cout << -1;
  else {
    cout << tab[t];
  }
}
