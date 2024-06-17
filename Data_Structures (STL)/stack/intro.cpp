#include <bits/stdc++.h>
// Header file needed for stack
#include <stack>

using namespace std;


/*
Methods available for stack :-
  --> size()  =>  size of stack
  --> push(x)  =>  add new element x at end
  --> pop()  =>  removes last element
  --> top()  =>  print last element
  --> empty()  =>  check if empty.
*/


int main() {
  int n;
  cin >> n;
  stack<int> stk;

  // push() --------------
  for(int i=0; i<n; i++) {
    int ele;
    cin >> ele;
    stk.push(ele);
  }

  // pop() & top() -------------
  if(stk.size() >= 2) {
    cout << "Removing top 2 elements :\n";
    int ans1 = stk.top();
    stk.pop();
    int ans2 = stk.top();
    stk.pop();
    cout << ans1 << " " << ans2 << "\n";
  }

  // size() -------------
  int size = stk.size();
  cout << "Size of stack = " << size << "\n";

  // empty() -------------
  if(!stk.empty()) {
    cout << "Stack isn't empty.\n";
  }
  else {
    cout << "Stack is empty.\n";
  }
  return 0;
}