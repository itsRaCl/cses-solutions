#include <iostream>

int main() {
  int64_t n;
  std::cin >> n;
  int64_t sum = 0;

  for (int64_t i = 0; i < n - 1; i++) {
    int64_t x;
    std::cin >> x;
    sum += x;
  }
  std::cout << (n * (n + 1) / 2) - sum << std::endl;
}
