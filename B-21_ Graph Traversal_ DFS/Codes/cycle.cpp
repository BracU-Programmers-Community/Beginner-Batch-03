#include <bits/stdc++.h>
using namespace std;

const int nmax = 100010;

vector<int> adj[nmax]; /// adj[1], adj[2], adj[3]
bool visited[nmax];

bool dfs(int u, int p){
    visited[u] = true;


    for(int v : adj[u]){
        if(v == p)
            continue;

        if(visited[v])  /// backward or forward edge
            return true;

        if(dfs(v, u))
            return true;
    }

    return false;
}

/// complexity: O(V + 2E)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int n, m;  /// node count, edge count
    cin>>n>>m;

    /// m lines -> u v

    for(int i = 0; i<m; i++){
        int u, v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bool found = false;
    for(int i = 1; i<=n; i++){
        if(visited[i]) continue;
        if(dfs(i, -1))
            found = true;
    }

    if(found)
        cout<<"cycle found";
    else
        cout<<"no cycle found";

    return 0;
}

