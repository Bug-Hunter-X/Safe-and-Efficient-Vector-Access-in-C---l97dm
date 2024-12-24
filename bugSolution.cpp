std::vector<int> vec; 
for (int i = 0; i < 10; ++i) { 
  vec.push_back(i); 
}

// Accessing elements using at() to handle out-of-bound access
for (int i = 0; i < vec.size(); ++i) { 
  std::cout << vec.at(i) << " "; 
}
std::cout << std::endl;

// Accessing vector elements using iterators
for (auto it = vec.begin(); it != vec.end(); ++it) {
    std::cout << *it << " ";
}
std::cout << std::endl;

// Accessing vector using range-based for loop
for(int x : vec){
    std::cout << x << " ";
}
std::cout << std::endl; 