#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    int* mas = new int[n];
    for(int i = 0; i < n; i++)
        cin >> mas[i];
    //I
    for(int i = n - 1; i >= 0; i--)
        cout << mas[i] << ' ';
    cout << '\n';
    
    //II
    for(int i = 0; i < n/2; i++) {
        swap(mas[i], mas[n-1-i]);
    }
    for(int i = 0; i < n; i++)
        cout << mas[i] << ' ';

    //III
    int i = 0,
        j = n-1;
    while(i < j){
        swap(mas[i], mas[j]);
        i++;
        j--;
    }
    for(int i = 0; i < n; i++)
        cout << mas[i] << ' ';

    delete[] mas;
}