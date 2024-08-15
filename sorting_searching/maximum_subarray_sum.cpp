#include <climits>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  long long sum = 0;
  long long ans = INT_MIN;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    sum += x;
    ans = max(ans, sum);

    if (sum < 0) {
      sum = 0;
    }
  }
  cout << ans << endl;
}
