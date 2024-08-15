#include <iostream>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  int start = 0;
  int end = n;

  int x;
  int diff1, diff2;
  for (int i = 1; i <= k; i++) {
    cin >> x;
    if (x >= start) {
      diff1 = x - start;
      diff2 = end - x;

      if (diff1 > diff2) {
        end = x;
      } else {
        start = x;
      }
    }
    cout << end - start << " ";
  }
}
