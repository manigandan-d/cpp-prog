#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
You are given a vector of integers, "vect", containing N distinct integers. Your task is to sort the elements of the vector in non-decreasing order using the "std::sort" algorithm provided by the Standard Template Library (STL).
*/

void display(vector<int> vect) {
    for(auto i: vect) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    vector<int> vect = {10, 2, -1, 4, 79, 60};

    sort(vect.begin(), vect.end());

    display(vect);

    return 0;
}

/*
Sample Input:
None. The vector "vect" is predefined in the code with the initial values.
*/
