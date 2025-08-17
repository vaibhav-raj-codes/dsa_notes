#include <iostream>
using namespace std;

int main() {
    /*  stack do not have indices, it only has generic functions like top, push, pop
        NOTE:
        push()
        pop()
        top()
        empty()
        size()
        all of these work in O(1) and
        are the only 5 actions we can do on stacks.
    */


    stack <int> st;
    // push into stack
    st.push(5); // {5}
    st.push(3); // {3, 5}

    // push into stack alternate method
    st.emplace(7); // {7, 3, 5}

    // pop element from stack
    st.pop(); // {3, 5}

    // getting top element of stack
    cout << st.top() << endl; // op: 3

    // getting size of stack
    cout << st.size() << " is size of stack." << endl; // 2 is size of stack.

    cout << st.empty() << " means false." << endl; // 0 means false.

    // swapping stacks
    stack <int> st1, st2;
    st1.swap(st2);

    return 0;
}