#include <bits/stdc++.h>
using namespace std;

vector<int> mark;
void dfs(int v, vector<set<int>>& graph, int m) {
    mark[v] = m;
    for(int w: graph[v]) 
        if(!mark[w])
            dfs(w, graph, m);
}

int main() {
    int N, K;
    cin >> N >> K;
    vector<set<int>> graph(N+1);
    mark.resize(N+1, 0);
    for(int i = 1; i <= K; i++) {
        int s, f;
        cin >> s >> f;
        graph[s].insert(f);
        graph[f].insert(s);
    }

    

    int m = 0;
    for(int i = 1; i <= N; i++){
        if(mark[i] == 0) {
            m++;
            dfs(i, graph, m);
        }
    }
    for(int i = 1; i <= m; i++) {
        cout << i << ": ";
        for(int j = 1; j <= N; j++) {
            if(mark[j] == i)
                cout << j << ", ";
        }
        cout << '\n';
    }
}