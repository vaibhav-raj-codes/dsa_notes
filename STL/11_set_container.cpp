#include <iostream>
#include <set>
using namespace std;

int main() {
    // NOTE: declare #include <set> first
    // everything happens in O(log n) time complexity
    // set stores everything in a sorted order and each element is unique
    set <int> s;
    s.insert(3); // {3}
    s.insert(2); // {2, 3}
    s.emplace(2); // {2, 3}
    s.emplace(5); // {2, 3, 5}
 
    // Fuctionality of insert in vector
    // can be used also, that only increases efficiency

    /*  begin(), end(), rbegin(), rend(), size(),
        empty() and swap() are same as those of above.  */

    // {2, 3, 5}
    auto it = s.find(3); // {3}
    // this returns the iterator which points to the number 3
    // NOTE: if we try to find something beyond size of set it will return set.end()
    for( ;it != s.end(); it++) {
        cout << *(it) << " ";
    } cout << endl; // op: {3, 5}

    // erasing an element from the set
    s.erase(5); // {2, 3, 5} => {2, 3}
    // we can also erase using iterators
    // s.erase(it);

    // check if an element exists in set (easy way)
    cout << s.count(2) << endl; // op: 1
    // if count is 1 it means it exists in set and if count is 0 it doesn't exist in set

    // creating dummy set
    set <int> dummy = {2, 3, 7, 5, 1}; // stored as {1, 2, 3, 5, 7}
    auto it1 = dummy.find(2);
    auto it2 = dummy.find(5);
    dummy.erase(it1, it2); // deletes [2, 5)
    // i.e {1, 2, 3, 5, 7} => {1, 5, 7}

    // lower_bound() and upper_bound() function works in the same way 
    // as in vector it does.

    // this is the syntax
    auto it3 = s.lower_bound(5);
    auto it4 = s.upper_bound(7);


    for(auto n: dummy) {cout << n << " ";} cout << endl;

    return 0;
}