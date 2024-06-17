#include <bits/stdc++.h>
// Header files needed for this Policy based data structure :
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
// namespace needed for this pbds :
using namespace __gnu_pbds;

// This is the type of ordered set
// A long type-definition --> therefore a name-replacement
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set1;
// 1st arg  -->  data-type of elements in container
// 3rd arg  -->  comparator (defines in which order elements are stored)
//    less<int>  =>  increasing order

typedef tree<int, null_type, greater<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set2;
//    greater<int>  =>  decreasing order

typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set3;
//    less_equal<int>  =>  multiset, increasing order

typedef tree<int, null_type, greater_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set4;
//    greater_equal<int>  =>  multiset, decreasing order
// 4th arg  -->  Ordered set is implemented using Red-black tree


int main() {
  ordered_set1 st1;
  ordered_set2 st2;
  ordered_set3 st3;
  ordered_set4 st4;
  int n;
  cin >> n;

  // Inserting elements
  // -------------------
  for(int i=0; i<n; i++) {
    int ele;
    cin >> ele;
    st1.insert(ele);
    st2.insert(ele);
    st3.insert(ele);
    st4.insert(ele);
  }

  // Seeing how values are stored in sorted-order
  // -------------------
  cout << "Increasing ordered-set :\n";
  for(auto it: st1) {
    cout << it << " ";
  }
  cout << "\n";
  cout << "Decreasing ordered-set :\n";
  for(auto it: st2) {
    cout << it << " ";
  }
  cout << "\n";
  cout << "Increasing ordered-multiset :\n";
  for(auto it: st3) {
    cout << it << " ";
  }
  cout << "\n";
  cout << "Decreasing ordered-multiset :\n";
  for(auto it: st4) {
    cout << it << " ";
  }
  cout << "\n";

  // Operations over increasing ordered-set
  // -----------------
  cout << "Binary search ----\n";
  int n1 = *(st1.lower_bound(4));
  int n2 = *(st1.upper_bound(4));
  cout<<n1<<" "<<n2<<"\n";

  // Finding element at any index
  // -----------------
  int ele3 = *(st1.find_by_order(3));
  int ele1 = *(st1.find_by_order(1));
  cout << ele3 << " " << ele1 << "\n";
  
  // Finding no. of elements  <  a value
  // -----------------
  int cnt1 = st1.order_of_key(3);
  int cnt2 = st1.order_of_key(6);
  cout << cnt1 << " " << cnt2 << "\n";
  
  // How this order works in ordered-multiset
  // -----------------
  // Count of ele  <  given_key
  //    or if key is present.. 1st index of (key).
  int cnt3 = st3.order_of_key(4);
  int cnt4 = st3.order_of_key(6);
  cout << cnt3 << " " << cnt4 << "\n";
  return 0;
}