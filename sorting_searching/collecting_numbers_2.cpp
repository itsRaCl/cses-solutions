#include <iostream>
#include <unordered_set>

using namespace std;

void swap(int *arr, int a, int b) {
  int temp = arr[a - 1];
  arr[a - 1] = arr[b - 1];
  arr[b - 1] = temp;
}

int main() {
  int n, m;
  cin >> n >> m;

  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    swap(arr, a, b);

    unordered_set<int> nums;
    int count = 0;
    for (int i = 0; i < n; i++) {
      if (nums.find(arr[i] - 1) == nums.end()) {
        count++;
      }
      nums.insert(arr[i]);
    }
    cout << count << endl;
  }
}
