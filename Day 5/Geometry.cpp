#include <bits/stdc++.h>
using namespace std;

struct Vector {
    double x, y;

    Vector(): x(0), y(0) {}
    Vector(double x, double y): x(x), y(y) {}

    Vector operator-() {
        return Vector(-x, -y);
    }
    Vector operator+(Vector v) {
        return Vector(this->x + v.x, y + v.y);
    }
    Vector operator-(Vector v) {
        return Vector(x - v.x, y - v.y);
    }

    Vector operator*(double v) {
        return Vector(v*x, v*y);
    }

    void assign(double x, double y) {
        this->x = x;
        this->y = y;
    }

    double abs() {
        return sqrt(x*x + y*y);
    }

    double phi() {
        return atan2(y, x);
    }

    Vector operator/(double val) {
        return (*this) * (1/val);
    }

    double operator*(Vector v) {
        return x*v.x + y*v.y;
    }

    double operator^(Vector v) {
        return x*v.y - y*v.x;
    }
};

Vector operator*(double val, Vector v) {
    return v*val;
}

int main() {
    Vector a, p, start;
    cin >> a.x >> a.y >> start.x >> start.y >> p.x >> p.y;
    Vector r = p - start;
    Vector n;
    n.assign(-a.y, a.x);
    n = n / n.abs();

    if(a*r <= 0) {
        cout << r.abs() << '\n';
    } else {
        cout << abs(r*n) << '\n';
    }
}




/*
    Vector a, b;
    a.x = 3;
    a.y = 5;
    a.assign(3, 5);
    a + b;//a.operator+(b), operator+(a, b)
    */