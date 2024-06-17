#include <bits/stdc++.h>
// Header file needed for queue
#include <queue>

using namespace std;


/*
Methods available for queue :-
  --> size()  =>  size of stack
  --> push(x)  =>  add new element x at end
  --> pop()  =>  removes first element
  --> front()  =>  print first element
  --> back()  =>  print last element
  --> empty()  =>  check if empty.
*/


int main() {
  int n;
  cin >> n;
  queue<int> q;

  // push() --------------
  for(int i=0; i<n; i++) {
    int ele;
    cin >> ele;
    q.push(ele);
  }

  // pop() & front() -------------
  if(q.size() >= 2) {
    cout << "Removing front 2 elements :\n";
    int ans1 = q.front();
    q.pop();
    int ans2 = q.front();
    q.pop();
    cout << ans1 << " " << ans2 << "\n";
  }

  // back() -------------
  if(q.size() >= 1) {
    cout << "Element at last position : ";
    int ans3 = q.back();
    cout << ans3 << "\n";
  }

  // size() -------------
  int size = q.size();
  cout << "Size of queue = " << size << "\n";

  // empty() -------------
  if(!q.empty()) {
    cout << "Queue isn't empty.\n";
  }
  else {
    cout << "Queue is empty.\n";
  }
  return 0;
}