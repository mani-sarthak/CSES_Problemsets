#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007


int solve(vector<vector<char> > &grid){
    int n = grid.size();
    vector<vector<int> > dp(n, vector<int>(n, 0));
    dp[n-1][n-1] = grid[n-1][n-1] == '*' ? 0 : 1;
    for (int j=n-2; j>= 0; j--){
        if (grid[n-1][j] != '*') dp[n-1][j] = dp[n-1][j+1];
        if (grid[j][n-1] != '*') dp[j][n-1] = dp[j+1][n-1];
    }
    for (int i=n-2; i>=0; i--){
        for (int j=n-2; j>=0; j--){
            if (grid[i][j] != '*') dp[i][j] += dp[i+1][j] + dp[i][j+1];
            dp[i][j] %= mod;
        }
    }
    return dp[0][0];
}


int main(){
    int n;
    cin >> n;
    vector<vector<char> > grid(n, vector<char>(n)) ;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++) cin >> grid[i][j];
    }
    cout << solve(grid) << endl;
    return 0;
}