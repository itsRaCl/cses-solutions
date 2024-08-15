#include <algorithm>
#include <iostream>
using namespace std;

int32_t main() {
  int n, m, k;

  cin >> n >> m >> k;
  int applicants[n], sizes[m];

  for (int i = 0; i < n; i++) {
    cin >> applicants[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> sizes[i];
  }

  sort(applicants, applicants + n);
  sort(sizes, sizes + m);
  int a = 0, s = 0;
  int count = 0;
  while (a < n && s < m) {
    if (abs(applicants[a] - sizes[s]) <= k) {
      a++;
      s++;
      count++;
    } else if (sizes[s] > applicants[a]) {
      a++;
    } else {
      s++;
    }
  }

  cout << count;
}
