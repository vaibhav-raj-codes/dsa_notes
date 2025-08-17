#include <iostream>
using namespace std;

int main() {
    // note: all operations are happening in O(1) time complexity

    queue <int> q;
    q.push(1); // {1}
    q.emplace(5); // {1, 5}

    // modify back element
    q.back() += 5; // addes 5 to back ele i.e, {1, 10}

    // modify/print front
    q.front() -= 1; // {0, 10}
    cout << q.front() << endl; // op: 0

    q.pop(); // {0, 10} => {10}

    // size, swap, empty same as stack

    return 0;
}