#include <iostream>
using namespace std;

int main() {
    // creating a simple vector
    vector <int> v1 = {10, 20, 30};

    // getting size of vector
    cout << v1.size() << " is size of v1." << endl; // op: 3

    // removing element at back
    v1.pop_back(); // {10, 20, 30} => {10, 20}
    // note: cannot store/cout this pop_back returns void. it just mutates the vector.

    // creating a dummy vector
    vector <int> dummy = {11, 22, 33};

    // swapping 2 vectors
    v1.swap(dummy); 
    // v1:{10, 20} => v1:{11, 22, 33}
    // dummy:{11, 22, 33} => dummy:{10, 20}

    // clear all elements in a vector and make it empty vector
    dummy.clear(); // dummy:{10, 20} => dummy: {}

    // check if vector is empty:
    cout << dummy.empty() << " means true" << endl; // 1 means true
    cout << v1.empty() << " means false" << endl; // 0 means false

    // one liner for printing all elements of vector
    for(auto n: v1) {cout << n << " ";};cout << endl;

    return 0;
}