#include <iostream>
#include <vector>

using namespace std;

int main() {
    int arr[] = {2, 4, 6, 8, 10};

    for(auto i: arr) {
        cout << i << " ";
    }
    cout << endl;

    vector<int> vect = {1, 3, 5, 7, 9};

    for(auto i: vect) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
