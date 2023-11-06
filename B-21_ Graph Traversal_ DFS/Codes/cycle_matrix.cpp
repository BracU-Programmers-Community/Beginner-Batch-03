#include <bits/stdc++.h>
using namespace std;

const int nmax = 1010;

bool adj[nmax][nmax];

bool visited[nmax];

int n;

bool dfs(int u, int p){
    visited[u] = true;


    for(int v = 1; v <= n; v++){

        if(adj[u][v] == false)      /// not part of dfs, but part of adj matrix
            continue;

        if(v == p)
            continue;

        if(visited[v])  /// backward or forward edge
            return true;

        if(dfs(v, u))
            return true;
    }

    return false;
}

/// complexity: O(V^2)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int m;  /// node count, edge count
    cin>>n>>m;

    /// m lines -> u v

    for(int i = 0; i<m; i++){
        int u, v;
        cin>>u>>v;

        adj[u][v] = adj[v][u] = true;
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


