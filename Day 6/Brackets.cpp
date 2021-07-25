#include <bits/stdc++.h>
using namespace std;

vector<string> f(int l, int r) {
    if(l + r == 0) {
        return {""};
    }
    vector<string> res;
    if(l > 0) {
        auto resl = f(l - 1, r);
        for(string v: resl) {
            res.push_back("(" + v);
        }
    }
    if(r > 0 && r > l) {
        auto resr = f(l, r-1);
        for(string v: resr) {
            res.push_back(")" + v);
        }
    }
    return res;
}


int main() {
    auto res = f(4, 4);
    for(auto v: res)
        cout << v << '\n';
}