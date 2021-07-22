#include <bits/stdc++.h>
using namespace std;

/*
n m - натуральные ил 0

n**m
*/
int Pow1(int a, int k) {
    int res = 1;
    for(int i = 0; i < k; i++) res *= a;
    return res;
}

/* 
pow(a, 0) = 1
pow(a, k) = a*pow(a, k-1) 
*/
int Pow2(int a, int k) {
    if(k == 0)
        return 1;
    return a*Pow2(a, k-1);
}

int Pow3(int a, int k) {
    if(k == 0)
        return 1;

    int res = Pow3(a*a, k/2);

    if(k%2 == 1)
        res *= a;
    return res;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << Pow3(n, m) << '\n';
}