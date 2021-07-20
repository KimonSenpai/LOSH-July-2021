#include <bits/stdc++.h>
using namespace std;
/*
n
a_1 ... a_n
*/
int main() {
    int n;
    cin >> n;

    int count = 0, i = 0;

    while(i < n) {
        int val;
        cin >> val;
        if(val % 2 == 0) count++;
        i++;
    }

    cout << count;
}
