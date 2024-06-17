#include <bits/stdc++.h>
// Header file needed for vectors ----------------
#include <vector>

using namespace std;


/*
Methods available for vector :-
  --> size()   =>  gives size of vector
  --> push_back()  =>  add a value at end
  --> pop_back()  =>  remove a value from end
  --> clear()  =>  clear whole vector
  --> vect[i]  =>  access i-th element (to read OR write)
  --> swap()  =>  2 args .. 2 pointers .. (v[i] , v[j])
  --> empty()  =>  Check if array is empty or not.
*/


int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for(int i=0; i<n; i++) {
    cin >> v[i];
  }
  int m;
  cin >> m; // m-additional elements

  // push_back() ------------
  for(int i=0; i<m; i++) {
    int ele;
    cin >> ele;
    v.push_back(ele);
  }

  // size() ------------
  int size = v.size();
  cout << "Total size : " << size << "\n";

  // vect[i] ------------
  cout << "Print all elements :\n";
  for(int i=0; i<size; i++) {
    cout << v[i] << " ";
  }
  cout << "\n";

  // pop_back() ------------
  for(int i=0; i<m; i++) {
    v.pop_back();
  }
  size = v.size(); // new size

  // swap() -------------
  cout << "Print elements after swapping & popping out :\n";
  swap(v[0], v[n-1]);
  for(int i=0; i<size; i++) {
    cout << v[i] << " ";
  }
  cout << "\n";

  // clear() -------------
  v.clear();
  size = v.size();
  cout << "Size after clearing vector : " << size << "\n";

  // empty() -------------
  if(!v.empty()) {
    cout << "Array isn't empty.\n";
  }
  else {
    cout << "Array is empty.\n";
  }
  return 0;
}