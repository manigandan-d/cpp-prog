#include <iostream>
#include <deque>

using namespace std;

void display(deque<int> dq) {
    for(int i=0; i<dq.size(); i++) {
        cout << dq[i] << " ";
    }
    cout << endl;
}

int main() {
    deque<int> dq;

    dq.push_back(5);
    dq.emplace_back(7);

    dq.push_front(3);
    dq.emplace_front(1);

    cout << dq.front() << endl;
    cout << dq.back() << endl;

    display(dq);

    return 0;
}
