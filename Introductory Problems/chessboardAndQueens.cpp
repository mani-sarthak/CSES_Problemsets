#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define n 8

bool isValid(vector<int> &rows, vector<vector<char> > &grid, int tar){
    int currCol = rows.size();
    for (int i=0; i<currCol; i++) {
        if (i - rows[i] == currCol - tar || i + rows[i] == currCol + tar || rows[i] == tar) return false;
    }
    return grid[tar][currCol] != '*';
}

void rec(vector<int> &rows, vector<vector<char> > &grid, int &ans){
    if (rows.size() == n) {
        ans ++;
        return ;
    }
    for (int i=0; i<n; i++){
        if (isValid(rows, grid, i)) {
            rows.push_back(i);
            rec(rows, grid, ans);
            rows.pop_back();
        }
    }
}


int main(){
    vector<vector<char> > grid(n, vector<char>(n));
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin >> grid[i][j];
        }
    }
    vector<int> rows;
    int ans = 0;
    rec(rows, grid, ans);
    cout << ans << endl;
    return 0;
}