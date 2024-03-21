#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums = {3, 6, 15, 17, 18, 21, 55, 100, 200, 300};
    int count = 0;

    for(auto i: nums) {
        if((i%3 == 0) || (i%5 == 0)) {
            count += 1;
        }
    }

    cout << count << endl;

    return 0;
}
