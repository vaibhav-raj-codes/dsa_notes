#include <iostream>
using namespace std;

int main() {
    // pairs in cpp 
    pair <int, int> p1 = {1, 2};
    cout << p1.first << " and " << p1.second << endl;

    // nesting of pairs
    pair <int, pair<int, int>> p2 = {1, {23, 45}};
    cout << p2.first << " and " << p2.second.first << " lastly " << p2.second.second << endl;

    // pair of arrays
    pair <int, int> arr1[] = {{1, 2}, {4, 5}, {6, 7}};
    cout << arr1[1].first << " is first element in pair and " << arr1[1].second << " is second." << endl;

    return 0;
}