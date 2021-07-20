#include <bits/stdc++.h>
using namespace std;
/*
n
a_1 ... a_n
*/
int main() {
    int n;
    cin >> n;
    int count = 0;
    for(int i = 0; i < n; i++) {
        int val;
        cin >> val;

        if(val % 2 != 0) continue;
        
        count++;
    }