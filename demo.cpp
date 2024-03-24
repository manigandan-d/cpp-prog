#include <iostream>
#include <vector>

using namespace std;

int findDuplicate(vector<int>& nums) {
    for(int i=0; i<nums.size(); i++) {
        for(int j=i+1; j<nums.size(); j++) {
            if(nums[i] == nums[j]) {
                return nums[i];
            }
        }
    }
}

int main() {
    vector<int> vect;
    int data;

    while(cin >> data) {
        vect.push_back(data);
    }

    int res = findDuplicate(vect);

    cout << res << endl;

    return 0;
}
