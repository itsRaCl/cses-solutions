#include <iostream>
#include <vector>
using namespace std;

const int mod = 1e9 + 7;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, t;

  cin >> n >> t;

  vector<int> arr;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    arr.push_back(x);
  }
  vector<long long> tab(t + 1, 0);
  tab[0] = 1;
  for (int i = 0; i < n; i++) {
    int c = arr[i];
    for (int j = 0; j <= t - c; j++) {
      tab[j + c] = (tab[j] + tab[j + c]) % mod;
    }
  }
  cout << tab[t];
  return 0;
}
