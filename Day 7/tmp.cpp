#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    const int MOD = 1e6 + 3;
    cin >> n;
    int* mas = new int[n+1]{1,1};
    for(int i = 2; i <= n; i++) {
        mas[i] = (mas[i-1] + mas[i-2]) % MOD;
    }
}