#include <bits/stdc++.h>
using namespace std;

char dig[36];

string ToP(int n, int p) {
    if(n == 0)
        return "";
    
    return ToP(n/p, p) + dig[n%p];
}

//123 -> 234 (7)
//123 -> A3 (12)

int main() {
    for(int i = 0; i < 10; i++)
        dig[i] = '0' + i;
    for(int i = 10; i < 36; i++)
        dig[i] = 'A' + (i-10);
    int n, p;
    cin >> n >> p;
    cout << ToP(n, p) << '\n';
}