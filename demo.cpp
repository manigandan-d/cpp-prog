#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> ls;

    ls.push_back(5);
    ls.emplace_back(7);

    ls.push_front(3);
    ls.emplace_front(1);

    for(auto i: ls) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
