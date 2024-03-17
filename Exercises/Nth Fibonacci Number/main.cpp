#include <bits/stdc++.h>

using namespace std;

/*
Find the nth fibonacci sequence, for example if the number is ‘6’ so we have to find the “6th” Fibonacci number.
So by using the given formula of the Fibonacci series, we get the series:    
[ 1, 1, 2, 3, 5, 8, 13, 21]
So the “6th” element is “8” hence we get the output.
*/

int fib(int n) {
    int a=0, b=1, c=0;

    if(n == 1) {
        return b;
    }

    else {
        for(int i=1; i<n; i++) {
            c = a+b;

            a = b;
            b = c;
        }

        return c;
    }
}

int main() {
    int n;
    cin >> n;

    int res = fib(n);

    cout << res << endl;

    return 0;
}

/*
Sample Input 1:
6 

Sample Input 2:
1
*/
