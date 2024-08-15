#include <iostream>
#include <set>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  set<int> s;
  for (int i = 0; i < n; i++) {
    s.insert(i + 1);
  }

  int flag = 0;
  while (!s.empty()) {
    set<int>::iterator it = s.begin();

    while (it != s.end()) {
      set<int>::iterator curr = it;
      it++;
      if (flag != k) {
        flag++;
        curr++;
        continue;
      } else {
        cout << *curr << endl;
        s.erase(curr);
        flag = 0;
      }
    }
  }
}
