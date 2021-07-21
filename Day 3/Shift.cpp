#include <bits/stdc++.h>
using namespace std;

/*
a0, a1, ..., a[n-1]
shift k
a[k], a[k+1], ..., a[n-1], a[0], a[1], ..., a[k-1]
*/

int main() {

    int n;
    cin >> n;
    int* mas = new int[n];
    for(int i = 0; i < n; i++)
        cin >> mas[i];
    
    int k;
    cin >> k;

    int l = 0,
        r = k-1;
    while(l < r) {
        swap(mas[l], mas[r]);
        l++;
        r--;
    }

    l = k;
    r = n-1;
    while(l < r) {
        swap(mas[l], mas[r]);
        l++;
        r--;
    }

    l = 0;
    r = n-1;
    while(l < r) {
        swap(mas[l], mas[r]);
        l++;
        r--;
    }

    for(int i = 0; i < n; i++)
        cout << mas[i] << ' ';
    cout << '\n';

    delete[] mas;
}