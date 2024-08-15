#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  pair<int, int> times[2 * n];
  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    times[2 * i] = {x, 1};
    times[2 * i + 1] = {y, -1};
  }

  sort(times, times + (2 * n), [](pair<int, int> A, pair<int, int> B) {
    return (A.first == B.first ? A.second < B.second : A.first < B.first);
  });
  int count = 0;
  int maxm = 0;
  for (auto i : times) {
    count += i.second;

    maxm = max(maxm, count);
  }
  cout << maxm << endl;
}
