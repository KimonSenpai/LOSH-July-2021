#include <bits/stdc++.h>
using namespace std;

/*
a_1 ... a_n 0
*/

int main() {
    //I
    int Mul = 1;
    int val;

    cin >> val;
    while(val != 0) {
        Mul *= val;
        cin >> val;
    }
    
    cout << Mul << '\n';

    //II
    int Mul = 1;
    for(;;) {//while(true)
        int val;
        cin >> val;

        if(val == 0) break;

        Mul *= val;
    }

}