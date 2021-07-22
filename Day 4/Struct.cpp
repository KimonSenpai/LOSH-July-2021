#include <bits/stdc++.h>
using namespace std;

struct Vector {
    double x, y;
    //constructor
    Vector() {
        x = 0;
        y = 0;
    }

    Vector(double x, double y) {
        this->assign(x, y);
    }

    double Len() {
        return sqrt(x*x + y*y);
    }


    void assign(double x, double y) {
        (*this).x = x;
        this->y = y;
    }


};
void assign(Vector& p, double x, double y) {
        p.x = x;
        p.y = y;
}

Vector operator+(Vector v1, Vector v2) {
    Vector v;
    v.x = v1.x + v2.x;
    v.y = v1.y + v2.y;
    return v;
}

ostream& operator<<(ostream& out, const Vector& v) {
    out << '(' << v.x << ", " << v.y << ')';
    return out;
}
istream& operator>>(istream& in, Vector& v) {
    in >> v.x >> v.y;
    return in;
}
int main() {
    Vector p;
    p.x = 5;
    p.y = 3;

    Vector pp(5, 3);

    Vector q;
    q.assign(3, 4);
    assign(p, 3, 4);
    cout << p.Len() << ' ' << q.Len() << '\n';

    Vector h = p + q;

    cout << h << '\n';


    Vector a, b;
    cin >> a >> b;
    cout << a+b << '\n';
}