#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<bool> mas(n+1, false);
    vector<int> res;
    for(int i = 2; i <= n; i++) {
        if(mas[i]) continue;

        res.push_back(i);
        for(int j = i*i; j <= n; j += i)
            mas[j] = true;
    }

    for(int v: res) {
        cout << v << '\t';
    }
    cout << '\n';
}