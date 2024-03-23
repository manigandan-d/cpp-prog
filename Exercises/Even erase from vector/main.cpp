#include <iostream>
#include <vector>

using namespace std;

/*
You are given a vector of integers, "v", containing N distinct positive integers. Your task is to remove all even integers from the vector while iterating over it.
*/

void display(vector<int> vect) {
    for(auto i: vect) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

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

/*
Sample Input:
None. The vector "v" is predefined in the code with the initial values.
*/
