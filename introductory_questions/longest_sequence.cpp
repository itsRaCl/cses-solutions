#include <iostream>
using namespace std;

int32_t main() {

  int64_t n;
  string s;
  cin >> s;
  n = s.size();

  int64_t l = 0, r = 1;
  int64_t maxm = 1;
  while (r < n) {
    if (s[l] != s[r]) {
      maxm = max(maxm, (r - l));
      l = r;
    }
    r++;
  }

  maxm = max(maxm, (r - l));

  cout << maxm << endl;
}
