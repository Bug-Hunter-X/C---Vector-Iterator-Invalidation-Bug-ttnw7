#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec;
  for (int i = 0; i < 10; ++i) {
    vec.push_back(i);
  }

  for (int i = 0; i < vec.size(); ++i) {
    std::cout << vec[i] << " ";
  }
  std::cout << std::endl;

  // Correct way to remove elements from vector using iterators
  for (auto it = vec.begin(); it != vec.end(); ) {
    if (*it % 2 == 0) {
      it = vec.erase(it);
    } else {
      ++it;
    }
  }

  // Print vector after removing elements
  for (int i = 0; i < vec.size(); ++i) {
    std::cout << vec[i] << " ";
  }
  std::cout << std::endl;
  return 0;
}