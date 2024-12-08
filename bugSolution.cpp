std::vector<int> vec = {1, 2, 3, 4, 5};
for (int i = 0; i < vec.size(); ++i) { // Corrected: Loop condition changed to i < vec.size()
    std::cout << vec[i] << " ";
}
std::cout << std::endl; // Alternatively, use iterators for better safety:
// for (auto it = vec.begin(); it != vec.end(); ++it) {
//     std::cout << *it << " ";
// }
// std::cout << std::endl;