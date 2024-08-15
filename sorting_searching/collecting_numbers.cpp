#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
  int n;
  cin >> n;
  unordered_set<int> st;
  int count = 0;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (st.find(x - 1) == st.end()) {
      count++;
    }
    st.insert(x);
  }

  cout << count << endl;
  return 0;
}
