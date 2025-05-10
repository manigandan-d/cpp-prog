#include <iostream>
#include <vector> 
#include <utility>

using namespace std;

void display(vector<int> nums) {
    for(int i=0; i<nums.size(); i++) {
        cout << nums[i] << " ";
        // cout << nums.at(i) << " ";
    }
    cout << endl;

    // for(auto i: nums) {
    //     cout << i << " ";
    // }
    // cout << endl;
}

void display_2d(vector<vector<int>> vect) {
    for(int i=0; i<vect.size(); i++) {
        for(int j=0; j<vect[i].size(); j++) {
            // cout << vect.at(i).at(j) << " ";
            cout << vect[i][j] << " ";
        }
        cout << endl;
    }
}

void displayChar(vector<char> chars) {
    for(int i=0; i<chars.size(); i++) {
        cout << chars[i] << " ";
    }
    cout << endl;
}

int main() {
    // Automatically filled with zero 
    // vector<int> sparse (10);
    // display(sparse);

    // Fill the value with given n
    // vector<int> data (5, 10);
    // display(data);

    // Another way to fill the value using fill()
    // vector<int> data (5);
    // fill(data.begin(), data.end(), 10);
    // display(data);

    // char type 
    vector<char> vowels {'a', 'e', 'i', 'o', 'u'};
    // displayChar(vowels);

    // Initializer list 
    // vector<int> nums {12, 5, 3, 7, 10};
    vector<int> nums = {12, 5, 3, 7, 10};
    display(nums);

    // size()
    // cout << nums.size() << endl;

    // max_size() 
    // cout << nums.max_size() << endl;
    // cout << vowels.max_size() << endl;

    // resize()
    // vowels.resize(3);
    // cout << vowels.size() << endl;
    // displayChar(vowels);
    // vowels.resize(10);
    // cout << vowels.size() << endl;
    // displayChar(vowels);
    // vowels.resize(10, 'z');
    // cout << vowels.size() << endl;
    // displayChar(vowels);

    // capacity()
    // vector<int> temp;
    // temp.push_back(1);
    // cout << temp.size() << " " << temp.capacity() << endl;
    // temp.push_back(2);
    // cout << temp.size() << " " << temp.capacity() << endl;
    // temp.push_back(3);
    // cout << temp.size() << " " << temp.capacity() << endl;
    // temp.push_back(4);
    // cout << temp.size() << " " << temp.capacity() << endl;
    // temp.push_back(5);
    // cout << temp.size() << " " << temp.capacity() << endl;

    // shrink_to_fit()
    // cout << temp.size() << endl;
    // cout << temp.capacity() << endl;
    // temp.shrink_to_fit();
    // cout << temp.capacity() << endl;

    // empty()
    // cout << nums.empty() << endl;
    // vector<int> vect;
    // cout << vect.empty() << endl;

    // reserve()
    // nums.reserve(100);
    // cout << nums.capacity() << endl;

    // array index 
    // cout << nums[3] << endl;

    // at()
    // cout << nums.at(3) << endl;

    // front()
    // cout << nums.front() << endl;

    // back()
    // cout << nums.back() << endl;

    // data()
    // int *ptr = nums.data();

    // for(int i=0; i<nums.size(); i++) {
    //     cout << *(ptr+i) << " ";
    // }
    // cout << endl;

    // push_back()
    // nums.push_back(8);
    // display(nums);
    
    // emplace_back()
    // nums.emplace_back(2); // faster than push_back()
    // display(nums);

    // Out of range values 
    // cout << nums[15] << endl; // garbage value 
    // cout << nums.at(15) << endl; // error: out of range 

    // pop_back()
    // nums.pop_back();
    // display(nums);

    // insert() 
    // vector<int> :: iterator it;
    // it = nums.begin();
    // // nums.insert(it, 2, 8);
    // nums.insert(it+3, 9);
    // display(nums);

    // emplace()
    // nums.emplace(nums.begin()+3, 9);
    // display(nums);

    // erase()
    // vector<int> :: iterator it;
    // it = nums.begin();
    // nums.erase(it+1, it+4);
    // display(nums);

    // Without creation of iterator separately 
    // nums.erase(nums.begin()+1, nums.begin()+4);
    // display(nums);

    // clear() 
    // nums.clear();
    // cout << nums.size() << endl;

    // swap()
    // vector<int> even = {2, 4, 6, 8, 10};
    // vector<int> odd = {1, 3, 5, 7, 9};
    // display(even);
    // display(odd);
    // even.swap(odd);
    // display(even);
    // display(odd);

    // assign() 
    // vector<int> demo = {1, 9, 2, 6, 5, 7, 12};
    // display(demo);
    // demo.assign(5, 10);
    // display(demo);

    // Pairs in vector 
    // vector <pair<int, int>> vp {{2, 4}};
    // cout << vp.at(0).first << " " << vp.at(0).second << endl;
    // vp.push_back({1, 3});
    // vp.emplace_back(5, 10);
    // cout << vp.at(1).first << " " << vp.at(1).second << endl;
    // cout << vp.at(2).first << " " << vp.at(2).second << endl;

    // Copy from one vector to another 
    // vector<int> v1 {1, 5, 9, 2, 6};
    // display(v1);
    // vector<int> v2 (v1);
    // display(v2);
    // vector<int> v3 (v1.begin(), v1.end());
    // display(v3);
    // vector<int> v4 (v1.rbegin(), v1.rend());
    // display(v4);

    // vector<int> v = {1, 2, 3, 4, 5};

    // vector<int> :: iterator it;
    // for(it=v.begin(); it != v.end(); it++) {
    //     cout << *it << " ";
    // }
    // cout << endl;

    // vector<int> :: reverse_iterator rit;
    // for(rit=v.rbegin(); rit != v.rend(); rit++) {
    //     cout << *rit << " ";
    // }
    // cout << endl;

    // Iterator 
    // vector<int> :: iterator it; 
    // cout << *nums.begin() << " " << *(nums.end()-1) << endl;
    // cout << *nums.rbegin() << " " << *(nums.rend()-1) << endl;

    for(vector<int> :: iterator it = nums.begin(); it != nums.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    for(auto it=nums.begin(); it != nums.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
