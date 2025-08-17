#include<iostream>
using namespace std;

int main() {
    // creating an empty vector:
    vector <int> v;

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

    return 0;
}