#include <bits/stdc++.h>
using namespace std;

const int N = 20;

int main() {
    int mas[N] = {1, 2, 3}; //статические массивы N должно быть константой
    for(int i = 0; i < N; i++) {
        cin >> mas[i];
    }
    
    int n;
    cin >> n;
    int* mas2 = new int[n]{1, 2, 3}; //динамический массив


    
    delete[] mas2;
}

//for(int* p = &n; p >= 0; p--)
        //*p = 0;