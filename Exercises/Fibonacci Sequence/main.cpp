#include <bits/stdc++.h>

using namespace std;

// 0 1 1 2 3 5 8 13 21 34 ...

void fib(int n) {
    int a = 0, b = 1, c = 0;

    if(n == 1) {
        cout << a << endl;
    }

    else {
        cout << a << " " << b << " ";

        for(int i=2; i<n; i++) {
            c = a + b;

            a = b;
            b = c;

            cout << c << " ";
        }
    }

    cout << endl;
}

int main() {
    int n;
    cin >> n;

    fib(n);

    return 0;
}

/*
Sample Input 1:
5

Sample Input 2: 
10
*/
