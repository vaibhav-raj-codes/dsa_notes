#include <iostream>
using namespace std;

int main() {
    // note: push and pop happens in O(log n) and top happens in O(1)


    // in priority queue the largest element is store in front 
    priority_queue <int> pq;

    pq.push(3); // {3}
    pq.push(6); // {6, 3}
    pq.emplace(2); // {6, 3, 2}
    pq.emplace(5); // {6, 5, 3, 2}

    cout << pq.top() << endl; // op: 6

    pq.pop(); // {5, 3, 2}
    cout << pq.top() << endl; // op: 5

    // size, swap, empty functions same as others

    // minimum heap: stores minimum element at the top
    priority_queue <int, vector<int>, greater<int>> pq1;
    pq1.push(3); // {3}
    pq1.push(6); // {3, 6}
    pq1.emplace(2); // {2, 3, 6}
    pq1.emplace(5); // {2, 3, 5, 6}

    cout << pq1.top() << endl; // op: 2

    return 0;
}