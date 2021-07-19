#include <bits/stdc++.h>
using namespace std;

/* ax**2 + bx + c = 0 */

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    
    if(a == 0) {
        if(b == 0) {
            if(c == 0) {
                cout << "Every x\n";
            } else {
                cout << "No roots\n";
            }

        } else {
            cout << -c / b << '\n';
        }
    } else {
        
        double D = b*b - 4*a*c;
        if(D > 0) {
            D = sqrt(D);
            double  x1 = (-b - D) / 2 / a,
                    x2 = (-b + D) / 2 / a;
            cout << x1 << ' ' << x2 << '\n';
        } else if(D == 0) {
            cout << -b / 2 / a << '\n';
        } else {
            cout << "No roots!\n";
        }
    }
}
