#include <bits/stdc++.h>
using namespace std;

int F1(int n) {
    if(n < 2) {
        return n;
    }

    return F1(n-1) + F1(n-2);
}

int F2(int n) {
    int* mas = new int[max(n+1, 2)]{0, 1};
    for(int i = 2; i<= n; i++)
        mas[i] = mas[i-1] + mas[i-2];
    
    int res = mas[n];
    delete[] mas;
    return res;
}

int main() {
    for(int i = 0;i < 20; i++) {
        cout << F1(i) << '\t';
    }
    cout << '\n';
    for(int i = 0;i < 50; i++) {
        cout << F2(i) << '\t';
    }
}