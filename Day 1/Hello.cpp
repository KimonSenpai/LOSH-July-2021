#include <iostream> //Подключение библиотеки input/output stream
#include <cmath>
using namespace std;

//Документация языка:
//cpluplus.com
//cppreference.com

namespace my {
    int a = 5;
}
int a = 3;


int main() {
    std::cout << "Hello world\n"; //consol output
    std::cout << a << " " << my::a << '\n';

    bool b = true; //1b
    char c = '\n'; //1b

    short s; //2b
    int i; //2-4b
    long l; //4b = 32bit, -2**31 ~ 2**31 - 1
    long long ll; //8b


    unsigned ui; //unsigned int
    unsigned long ul; //0 ~ 2**32 - 1


    //cout << 2147483647 + 1 << '\n';
    ui = 2;
    cout << ui - 3 << '\n';
    /*
    + - слож.
    -
    *
    / - деление (если 2 целых, то целочисленное)
    % - остаток от деления
    ^ - не возведение в степень
    */

    cout << 5/2 << ' ' << 5/2.0 << '\n';

    int a = pow(3, 4); //a**b = exp(b*log(a))
    cout << a << '\n';

    float f; //4b
    double d; //8b
    long double ld; //8-64b

    cout << (int)45.67 + 4.5 << '\n'; //приведение типов данных

    //bool -> char -> short -> unsigned short -> ... -> unsigned long long -> float -> double -> long double



    if(/*условие*/1)
        /*действие*/;
    else
        /*действие*/;

    

}