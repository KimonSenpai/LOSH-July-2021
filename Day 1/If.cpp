#include <bits/stdc++.h>
using namespace std;


int main() {
    //Сравнения.
    /*
    <
    >
    <=
    >=
    == - равенство
    != - не равно
    */

    //Логические операции
    /*
    && - and
    || - or
    ! - not
    */

    int b = 5, c = 0;

    if(c != 0 && b/c > 5)
        cout << "Yes\n";

    if(1 < b < 3) //Don't do it
        cout << "Yes\n";

    if(!c) //0 - false, else - true
        cout << "Yes\n";

    cout << 5 % 3 << ' ' << -5 % 3 << '\n';

    int a = 3;

    switch(a) {
        int ab;
        case 3:
            cout << a*a << '\n';
            //break;
            ab = 3;
        case 4:
            cout << 2*a << '\n';
            //break;

        default:
            cout << "Problem " << ab << "\n";
    }
}