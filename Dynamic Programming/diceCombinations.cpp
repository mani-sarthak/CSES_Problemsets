#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007


int solve(int n){
    vector<int> dp(n+1, 0);
    dp[0] = 1;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=6; j++){
            
            if (i >= j) dp[i] += dp[i-j];
            dp[i] %= mod;
        }
    }
    return dp.back();
}


int main(){
    int n;
    cin >> n;
    cout << solve(n) << endl;
    return 0;
}