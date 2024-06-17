#include <bits/stdc++.h>
// Header file for set :-
#include <set>
// Header file for unordered_set :-
#include <unordered_set>

using namespace std;


/*
set  ====>  stores unique values in random order
unordered_set  ====>  stores unique values in sorted order
*/

/*
Methods available for set & unordered_set :- 
  --> insert()
  --> begin()
  --> end()
  --> rbegin()
  --> rend()
  --> size()
  --> empty()
  --> erase()
  --> clear()
  --> count()
  --> find()
*/

/*
Methods available for set (but not unordered_set) :-
  --> lower_bound()
  --> upper_bound()
*/


int main() {
  set<int> st1;
  unordered_set<int> st2;
  

  // insert() -------------
  int n;
  cin >> n;
  for(int i=0; i<n; i++) {
    int ele;
    cin >> ele;
    st1.insert(ele);
    st2.insert(ele);
  }

  // iterate in set (auto keyword) ------------
  cout << "set iterated : ";
  for(auto ele: st1) {
    // These aren't pointers.. but the elements
    cout << ele << " ";
  }
  cout << "\n";

  // iterate in unordered_set (iterator) ------------
  // begin() , end() -------------
  cout << "unordered_set iterated : ";
  unordered_set<int>::iterator it;
  for(it=st2.begin(); it!=st2.end(); it++) {
    // These are pointers to different elements
    cout << *(it) << " ";
  }
  cout << "\n";

  // lower_bound() , upper_bound() -------------
  int x;
  cin >> x;
  int ans1 = *(st1.lower_bound(x));
  int ans2 = *(st1.upper_bound(x));
  cout <<"Lower & Upper bounds of "<< x <<" : "<< ans1 <<" "<< ans2 <<"\n";

  // count() , find() , erase() -------------
  int input1;
  cin >> input1;
  if(st1.count(input1) > 0) {
    auto it = st1.find(input1);
    st1.erase(it);
    cout << "Erased element : " << *(it) << "\n";
  }

  // size() , rbegin() , rend() ------------
  cout << "Size of st1 : " << st1.size() << "\n";
  cout << "Elements of st1 : ";
  for(auto it=st1.rbegin(); it!=st1.rend(); it++) {
    cout << *(it) << " ";
  }
  cout << "\n";

  // empty() , clear() ------------
  if(!st1.empty()) {
    cout << "Set st1 isn't empty !\n";
    st1.clear();
    cout << "Size of st1 : " << st1.size() << "\n";
  }
  else {
    cout << "Set st1 is empty !\n";
  }

  return 0;
}