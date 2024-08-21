#include <iostream>
#include <vector>
using namespace std;

const int mod = 1e9 + 7;
int main() {
  int target;
  cin >> target;

  vector<long long> tab(target + 1, 0);

  tab[0] = 1;

  for (int i = 0; i <= target; i++) {
    for (int j = 1; j < 7; j++) {
      if (i + j <= target) {
        tab[i + j] += tab[i] % mod;
      }
    }
  }

  cout << tab[target] % mod << endl;
  return 0;
}
