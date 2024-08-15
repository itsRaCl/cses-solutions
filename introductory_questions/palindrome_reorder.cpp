#include <iostream>
using namespace std;

int32_t main() {
  string s;
  cin >> s;
  int n;
  int freq[26] = {0};
  n = s.size();

  for (auto i : s) {
    freq[i - 'A']++;
  }

  int odd = -1;
  for (int i = 0; i < 26; i++) {
    if (freq[i] % 2 == 1) {
      if (odd != -1) {
        cout << "NO SOLUTION" << endl;
        return 0;
      } else {
        odd = i;
      }
    }
  }

  for (int i = 0; i < 26; i++) {
    for (int j = 0; j < freq[i] / 2; j++) {
      cout << static_cast<char>(i + 'A');
    }
  }
  if (odd != -1) {
    cout << static_cast<char>(odd + 'A');
  }
  for (int i = 0; i < 26; i++) {
    for (int j = 0; j < freq[25 - i] / 2; j++) {
      cout << static_cast<char>((25 - i) + 'A');
    }
  }
}
