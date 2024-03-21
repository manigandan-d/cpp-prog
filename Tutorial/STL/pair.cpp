#include <iostream>
#include <utility>

using namespace std;

/*
Pairs are commonly used in situations where you need to return two values from a function or store two related pieces of data together.
*/

int main() {
    // pair<int, int> p1 = {1, 3};
    pair<int, int> p1 (1, 3);
    cout << p1.first << " " << p1.second << endl;
    
    pair<int, pair<int, int>> p2 = {1, {3, 4}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;

    pair<int, double> parr[] = {{1, 2}, {3, 4}, {5, 6}};
    int size = sizeof(parr) / sizeof(parr[0]);
    for(int i=0; i<size; i++) {
        cout << parr[i].first << " " << parr[i].second << "|";
    }
    cout << "\n";

    return 0;
}
