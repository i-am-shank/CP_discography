#include <bits/stdc++.h>
// Header file needed for map :
#include <map>
// Header file for unordered_map :
#include <unordered_map>

using namespace std;


/*
Methods available for map OR unordered_map :-
  --> insert( pair <key , value> )   =>   insert this (key, value) pair in map. If key already present, updates it's value.
  --> <map_name>[key]   =>   If present returns value corresponding to (key). Else initialise (key) in map with value 0. Used for accessing/manipulating value.
  --> begin()   =>   pointer pointing to 1st element stored
  --> end()   =>   pointer pointing to memory just after last element stored
  --> size()   =>   no. of unique keys in map
  --> find(key)   =>   if present, returns pointer pointing to memory allocated to (key). Else returns end() pointer.
  --> erase(key)   =>   remove entry of (key) from map (if present, size-- also done).
*/


int main() {
  // Ways of declaring a map ------------
  map<string, int> mp;
  map<string, int> mp2 = {{"Shanks", 13}, {"Adi", 30}, {"Archa", 8}, {"Bhadra", 2}};
  unordered_map<string, int> mp3 = {{"Shanks", 13}, {"Adi", 30}, {"Archa", 8}, {"Bhadra", 2}};

  // Iterating map (sorted order), begin(), end() ------------
  cout << "map stores data in sorted order, as per key :-\n";
  for(auto it=mp2.begin(); it!=mp2.end(); it++) {
    // it  -->  pointer to key-value pair.
    cout << it->first << " " << it->second << " , ";
  }
  cout << "\n";
  // Iterating unordered_map (random order) -------------
  cout << "unordered_map stores data in random order (same key-value pairs as above) :-\n";
  for(auto it=mp3.begin(); it!=mp3.end(); it++) {
    cout << it->first << " " << it->second << " , ";
  }
  cout << "\n";

  // insert() --------------
  int n;
  cin >> n;
  for(int i=0; i<n; i++) {
    string key;
    int val;
    cin >> key >> val;
    mp.insert(make_pair(key, val));
  }

  // find() -------------
  auto it1 = mp2.find("Shanks");
  if(it1 != mp2.end()) {
    cout << it1->first << " " << it1->second << "\n";
  }
  else {
    cout << "Shanks-key isn't present.\n";
  }
  auto it2 = mp2.find("Shashank");
  if(it2 != mp2.end()) {
    cout << it2->first << " " << it2->second << "\n";
  }
  else {
    cout << "Shashank-key isn't present.\n";
  }

  // <map-name>[key] ---------------
  // ..  manipulate values , can also initialise new keys
  for(auto it: mp2) {
    int x = it.second;
    int sum = 0;
    while(x != 0) {
      int digit = (x % 10);
      sum += digit;
      x /= 10;
    }
    it.second = sum;
  }

  // map --> iterator ------------
  map<string,int>::iterator it;
  for(it=mp2.begin(); it!=mp2.end(); it++) {
    cout << it->first << " " << it->second << " , ";
  }
  cout << "\n";

  // size() --------------
  int size = mp2.size();

  // erase() --------------
  if(mp2["yoinky"] != 0) {
    // above statement has initialised "yoinky" too.. 
    cout << "yoinky : " << mp2["yoinky"];
    cout << mp2.size() << " ..after removing.. ";
    mp2.erase("yoinky");
    cout << mp2.size() << "\n";
  }

  return 0;
}