#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
  int n, t;
  cin >> n >> t;
  unordered_map<int, int> mp;

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    int rem = t - x;

    if (mp[rem] != 0) {
      cout << mp[rem] << " " << i + 1 << endl;
      return 0;
    }

    mp[x] = i + 1;
  }

  cout << "IMPOSSIBLE" << endl;
}
