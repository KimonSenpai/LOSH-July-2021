#include <bits/stdc++.h>
using namespace std;

//[l, r)
bool binSearch(int* mas, int l, int r, int k) {
    if(r - l == 1)
        return mas[l] == k;
    
    //int m = (r + l)/2;
    int m = l + (r - l)/2;
    if(mas[m] > k)
        return binSearch(mas, l, m, k);
    else
        return binSearch(mas, m, r, k);
}

int main() {
    int mas[10] = {1, 2, 4, 7, 9, 12, 15, 21, 26, 28};

    int k;
    cin >> k;
    cout << binSearch(mas, 0, 10, k) << '\n';
}