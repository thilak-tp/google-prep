# \# On my way to Google.

# 

# \- C++ in-dept understanding of concepts.

# \- Data Structures and Algorithms

# \- System Design, Principles

# \- Artificial intelligence

# \- One or two super interesting projects

# \- Google worthy resume

## The Standard Template Library
# Containers:
Pair: It is a pair of data. Include the <utility> header to include this.
Directory: dsa/stl/pair.cpp
Example: pair <int, int> p = {1,2} create a pair of two intergers 1 and 2;
- You can directly use the constructor to assign pair values to the pair object
-- std::pair<int, std::string> p1(1, "apple");
- Using make_pair() to infer the type of pair values so that we don't have to specify the datatype
-- auto p2 = std::make_pair(2, "banana");
- The pair values can be used as well as modified as follows
-- std::cout << p1.first << " " << p1.second;
- Pairs can be compared in lexicographical order using comparison operators
-- std::pair<int, int> a = {1, 5};
-- std::pair<int, int> b = {1, 10};
-- std::cout << (a < b);   // true because 5 < 10
-- std::cout << (a == b);  // false
- Pairs can be swapped using the std::swap funciton
-- std::swap(p1, p2);
- One pair can be assigned to another using the equal operator
-- p1 = p2;
- Pairs can be nested into other containers
-- std::vector<std::pair<int, std::string>> vec;
- Pairs can be nested
-- std::pair<int, std::pair<int, int>> nested = {1, {2, 3}};
-- std::cout << nested.second.first;  // 2
