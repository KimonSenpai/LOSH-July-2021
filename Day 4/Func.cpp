#include <bits/stdc++.h>
using namespace std;

int mul(int, int);

int Len(int n) {
    int len = 0;
    while(n) {
        len++;
        n /= 10;
    }
    return len;
}

int Sum(int a, int b) {
    return a + b;
}

void Swap(int& a, int& b) {
    int t = a;
    a = b;
    b = t;
}

void oldSwap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

//utilities
pair<double, double> Quadro(double a, double b, double c) {
    double D = b*b - 4*a*c;
    D = sqrt(D);
    double  x1 = (-b - D)/2/a,
            x2 = (-b + D)/2/a;
    return {x1, x2};
}

double MaxElem(double* mas, int n) {
    if(n == 0) 
        return 0;
    double m = mas[0];
    for(int i = 1; i < n; i++)
        m = max(m, mas[i]);
    return m;
}

double MaxElem(vector<double> mas) { //происходит копирование
    int n = mas.size();
    if(n == 0) 
        return 0;
    double m = mas[0];
    for(int i = 1; i < n; i++)
        m = max(m, mas[i]);
    return m;
}

double MaxElem1(const vector<double>& mas) { //не происходит копирования
    int n = mas.size();
    if(n == 0) 
        return 0;
    double m = mas[0];
    for(int i = 1; i < n; i++)
        m = max(m, mas[i]);
    return m;
}

int main() {

    int n;
    n = 345;
    
    cout << Len(n) << '\n';

    int a = 3, b = 5;
    cout << a << ' ' << b << '\n';
    Swap(a, b);
    cout << a << ' ' << b << '\n';
    oldSwap(&a, &b);
    cout << a << ' ' << b << '\n';
    cout << mul(a, b) << '\n';

    auto res = Quadro(1, 6, 5);
    cout << res.first << ' ' << res.second << '\n';
    return 0;
}

int mul(int a, int b) {
    return a*b;
}

