#include <iostream>
#include <unordered_set>

using namespace std;

const int MAX_LEN = 2 * (1e5);
int arr[MAX_LEN];
int n;
int l = 0;
int r = 0;
int max_len = 1;
unordered_set<int> st;

int main() {
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  while (r < n) {
    if (st.find(arr[r]) != st.end()) {
      while (st.find(arr[r]) != st.end()) {
        st.erase(arr[l]);
        l++;
      }
    } else {
      max_len = max(max_len, r - l + 1);
      st.insert(arr[r]);
      r++;
    }
  }
  cout << max_len << endl;
}
