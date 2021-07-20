#include <bits/stdc++.h>
using namespace std;



int main() {
    int n;
    cin >> n;
    int res = 1;

    while(2*res < n) res *= 2;

    //if(res > n) res /= 2;

    cout << res << '\n';
}
