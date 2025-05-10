#include <iostream>
#include <queue>

using namespace std;

void display(priority_queue<int> pq) {
    while(! pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
}

int main() {
    priority_queue<int> myPQ;

    myPQ.push(3);
    myPQ.push(1);
    myPQ.push(5);
    myPQ.push(2);
    myPQ.push(4);

    cout << myPQ.top() << endl;

    cout << myPQ.size() << endl;

    cout << myPQ.empty() << endl;

    display(myPQ);

    myPQ.pop();
    display(myPQ);

    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(3);
    pq.push(1);
    pq.push(5);
    pq.push(2);
    pq.push(4);

    while(! pq.empty()) {
    cout << pq.top() << " ";
    pq.pop();
    }
    cout << endl;

    priority_queue<int> oddPQ, evenPQ;

    oddPQ.push(1);
    oddPQ.push(3);
    oddPQ.push(5);
    oddPQ.push(7);
    oddPQ.push(9);

    display(oddPQ);

    evenPQ.push(2);
    evenPQ.push(4);
    evenPQ.push(6);
    evenPQ.push(8);
    evenPQ.push(10);

    display(evenPQ);

    oddPQ.swap(evenPQ);

    display(oddPQ);
    display(evenPQ);

    return 0;
}
