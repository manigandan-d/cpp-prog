#include <iostream>
#include <list>

// List containers are implemented as doubly linked list 
// N = [], at(), capacity(), shrink_to_fit(), reserve()

using namespace std;

void display(list<int> ls) {
    for(auto i: ls) {
        cout << i << " ";
    }
    cout << endl;
}

void displayChar(list<char> ls) {
    for(auto i: ls) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    // Automatically filled with zero
    // list<int> sparse (10);
    // display(sparse);

    // Fill the value with given n 
    // list<int> data (5, 10);
    // display(data);

    // Another way to fill the value using fill() 
    // list<int> data (5);
    // fill(data.begin(), data.end(), 10);
    // display(data);

    // char type 
    list<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    // displayChar(vowels);

    // Initializer list 
    // list<int> nums {12, 5, 3, 7, 10};
    list<int> nums = {12, 5, 3, 7, 10};
    display(nums);

    // size()
    // cout << nums.size() << endl;

    // resize() - problem 
    // vowels.resize(3);
    // cout << vowels.size() << endl;
    // displayChar(vowels);
    // vowels.resize(10);
    // cout << vowels.size() << endl;
    // displayChar(vowels);
    // vowels.resize(10, 'z');
    // cout << vowels.size() << endl;
    // displayChar(vowels);

    // max_size()
    // cout << nums.max_size() << endl;
    // cout << vowels.max_size() << endl;

    // empty()
    // cout << nums.empty() << endl;
    // list<int> temp;
    // cout << temp.empty() << endl;

    // front()
    // cout << nums.front() << endl;

    // back() 
    // cout << nums.back() << endl;

    // push_front()
    // nums.push_front(4);
    // display(nums);

    // pop_front()
    // nums.pop_front();
    // display(nums);

    // emplace_front() 
    // nums.emplace_front(1);
    // display(nums);

    // push_back() 
    // nums.push_back(8);
    // display(nums);

    // emplace_back() 
    // nums.emplace_back(2);
    // display(nums);

    // pop_back() 
    // nums.pop_back();
    // display(nums);

    // insert() 
    // list<int> :: iterator it = nums.begin();
    // it++; // error: it += 3;
    // // nums.insert(it, 9);
    // nums.insert(it, 2, 9);
    // display(nums);

    // emplace()
    // nums.emplace(it, 9);
    // display(nums);

    // erase() - problem
    // nums.erase(nums.begin());
    // nums.erase(it, nums.end());
    // display(nums);

    // clear() 
    // nums.clear();
    // cout << nums.size() << endl;

    // swap() 
    // list<int> even = {2, 4, 6, 8, 10};
    // list<int> odd = {1, 3, 5, 7, 9};
    // display(even);
    // display(odd);
    // even.swap(odd);
    // display(even);
    // display(odd);

    // assign() 
    // list<int> demo = {1, 9, 2, 6, 5, 7, 12};
    // display(demo);
    // demo.assign(5, 10);
    // display(demo);

    // iterator

    // list<int> :: iterator it; 
    // cout << *nums.begin() << " " << *(nums.end()) << endl; // problem
    // cout << *nums.rbegin() << " " << *(nums.rend()) << endl; // problem

    // for(list<int> :: iterator it = nums.begin(); it != nums.end(); it++) {
    //     cout << *it << " ";
    // }
    // cout << endl;

    // for(auto it=nums.begin(); it != nums.end(); it++) {
    //     cout << *it << " ";
    // }
    // cout << endl;

    return 0;
}
