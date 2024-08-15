#include <iostream>
using namespace std;

int32_t main() {
  int64_t n;
  cin >> n;
  if (n == 1) {
    cout << 1 << endl;
    return 0;
  }
  if (n < 4) {
    cout << "NO SOLUTION" << endl;
    return 0;
  }
  int64_t x = 2;
  while (x <= n) {
    cout << x << " ";
    x += 2;
  }
  x = 1;
  while (x <= n) {
    cout << x << " ";
    x += 2;
  }

  cout << endl;
}
