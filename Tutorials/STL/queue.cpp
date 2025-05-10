#include <iostream>
#include <queue>

using namespace std;

void display(queue<int> q) {
    while(! q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main() {
    queue<int> myQueue;

    myQueue.push(3);
    myQueue.push(1);
    myQueue.push(5);
    myQueue.emplace(2);
    myQueue.emplace(4);

    cout << myQueue.front() << endl;
    cout << myQueue.back() << endl;

    display(myQueue);

    myQueue.pop();
    display(myQueue);

    cout << myQueue.size() << endl;

    cout << myQueue.empty() << endl;

    queue<int> oddQ, evenQ;

    oddQ.push(1);
    oddQ.push(3);
    oddQ.push(5);
    oddQ.push(7);
    oddQ.push(9);

    display(oddQ);

    evenQ.push(2);
    evenQ.push(4);
    evenQ.push(6);
    evenQ.push(8);
    evenQ.push(10);

    display(evenQ);

    oddQ.swap(evenQ);

    display(oddQ);
    display(evenQ);

    return 0;
}
