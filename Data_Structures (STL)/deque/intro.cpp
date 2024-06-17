#include <bits/stdc++.h>
// Header file needed for deque ------------
#include <queue>

using namespace std;


/*
Methods available for deque :- 
  --> push_front(x)
  --> push_back(x)
  --> pop_front()
  --> pop_back()
  --> front()
  --> back()
  --> size()
  --> empty()
  --> begin()  =>  these iterator methods aren't offered in queue
  --> end()
  --> rbegin()
  --> rend()
  --> erase(it)  =>  erase the memory pointed by iterator it.
  --> clear()
*/


int main() {
  deque<int> q;
  
  // push_back() , push_front() -----------
  int n, m;
  cin >> n >> m;
  for(int i=0; i<n; i++) {
    int ele;
    cin >> ele;
    q.push_back(ele);
  }
  for(int i=0; i<m; i++) {
    int ele;
    cin >> ele;
    q.push_front(ele);
  }

  // begin() , end() ------------
  //    .. iterate using iterator
  cout << "Elements in deque : ";
  deque<int>::iterator it;
  for(it=q.begin(); it!=q.end(); it++) {
    cout << *(it) << " ";
  }
  cout << "\n";

  // rbegin() , rend() ------------
  cout << "Elements in deque (reverse order) : ";
  for(auto it=q.rbegin(); it!=q.rend(); it++) {
    cout << *(it) << " ";
  }
  cout << "\n";

  // back() , pop_back() ------------
  cout << "Some elements from end : ";
  for(int i=0; i<(n-2); i++) {
    int ele = q.back();
    q.pop_back();
    cout << ele << " ";
  }
  cout << "\n";

  // front() , pop_front() ------------
  cout << "Some elements from front : ";
  for(int i=0; i<(m-2); i++) {
    int ele = q.front();
    q.pop_front();
    cout << ele << " ";
  }
  cout << "\n";

  // size() -------------
  int size = q.size();
  cout << "Size of deque now : " << size << "\n";

  // empty() -------------
  if(!q.empty()) {
    cout << "Deque isn't empty !\n";
  }
  else {
    cout << "Deque is empty !\n";
  }

  // erase() -------------
  //    .. iterate over elements
  auto it2 = q.begin() + 2;
  if(it2 != q.end()) {
    q.erase(it2);
  }
  cout << "Elements of deque : ";
  for(auto it: q) {
    cout << it << " ";
  }
  cout << "\n";

  // clear() -------------
  int size1 = q.size();
  q.clear();
  int size2 = q.size();
  cout << "Sizes before & after clear() : " << size1 << " , " << size2 << "\n";

  return 0;
}