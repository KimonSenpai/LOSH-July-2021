#include <bits/stdc++.h>
using namespace std;

/*
a_1
a_2
.
.
.
a_n
0
максимальное число идущих подряд элементов, значения которых не убывают
*/

int main() {
    int prev, maxLen, len;

    cin >> prev;
    maxLen = 1;
    len = 1;

    for(;;) {
        int val;
        cin >> val;

        

        if(val < prev) {
            maxLen = max(maxLen, len);
            len = 1;
        } else {
            len++;
        }

        if(!val) break;

        prev = val;
    }
    //maxLen = max(maxLen, len);
    cout << maxLen << '\n';
}