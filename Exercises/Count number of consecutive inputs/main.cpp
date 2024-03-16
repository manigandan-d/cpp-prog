#include <iostream>

using namespace std;

/*
Count the number of consecutive inputs occur
*/

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

/*
Sample Input 1
10 10 10 5 5 7 7 7 7

Sample Input 2
1 1 9 9 9 4 4
*/
