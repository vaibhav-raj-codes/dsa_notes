#include <iostream>
#include <list>
using namespace std;

int main() {
    // note: doubly linked list is maintained for a list so it has better time complexity when pushing to the front.


    // declaring a list
    // step 1: #include <list>
    // step 2: 
    list<int> ls;

    // insert element to back
    // note: this is slower method
    ls.push_back(2); // {2}

    // insert element to back
    // note: this is faster method
    ls.emplace_back(4); // {2, 4}


    // pushing at front can be faster than inserting since lists are doubly linked lists

    // pushing element to front
    // note: this is slower method
    ls.push_front(5); // {5, 2, 4}

    // inserting element to front 
    // note: this is faster method
    ls.emplace_front(7); // {7, 5, 2, 4}

    // rest of the functions are same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap


    for(auto n: ls) {cout << n << " ";};cout << endl;
    return 0;
}