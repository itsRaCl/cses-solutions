#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;

  vector<int> weights;

  for (int i = 0; i < n; i++) {
    int w;
    cin >> w;
    weights.push_back(w);
  }

  sort(weights.begin(), weights.end());
  int count = 0;
  int l = 0, r = n - 1;
  int taken = 1;
  int curr = weights[r];
  while (l < r) {
    if (taken == 2) {
      count++;
      r--;
      curr = weights[r];
      taken = 1;
    } else if (curr + weights[l] > x) {
      count++;
      r--;
      curr = weights[r];
      taken = 1;
    } else {
      curr += weights[l];
      taken++;
      l++;
    }
  }
  cout << count + 1;
}
