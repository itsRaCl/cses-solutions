#include <iostream>
#include <set>

using namespace std;

int main() {
  int n, m;

  cin >> n >> m;

  multiset<int> tickets;

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    tickets.insert(-x);
  }

  for (int i = 0; i < m; i++) {
    int price;
    cin >> price;
    auto find = tickets.lower_bound(-price);
    if (find == tickets.end()) {
      cout << -1 << endl;
    } else {
      cout << -(*find) << endl;
      tickets.erase(find);
    }
  }
}
