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
0
найти среднее арифметическое.
*/

int main() {
    int sum = 0, count = 0, prev = 1;
    for(;;) {
        int val;
        cin >> val;
        
        if(prev == 0 && val == 0) {
            //count--;
            break;
        }

        if(val == 0) {
            prev = val;
            continue;
        }

        if(prev == 0) count++;
        
        sum += val;
        count++;
        prev = val;
    }
    cout << (double)sum/count << '\n';
}