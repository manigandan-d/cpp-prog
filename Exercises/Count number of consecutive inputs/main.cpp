#include <iostream>

using namespace std;

int main() {
    int curVal=0, val=0, count=0;
    
    if(cin >> curVal) {
        count = 1;

        while(cin >> val) {
            if(val == curVal) {
                count++;
            }

            else {
                cout << endl;
                cout << curVal << " occurs " << count << " times";
                curVal = val;
                count = 1;
            }
        }

        cout << endl << curVal << " occurs " << count << " times" << endl;
    }

    return 0;
}