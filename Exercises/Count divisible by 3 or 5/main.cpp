#include <iostream>
#include <vector>

/*
You are given a vector of integers, 'nums', containing N distinct positive integers. Your task is to find and print the count of integers in the vector that are divisible by either 3 or 5.
*/

using namespace std;

int main() {
    vector<int> nums;
    int count = 0;
    int num;

    while(cin >> num) {
        nums.push_back(num);
    }

    for(auto i: nums) {
        if((i%3 == 0) || (i%5 == 0)) {
            count += 1;
        }
    }

    cout << count << endl;

    return 0;
}

/*
Sample Input: 
3 6 15 17 18 21 55 100 200 300
*/
