#include <iostream>
using namespace std;

int main() {
    // declaring an vector for reference:
    vector <int> v1 = {11, 22, 33, 44};

    // accessing elements of a vector at a position
    cout << v1[0] << " or " << v1.at(2) << endl; // op: 11 or 33

    // accessing last element of vector
    cout << v1.back() << " is the last element." << endl;

    // creating an iterator 
    vector <int>:: iterator it = v1.begin(); // it points to the memory address of first element.

    // printing the first element and second
    cout << *(it) << " and " << *(it++) << endl; // op: 11 and 22


    // few other iterators
    vector <int>:: iterator it1 = v1.begin(); 
    // points to v1: 11   22   33   44   55
    //                ^
    //              begin()

    vector <int>:: iterator it2 = v1.end();
    // points to v1: 11   22   33   44   55 (past-the-end)
    //                                            ^
    //                                          end()

    vector <int>:: reverse_iterator it3 = v1.rbegin();
    // this is almost never used but we can use it3++
    // v1: 11   22   33   44   55
    //                         ^
    //                       rbegin()

    vector <int>:: reverse_iterator it4 = v1.rend();
    // this is almost never used but we can use it4++
    // v1: 11   22   33   44   55
    //  ^
    // rend() (before the first element)

    return 0;
}