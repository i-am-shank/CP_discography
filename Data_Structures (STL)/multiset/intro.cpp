#include <bits/stdc++.h>
// Header file needed for multiset
#include <set>

using namespace std;


/*
Types of multiset :-
  --> multiset<T>  =>  increasing order
  --> multiset<T, greater<T>>  =>  decreasing order
*/

/*
Methods available for multiset :-
  --> insert()
  --> begin()
  --> end()
  --> rbegin()
  --> rend()
  --> count()
  --> find()
  --> erase()
  --> size()
  --> clear()
  --> lower_bound()
  --> upper_bound()
*/


int main() {
  // initializing multiset (increasing order) -----------
  multiset<int> st1;

  // initializing multiset (decreasing order) -----------
  multiset<int, greater<int>> st2;

  // insert() ------------
  int n;
  cin >> n;
  vector<int> arr;
  for(int i=0; i<n; i++) {
    int ele;
    cin >> ele;
    st1.insert(ele);
    st2.insert(ele);
    arr.push_back(ele);
  }

  // initializing multiset (using array)
  multiset<int> st3(arr.begin(), arr.end());

  // size() -------------
  int size = st1.size();
  cout << "Size of multiset : " << size << "\n";

  // iterating without iterator ------------
  cout << "Elements of multiset : ";
  for(auto it: st1) {
    cout << it << " ";
  }
  cout << "\n";

  // begin() , end() ------------
  //    .. iterating with iterator
  cout << "Elements of decreasing-multiset : ";
  multiset<int, greater<int>>::iterator it2;
  for(it2=st2.begin(); it2!=st2.end(); it2++) {
    cout << *(it2) << " ";
  }
  cout << "\n";

  // rbegin() , rend() ------------
  //    .. iterating using "auto" keyword
  cout << "Elements of multiset (in reverse order) : ";
  for(auto it=st1.rbegin(); it!=st1.rend(); it++) {
    cout << *(it) << " ";
  }
  cout << "\n";

  // find() , end() , erase() -------------
  //    .. to find 1st occurence of no.
  int input1;
  cin >> input1;
  if(st1.find(input1) != st1.end()) {
    auto it = st1.find(input1);
    st1.erase(it); // erase 1st occurence of (input1).
    cout << "Erased element : " << *(it) << "\n";
  }

  // count() ------------
  int input2;
  cin >> input2;
  if(st1.count(input2) > 0) {
    st1.erase(input2); // erase all occurence of (input2).
  }
  else {
    cout << input2 << " isn't present in multiset st1.";
  }

  // lower_bound() , upper_bound() -------------
  int input3;
  cin >> input3;
  auto it3 = st1.lower_bound(input3);
  auto it4 = st1.upper_bound(input3);
  if(it3 != st1.end()) {
    cout << "Lower bound of " << input3 << " : " << *(it3) << "\n";
  }
  if(it4 != st1.end()) {
    cout << "Upper bound of " << input3 << " : " << *(it4) << "\n";
  }

  // clear() , erase() ------------
  cout << "Before clearing, sizes of st1 & st2 : " << st1.size() << " , " << st2.size() << "\n";
  st1.clear();
  st2.erase(st2.begin(), st2.end());
  cout << "After clearing, sizes of st1 & st2 : " << st1.size() << " , " << st2.size() << "\n";

  return 0;
}