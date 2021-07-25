#include <bits/stdc++.h>
using namespace std;


int main() {
    int m, n;
    cin >> m >> n;
    vector<vector<int>> coins(m, vector<int>(n)), dp(m, vector<int>(n));
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> coins[i][j];
        }
    }
    dp[0][0] = coins[0][0];
    for(int i = 1; i < n; i++) {
        dp[0][i] = dp[0][i-1] + coins[0][i];
    }
    for(int i = 1; i < m; i++) {
        dp[i][0] = dp[i-1][0] + coins[i][0];
    }

    for(int i = 1; i < m; i++) {
        for(int j = 1; j < n; j++) {
            dp[i][j] = max(dp[i-1][j], dp[i][j-1]) + coins[i][j];
        }
    }

    cout << dp[m-1][n-1] << '\n';
    int i = m - 1,
        j = n - 1;
    string res = "";//r - right, d - down
    int S = dp[i][j];
    while(i + j != 0) {
        S -= coins[i][j];
        if(i != 0 && S == dp[i-1][j]) {
            i--;
            res += 'd';
        } else {
            j--;
            res += 'r';
        }
    }

    reverse(begin(res), end(res));

    cout << res << '\n';
}