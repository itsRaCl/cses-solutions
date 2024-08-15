#include <iostream>
#include <vector>
using namespace std;

int32_t main() {
  int64_t n;
  cin >> n;

  int64_t sum = (n * (n + 1)) / 2;

  if (sum % 2 != 0) {
    cout << "NO" << endl;
    return 0;
  }

  cout << "YES" << endl;
  if (n % 4 == 3) {
    cout << n / 2 << endl;
    for (int i = 2; i <= n / 2; i += 2) {
      cout << i << " " << n - i << " ";
    }
    cout << n << endl;

    cout << n / 2 + 1 << endl;

    for (int i = 1; i <= n / 2; i += 2) {
      cout << i << " " << n - i << " ";
    }
    cout << endl;
  } else if (n % 4 == 1 || n % 4 == 0) {
    cout << n / 2 << endl;
    for (int i = 2; i <= n / 2; i += 2) {
      cout << i << " " << n - i + 1 << " ";
    }
    cout << endl << n / 2 << endl;
    for (int i = 1; i <= n / 2; i += 2) {
      cout << i << " " << n - i + 1 << " ";
    }
    cout << endl;
  }
}
