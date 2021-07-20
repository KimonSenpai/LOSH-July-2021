#include <bits/stdc++.h>
using namespace std;



int main() {
    int n;
    cin >> n;
    int sum, count;
    sum = count = 0;
    while(n > 0) {
        count++;
        sum += n%10;
        n /= 10;
    }
    cout << (double)sum/count << '\n';
}