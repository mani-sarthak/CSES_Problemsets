#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007


int solve(int ind, vector<int> &price, vector<int> &pages, int target, vector<vector<int> > &dp){
    if (ind < 0 ) return 0;
    if (dp[ind][target] != -1) return dp[ind][target];
    int notPick = 0 + solve(ind -1, price, pages, target, dp);
    int pick = 0;
    if (price[ind] <= target) pick = pages[ind] + solve(ind -1, price, pages, target-price[ind], dp);
    return dp[ind][target] = max(pick, notPick);
}

int main(){
    int n, target;
    cin >> n >> target;
    vector<int>  price(n), pages(n);
    for (int i=0; i<n; i++) cin >> price[i];
    for (int i=0; i<n; i++) cin >> pages[i];
    vector<vector<int> > dp(n, vector<int>(target+1, -1));
    cout << solve(n-1, price, pages, target, dp) << endl;
    return 0;
}