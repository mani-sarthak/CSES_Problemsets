#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007


void dfs(int i, int j, vector<vector<char> > &grid){
    int n = grid.size(), m = grid[0].size();
    if (i < 0 || j < 0 || i >= n || j >= m || grid[i][j] == '#') return ;
    grid[i][j] = '#';
    int dr[4] = {1, -1, 0, 0};
    int dc[4] = {0, 0, 1, -1};
    for (int k=0; k<4; k++){
        int nr = i + dr[k];
        int nc = j + dc[k];
        dfs(nr, nc, grid);
    }
}


int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<char> > grid(n, vector<char>(m));
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++) cin >> grid[i][j] ;
    }
    int cnt = 0;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (grid[i][j] == '.'){
                cnt ++;
                dfs(i, j, grid);
            }
        }
    }
    cout << cnt << endl;
    return 0;
}