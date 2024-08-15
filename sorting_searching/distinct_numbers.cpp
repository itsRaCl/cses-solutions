#include <iostream>
#include <unordered_set>
using namespace std;

int32_t main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(0);
  int n;
  cin >> n;
  int x;
  unordered_set<int> st;
  for (int i = 0; i < n; ++i) {
    cin >> x;
    st.insert(x);
  }

  cout << st.size();
}
