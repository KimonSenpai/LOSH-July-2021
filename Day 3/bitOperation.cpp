#include <bits/stdc++.h>
using namespace std;

const int N = 20;

int main() {
    /*
    &
    |
    ~
    ^
    <<
    >>
    */
    int a = 6, //110
        b = 3, //011

        band = a & b, //010
        bor = a | b, //111
        bnot = ~a, //111111...11001
        bxor = a ^ b, //101
        bshiftleft = a << 5, //11000000
        bshiftright = a >> 2; //1
    

    //2**n
    int n = 5;
    int res = 1 << n;//100000

    //установить k бит числа в 1
    int k = 5;
    int res = (1 << k-1) | a;

    //установить k бит числа в 0
    int k = 5;
    int res2 = ~(1 << k-1) & a;

    //Проверка числа на 2**n

    bool f = (a-1)&a == 0;
}