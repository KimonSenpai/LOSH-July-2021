#include <bits/stdc++.h>
using namespace std;


int main() {
    int V, n;
    cin >> V >> n;
    int* a = new int[n + 1];
    int* v = new int[n + 1];
    for(int i = 1; i <= n; i++) {
        cin >> a[i] >> v[i];
    }
    int* dp = new int[V + 1]{0};
    for(int i = 1; i <= V; i++)
        dp[i] = -1;
    int* prev = new int[V + 1]{};
    for(int k = 1; k <= n; k++) {
        for(int i = 0; i <= V - v[k]; i++){
            if(dp[i] == -1) continue;

            if(dp[i+v[k]] < dp[i] + a[k]) {
                dp[i+v[k]] = dp[i] + a[k];
                prev[i+v[k]] = k;
            }
        }
    }
    int res = 0;
    int Vres = 0;
    for(int i = 0; i <= V; i++) {
        if(dp[i] > res) {
            res = dp[i];
            Vres = i;
        }
        
    }
    cout << res << '\n';

    while(Vres) {
        int ind = prev[Vres];
        cout << ind << '\t';
        Vres -= v[ind];
    }
    cout << '\n';
}