#include <bits/stdc++.h>
using namespace std;

const int N = 20;

int main() {
    //array
    array<int, N> ar; //static array
    ar.size();
    sort(begin(ar), end(ar));

    //vector
    vector<int> vec(N, 0);
    sort(begin(vec) + 3, begin(vec) + 8);
    vec.size();
    vec.push_back(7);
    vec.insert(begin(vec) + 3, 8);
    vec.erase(begin(vec) + 3, begin(vec) + 8);

    //string
    string str = "qwertyu";
    str.substr(5, 20);
    string str2 = "asdfgh";
    str = str + str2;
    getline(cin, str);

    int matr[5][7];
    int i, j;
    matr[i][j];

    int** matr2 = new int*[5];
    for(int i = 0; i < 5; i++)
        matr2[i] = new int[7];

    for(int i = 0; i < 5; i++)
        delete[] matr2[i];
    delete[] matr2;
    vector<vector<int>> matr3(10, vector<int>(20));
}