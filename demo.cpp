#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void display(vector<int> vect) {
    for(auto i: vect) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    display(v);

    vector<int> :: iterator it = v.begin();

    while(it != v.end()) {
        if(*it % 2 == 0) {
            v.erase(it);
        }

        else {
            it++;
        }
    }

    display(v);

    return 0;
}
