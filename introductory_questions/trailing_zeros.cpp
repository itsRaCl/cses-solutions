#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int out = 0;
  int x = 5;
  while (x <= n) {
    out += (n / x);
    x *= 5;
  }

  cout << out << endl;
}
