#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007


int f0(vector<int> &arr, int tar, vector<int>  &dp){
    if (tar == 0) return 1;
    if (dp[tar] != -1) return dp[tar];
    int ans = 0;
    for (auto it: arr) {
        if (it <= tar) ans += f0(arr, tar-it, dp);
        ans %= mod;
    }
    return dp[tar] =  ans;
}

int solve(vector<int> &arr, int tar){
    vector<int> dp(tar+1, 0);
    dp[0] = 1;
    
    for (auto coin : arr){
        for (int i=0; i<=tar; i++){
            if (i >= coin) dp[i] += dp[i-coin];
            dp[i] %= mod;
        }
    }
    
    return dp[tar];
}


int main(){
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for (int i=0; i<n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    // vector<int>  dp(target+1,-1);
    // cout << f0(arr, target, dp)   << endl;
    cout << solve(arr, target) << endl;
    return 0;
}