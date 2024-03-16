#include <iostream>

using namespace std;

int main() {
    int sum=0, val=0;

    // EOF or invalid value used to come out of the loop 
    while(cin >> val) {
        sum += val;
    }

    cout << sum << endl;

    return 0;
}