#include <bits/stdc++.h>
using namespace std;



int main() {
    char str[256] = "qwert";
    cin.getline(str, 256);
    cout << "Hello\0 world\n";
    cout << str;
    //cstring
    char str2[256];
    strlen(str); //длина
    strcat(str, str2); //склейка
    strcmp(str, str2); //сравнение
    strcpy(str, str2); //копирование

    //cctype
    isdigit(str[0]);
    isalpha(str[0]);
    isspace(str[0]);
    isupper(str[0]);
    islower(str[0]);
    toupper(str[0]);
    tolower(str[0]);
}