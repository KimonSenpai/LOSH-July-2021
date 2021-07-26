#include <bits/stdc++.h>
using namespace std;

/*
Граф ориентированный
N K - количество вершин и ребер;
s1 f1
s2 f2
...
sk fk
L
c1 s1 f1 - если c == 'D' - удалить ребро, с == 'I' - ответить на вопрос есть ли такое ребро
...
cL sL fL
*/

int main() {
    int N, K;
    cin >> N >> K;
    vector<set<int>> graph(N+1);

    for(int i = 1; i <= K; i++) {
        int s, f;
        cin >> s >> f;
        graph[s].insert(f);
    }

    int L;
    cin >> L;

    for(int i = 1; i <= L; i++) {
        char c;
        int s, f;
        cin >> c >> s >> f;
        if(c == 'I') {
            if(graph[s].count(f))
                cout << "YES\n";
            else
                cout << "NO\n";
        } 
        if(c == 'D') {
            if(graph[s].count(f))
                graph[s].erase(f);
        }
    }
    cout << "----------------\n";
    for(int i = 1; i < N; i++) {
        for(int v: graph[i]){
            cout << i << ' ' << v << '\n';
        }
    }
}