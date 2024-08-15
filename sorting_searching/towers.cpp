#include <algorithm>
#include <iostream>
#include <set>

using namespace std;

int main() {
  int n;
  cin >> n;

  multiset<int> towers;

  int x;
  multiset<int>::iterator it;
  for (int i = 0; i < n; i++) {
    cin >> x;
    it = towers.upper_bound(x);
    if (it != towers.end()) {
      towers.erase(it);
    }
    towers.insert(x);
  }

  cout << towers.size() << endl;
}
