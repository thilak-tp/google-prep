// A program to utilize Pair from the C++ STL

#include <iostream>
#include <utility>

using namespace std;

// A function to take a pair of numbers from the user and return a pair
pair <int, int> takePairFromUser() {
  pair <int, int> p1;
  cout<<"Enter two numbers for the pair"<<endl;
  cin>>p1.first>>p1.second;
  return p1;
}

// A function to display the values in a pair
void displayPair(auto &p1) {
  cout<<"First:"<<p1.first<<" Second:"<<p1.second<<endl;
}

// A funciton to take a pair of any type of datatype which uses auto to infer from the data it gets
auto autoTakePairFromUser() {
  int id;
  string name;
  cout<<"Enter a the ID and name"<<endl;
  cin>>id>>name;
  auto p = make_pair(id, name);
  return p;
}

int main() {
  
  pair <int, int> p1 = takePairFromUser();
  auto p = autoTakePairFromUser();
  displayPair(p1);
  displayPair(p);
  return 0;
 
} 
