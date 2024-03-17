#include <bits/stdc++.h>

using namespace std;

int main() {
    string data = "Hello World";

    cout << data.size() << endl;

    cout << data.length() << endl;

    cout << strlen(data.c_str()) << endl;

    int i = 0;
    
    while(data[i])
        i++;
    cout << i << endl;

    for(i=0; data[i]; i++);
    cout << i << endl;

    return 0;
}
