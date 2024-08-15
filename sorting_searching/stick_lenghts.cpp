#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + n);

  int median = arr[(n - 1) / 2];
  long long ans = 0;

  for (auto i : arr) {
    ans += abs(i - median);
  }

  cout << ans << endl;

  return 0;
}
