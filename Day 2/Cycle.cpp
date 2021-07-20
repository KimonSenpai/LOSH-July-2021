#include <bits/stdc++.h>
using namespace std;

int main() {
    
    while(/*условие*/0) {
        /*действие*/
    }

    do {
        /*действие*/
    } while(/*условие*/0);

    //Сокращенные операции
    /*
    ++
    --
    +=
    -=
    *=
    /=
    %=

    i++ ~ i = i+1
    i += a ~ i = i + a

    i++ - суфиксная форма
    ++i - префиксная форма


    */
    int a1 = 5, a2 = 5;
    int b1 = a1++,
        b2 = ++a2;
    
    cout << a1 << ' ' << a2 << '\n';
    cout << b1 << ' ' << b2 << '\n';

   
    //for(/*first action*/; /*codition*/; /*step*/) /*block*/

    for(int i = 0; i < 5; i++) 
        cout << "*";

    cout << '\n';
    if(true) {
        int i = 0;
        while(i<5) {
            cout << "*";
            i++;
        }
    }
    cout << '\n';
    for(int i = 0; i < 5; i++) 
        cout << i << '\t';
    cout << '\n';
    for(double val = 10; abs(val - 1) >= 0.001; val = sqrt(val))
        cout << val << ' ';
    cout << '\n';
    /*
    double a, b;
    a == b - плохо
    */

    /*float a = 45678956789;
    float b = a/123;
    cout << a << ' ' << b*123 << ' ' << (a == b*123) << '\n';
    */

    double a = 0.1, b = 0.2;
    cout << (a+b == 0.3) << '\n';

    double eps = 1e-7;

    cout << (abs(a - b) < eps) << '\n';
    cout << (abs(a + b - 0.3) < eps) << '\n';

    //Standart for
    for(int i = 100; i >= 0; i--);//for i = 100 to 0
    for(int i = 1; i <= 6; i++); //1, 2, ..., 6
    for(int i = 1; i <= 6; i += 3);//1, 4
    //for(;;);

    //multiply table
    cout << '\t';
    for(int j = 0; j < 10; j++) {
        cout << j << '\t';
    }
    cout << '\n';
    cout << "------------------------------------------------------------------------------------------\n";
    for(int i = 0; i < 10; i++) {
        cout << i << "|\t";
        for(int j = 0; j < 10; j++) {
            cout << i*j << '\t';
        }
        cout << '\n';
    }

    /*
    break - выбрасывает из цикла
    continue - переходит на следующую итерацию
    */
}