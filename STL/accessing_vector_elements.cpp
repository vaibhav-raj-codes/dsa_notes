#include <iostream>
using namespace std;

int main() {
    // declaring an vector for reference:
    vector <int> v1(5, 20); // {20, 20, 20, 20, 20}

    // accessing elements of a vector at a position
    cout << v1[0] << " or " << v1.at(2) << endl; // op: 20 or 20

    // creating an iterator 
    vector <int>:: iterator it = v1.begin(); // it points to the memory address of first element.

    











    return 0;
}