#include <bits/stdc++.h>
// Header file needed for multimap
#include <map>

using namespace std;


/*
Types of multimap :-
  --> multimap<T1, T2>  =>  increasing order of (key)
  --> multimap<T1, T2, greater<T1>>  =>  decreasing order of (key)
*/

/*
Methods available for multimap :-
  --> insert()
  --> count()
  --> find()
  --> erase()  =>  erases 1st occurence of a (key) if it's iterator is passed. If key is passed, then erases every occurence.
  --> clear()
  --> begin()
  --> end()
  --> rbegin()
  --> rend()
  --> size()
  --> empty()
  --> lower_bound()
  --> upper_bound()
*/


int main() {
  // initialising multimap (increasing order) -------------
  multimap<string, int> mp1;

  // initialising multimap (decreasing order) -------------
  multimap<string, int, greater<string>> mp2;

  // insert() --------------
  int n;
  cin >> n;
  for(int i=0; i<n; i++) {
    string key;
    int val;
    cin >> key >> val;
    mp1.insert(make_pair(key, val));
    mp2.insert(make_pair(key, val));
  }

  // size() --------------
  int size = mp1.size();
  cout << "Size of multimap : " << size << "\n";

  // begin(), end() --------------
  // Iterating multimap (using iterator) --------------
  cout << "multimap (increasing order) : ";
  multimap<string, int>::iterator it;
  for(it=mp1.begin(); it!=mp1.end(); it++) {
    cout << it->first << "=" << it->second << " ";
  }
  cout << "\n";
  cout << "multimap (decreasing order) : ";
  for(auto it=mp2.begin(); it!=mp2.end(); it++) {
    cout << it->first << "=" << it->second << " ";
  }
  cout << "\n";

  // count(), find(), erase() --------------
  //    .. for erasing 1st occurence of the key.
  string inputKey;
  cin >> inputKey;
  if(mp1.count(inputKey) > 0) {
    // this key exists in map
    cout << "Count of " << inputKey << " : " << mp1.count(inputKey) << "\n";
    auto it = mp1.find(inputKey);
    mp1.erase(it); // deletes 1st entry found in multimap.. corresponding inputKey
    cout << "Entry deleted : " << it->first << " = " << it->second << "\n";
  }
  else {  // mp1.count(inputKey) == 0
    // this key doesn't exists
    cout << inputKey << " doesn't exists in our multimap.\n";
  }

  // erase() ------------
  //    .. for erasing all occurences of the key.
  string inputKey2;
  cin >> inputKey2;
  if(mp1.find(inputKey2) != mp1.end()) {
    mp1.erase(inputKey2);
  }
  
  // Iterating over entries of multimap (without using iterator) --------------
  for(auto it: mp1) {
    cout << it.first << "=" << it.second << " ";
  }
  cout << "\n";

  // empty() , rbegin() , rend() -------------
  bool flag = mp1.empty();
  if(flag == true) {
    cout << "multimap is empty.\n";
  }
  else {
    cout << "multimap isn't empty.\n";
    cout << "multimap in reverse order : ";
    for(auto it=mp1.rbegin(); it!=mp1.rend(); it++) {
      cout << it->first << "=" << it->second << " ";
    }
    cout << "\n";
  }

  // lower_bound() , upper_bound() ---------------
  string inputKey3;
  cin >> inputKey3;
  auto it1 = mp1.lower_bound(inputKey3);
  auto it2 = mp1.upper_bound(inputKey3);
  if(it1 != mp1.end()) {
    cout << "Lower bound for " << inputKey3 << " : ";
    cout << it1->first << " = " << it1->second << "\n";
  }
  if(it2 != mp1.end()) {
    cout << "Upper bound for " << inputKey3 << " : ";
    cout << it2->first << " " << it2->second << "\n";
  }

  // clear() --------------
  cout << "Size before clearing : " << mp1.size() << "\n";
  mp1.clear();
  cout << "Size after clearing : " << mp1.size() << "\n";

  return 0;
}