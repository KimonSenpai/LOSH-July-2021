#include <bits/stdc++.h>
using namespace std;

void h(int n, int start, int final, int mid, int& k) {
    if(n == 1){
        k++;
        cout << 1 << ": " << start << " -> " << final << '\n';
        return;
    }
    h(n-1, start, mid, final, k);
    k++;
    cout << n << ": " << start << " -> " << final << '\n';
    h(n-1, mid, final, start, k);
}
//(2**n) - 1
//2**0 + 2**1 + 2**2 + ... + 2**(n-1)
int main() {
    int k = 0;
    h(6, 1, 3, 2, k);
    cout << k << '\n';
}