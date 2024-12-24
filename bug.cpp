std::vector<int> vec; 
for (int i = 0; i < 10; ++i) { 
  vec.push_back(i); 
}

for (int i = 0; i < vec.size(); ++i) { 
  // Accessing elements using at() to handle out-of-bound access
  std::cout << vec.at(i) << " "; 
}

//Accessing vector elements using iterators
for (auto it = vec.begin(); it != vec.end(); ++it) {
    std::cout << *it << " ";
}

//Accessing vector using range-based for loop
for(int x : vec){
    std::cout << x << " ";
}