#include <bits/stdc++.h>
using namespace std;

const int nmax = 100010;

vector<int> adj[nmax]; /// adj[1], adj[2], adj[3]
bool visited[nmax];
bool isleft[nmax];

bool dfs(int u, bool left){
    cout<<"dfs "<<u<<" "<<left<<endl;
    visited[u] = true;
    isleft[u] = left;

    for(int v : adj[u]){
        if(visited[v]){
            if(isleft[u] == isleft[v]){
                cout<<"Conflict at "<<u<< " "<<v<<endl;
                return false;
            }
        }
        else{
            if(!dfs(v, !left))
                return false;
        }
    }

    return true;

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

    bool bipartite = true;
    for(int i = 1; i<=n; i++){
        if(visited[i]) continue;
        if(!dfs(i, true)){
            bipartite = false;
            break;
        }
    }

    if(bipartite)
        cout<<"bipartite";
    else
        cout<<"not bipartite";

    return 0;
}


