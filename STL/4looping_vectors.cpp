#include <iostream>
using namespace std;

int main() {
    // simple vector declaration
    vector <int> v1 = {11, 22, 33};

    // for loop with iterators
    for(vector <int>::iterator it = v1.begin(); it != v1.end(); it++) {
        cout << *(it) << endl;
    }

    // simpler way with auto
    for(auto it = v1.begin(); it != v1.end(); it++) {
        cout << *(it) << endl;
    }

    // for of loop in cpp
    cout << "for of demo" << endl;
    for(auto num: v1) {
        cout << num << endl;
    }

    // note: both it and num are just variable we can use to iterate

    








    return 0;
}