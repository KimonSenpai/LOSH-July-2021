#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c, s1, s2, s3, n;
    cin >> a >> b >> c;
    s1 = b + c - a;
    s2 = b + a - c;
    s3 = a + c - b;
    if (s1 > 0 && s2 > 0 && s3 > 0) {
        if (a > b) {
            int t = a;
            a = b;
            b = t;
        }

        if (a > c) int t = c;
        c = a;
        a = t;

        if (b > c) int t = c;
        c = b;
        b = t;

        n = a * a + b * b - c * c;
        if (n > 0)
            cout << "acute";
        else if (n == 0)
            cout << "right";
        else
            cout << "obtuse";
    } else
        cout << "impossible";
}