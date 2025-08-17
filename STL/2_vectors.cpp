#include<iostream>
using namespace std;

int main() {
    // note: vector maintains a singly linked list so it is takes more time complexity when inserting an element to the front.

    // creating an empty vector:
    vector <int> v;

    // size of vector
    cout << "size of vector is " << v.size() << endl; // op: 0

    // adding a vector to the back of vector v
    // note: this is the faster way
    v.emplace_back(1);

    // alternate to emplace_back
    // note: this is the slower way
    v.push_back(1);

    // creating a vector with multiple instances of a number:
    vector <int> v2(5); // creates zero array {0, 0, 0, 0, 0} i.e five 0s.
    vector <int> v3(5, 7); // creates array {7, 7, 7, 7, 7} i.e five 7s.

    // copying a vector to another vector
    vector <int> copyV(v3); // copies array {7, 7, 7, 7, 7}.

    // declaring a vector of pair data type:
    vector <pair<int, int>> v1;

    // push_back to pair data type
    v1.push_back({1, 2});

    // emplace_back to pair data type
    v1.emplace_back(5, 3);


    // creating a new simple reference vector:
    vector <int> nv = {10, 20, 30, 40, 50};

    // deleting an element from vector
    nv.erase(nv.begin() + 1); // {10, 20, 30, 40, 50} => {10, 30, 40, 50}
    //                                ^ (this element gets erased)

    // delete multiple element from and to a position
    nv.erase(nv.begin() + 1, nv.begin() + 3); // [begin, end) 
    // {10, 30, 40, 50} => {10, 50}
    //       ^   ^ ([1->3) will get deleted but not including 3)
    
    // Insert function

    // inserting at begining of a vector
    nv.insert(nv.begin(), 200); // {10, 50} => {200, 10, 50}
    // inserting at a specific position
    nv.insert(nv.begin() + 1, 20); // {200, 10, 50} => {200, 20, 10, 50}

    // inserting at back of a vector
    nv.insert(nv.end(), 40); // {200, 20, 10, 50} => {200, 20, 10, 50, 40}

    // inserting multiple elements at a position
    nv.insert(nv.begin() + 2, 3, 2); 
    // telling the computer to insert 3 2s at position begin() + 2
    // {200, 20, 10, 50, 40} => {200, 20, 2, 2, 2, 10, 50, 40}

    // copying an entire vector to another vector
    vector <int> dummy = {69, 420};
    nv.insert(nv.begin(), dummy.begin(), dummy.end());
    // {200, 20, 2, 2, 2, 10, 50, 40} => {69, 420, 200, 20, 2, 2, 2, 10, 50, 40}

    // here we reduce the size of vector to make it smaller
    nv.erase(nv.begin(), nv.end() - 3);
    // {69, 420, 200, 20, 2, 2, 2, 10, 50, 40} => {10, 50, 40}



    for(auto n: nv) {cout << n << endl;}
    
    return 0;
}