#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    arr[i] = x;
  }
  sort(arr, arr + n);
  long long res = 1;

  for (int i = 0; i < n && arr[i] <= res; i++) {
    res += arr[i];
  }

  cout << res << endl;
}
