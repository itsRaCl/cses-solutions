#include <iostream>
using namespace std;

int32_t main() {
  int64_t t;
  cin >> t;
  while (t--) {
    int64_t a, b;
    cin >> a >> b;

    cout << ((((a + b) % 3) != 0 || a > 2 * b || b > 2 * a) ? "NO" : "YES")
         << endl;
  }
}
