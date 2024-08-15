#include <iostream>
using namespace std;

int main() {
  int64_t n;
  cin >> n;
  int64_t x;
  cin >> x;
  int64_t i = 1;
  int64_t out = 0;
  while (i < n) {
    int64_t y;
    cin >> y;
    if (y < x) {
      out += (x - y);
    } else {
      x = y;
    }
    i++;
  }

  cout << out << endl;
}
