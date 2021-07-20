#include <bits/stdc++.h>
using namespace std;

/*
a_1
a_2
.
.
.
a_i
.
.
.
a_n
0
количество пар чисел последовательности, произв. которых кратно 26
*/

int main() {
    //I (предподсчет)
    int n1, n2, n13, n26;
    n1 = n2 = n13 = n26 = 0;
    for(;;) {
        int val;
        cin >> val;

        if(!val) break;

        if(val%26 == 0) n26++;
        else if(val%13 == 0) n13++;
        else if(val%2 == 0) n2++;
        else n1++;
    }
    int res = n2*n13 + n26*(n1 + n2 + n13) + n26*(n26 - 1)/2;
    cout << res;

    //II (online обработка)
    int n1, n2, n13, n26;
    n1 = n2 = n13 = n26 = 0;
    int res = 0;
    for(;;) {
        int val;
        cin >> val;

        if(!val) break;

        if(val%26 == 0) {
            res += n1 + n2 + n13 + n26;
            n26++;
        } else if(val%13 == 0) {
            res += n2 + n26;
            n13++;
        } else if(val%2 == 0) {
            res += n13 + n26;
            n2++;
        } else {
            res += n26;
            n1++;
        }
    }
    cout << res;
}