#include <iostream>
using namespace std;

int main() {

    deque<int> dq;
    dq.push_back(1); // {1}
    dq.emplace_back(3); // {1, 3}
    dq.push_front(5); // {5, 1, 3}
    dq.emplace_front(7); // {7, 5, 1, 3}

    dq.pop_back(); // {7, 5, 1}
    dq.pop_front(); // {5, 1}

    dq.back();
    dq.front();

    // rest functions are same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap.

    return 0;
}