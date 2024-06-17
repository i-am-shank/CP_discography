#include <bits/stdc++.h>
// Header file needed for priority_queue
#include <queue>

using namespace std;


/*
Methods available for priority_queue (min & max .. both)
  --> push()
  --> pop()
  --> top()
  --> empty()
  --> size()
*/


int main() {
  // initializing min-priority-queue -------------
  priority_queue<int, vector<int>, greater<int>> minHeap;
  // data-type of elements, container in which elements stored, comparator (can use customcomparator)
  vector<int> arr;

  // push() ---------------
  int n;
  cin >> n;
  for(int i=0; i<n; i++) {
    int ele;
    cin >> ele;
    minHeap.push(ele);
    arr.push_back(ele);
  }

  // another way of initialising priority_queue ----------------
  // initialising max-priority-queue ---------------
  priority_queue<int> maxHeap(arr.begin(), arr.end());

  // empty(), top(), pop() --------------
  cout << "maxHeap elements : ";
  while(!maxHeap.empty()) {
    int curr = maxHeap.top();
    cout << curr << " ";
    maxHeap.pop();
  }
  cout << "\n";

  // size() --------------
  int size = minHeap.size();
  cout << "Size of minHeap : " << size << "\n";
  cout << "minHeap elements : ";
  while(minHeap.size() > 0) {
    cout << minHeap.top() << " ";
    minHeap.pop();
  }
  cout << "\n";

  return 0;
}