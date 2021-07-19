#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    cout << "Hello world\n";
    cout << "Hello\\world\n";
    cout << "Hello\tworld\n";

    cout << 1 << ' ' << 2 << '\n';
    cout << 10 << ' ' << 20 << '\n';
    cout << 100 << ' ' << 200 << '\n';

    cout << 1 << '\t' << 2 << '\n';
    cout << 10 << '\t' << 20 << '\n';
    cout << 100 << '\t' << 200 << '\n';

    cout << "Hello\bworld\b\n";
    cout << "Hello\rwor\n";

    cout << "\"" << '\n';


    cout << "Привет мир!\n";
}