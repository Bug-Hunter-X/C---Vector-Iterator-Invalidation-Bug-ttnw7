std::vector<int> vec; 
 for (int i = 0; i < 10; ++i) {
 vec.push_back(i);
 }
 
 for (int i = 0; i < vec.size(); ++i) {
 std::cout << vec[i] << " ";
 }
 std::cout << std::endl;
 
 // Incorrect way to remove elements from vector
 for (int i = 0; i < vec.size(); ++i) {
 if (vec[i] % 2 == 0) {
 vec.erase(vec.begin() + i);
 }
 }
 
 // Print vector after removing elements
 for (int i = 0; i < vec.size(); ++i) {
 std::cout << vec[i] << " ";
 }
 std::cout << std::endl;