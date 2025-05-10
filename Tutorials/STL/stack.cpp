#include <iostream>
#include <stack>

using namespace std;

void display(stack<int> st) {
    while(! st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main() {
    stack<int> myStack;

    myStack.push(3);
    myStack.push(1);
    myStack.push(5);
    myStack.emplace(2);
    myStack.emplace(4);

    cout << myStack.top() << endl;

    display(myStack);

    myStack.pop();
    display(myStack);

    cout << myStack.size() << endl;

    cout << myStack.empty() << endl;

    stack<int> oddSt, evenSt;

    oddSt.push(1);
    oddSt.push(3);
    oddSt.push(5);
    oddSt.push(7);
    oddSt.push(9);

    display(oddSt);

    evenSt.push(2);
    evenSt.push(4);
    evenSt.push(6);
    evenSt.push(8);
    evenSt.push(10);

    display(evenSt);

    oddSt.swap(evenSt);

    display(oddSt);
    display(evenSt);

    return 0;
}
