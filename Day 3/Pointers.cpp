#include <bits/stdc++.h>
using namespace std;



int main() {
    int a = 5;
    int* b = &a;
    cout << sizeof(size_t) << '\n';
    cout << b << ' ' << *b << '\n';
    cout << (size_t)b << ' ' << (size_t)(b + 1) << '\n';
    cout << *(b + 5) << '\n';
    cout << b[5] << '\n';
    cout << 5[b] << '\n';
}