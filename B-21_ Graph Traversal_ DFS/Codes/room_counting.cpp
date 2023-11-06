#include <bits/stdc++.h>
using namespace std;

const int nmax = 1010;

char grid[nmax][nmax];

bool visited[nmax][nmax];

int n, m;

void dfs(int x, int y){
    cout<<"  dfs "<<x<<" "<<y<<endl;
    visited[x][y] = true;

    if(x > 0 && grid[x-1][y] == '.' && !visited[x-1][y])
        dfs(x-1, y);

    if(x < n-1 && grid[x+1][y] == '.' && !visited[x+1][y])
        dfs(x+1, y);

    if(y < m-1 && grid[x][y+1] == '.' && !visited[x][y+1])
        dfs(x, y+1);

    if(y > 0 && grid[x][y-1] == '.' && !visited[x][y-1])
        dfs(x, y-1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    cin>>n>>m;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin>>grid[i][j];
        }

        ///cin>>grid[i];
    }

    int ans = 0;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(grid[i][j] == '#')
                continue;
            if(visited[i][j])
                continue;
            cout << "calling dfs "<<i<< " "<<j<<endl;
            dfs(i, j);
            ans++;
        }
    }

    cout<<ans<<"\n";


    return 0;
}
