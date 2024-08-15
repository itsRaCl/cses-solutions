#include <iostream>
using namespace std;

int32_t main() {
  int64_t n;
  cin >> n;

  while (n--) {
    int64_t y, x;
    cin >> y >> x;

    if (y >= x) {
      // row main
      if (y % 2 == 0) {
        cout << (y * y + 1 - x) << endl;
      } else {
        cout << ((y - 1) * (y - 1) + x) << endl;
      }
    } else {
      // column main
      if (x % 2 == 0) {
        cout << ((x - 1) * (x - 1) + y) << endl;
      } else {
        cout << (x * x) - y + 1 << endl;
      }
    }
  }
}
