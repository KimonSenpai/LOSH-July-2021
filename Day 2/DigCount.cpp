#include <bits/stdc++.h>
using namespace std;



int main() {
    int n;
    cin >> n;
    n = abs(n);
    int count = 0;

    if(n==0) count = 1;
    
    while(n > 0) {
        count++;
        n /= 10;
    }
    cout << count;
}