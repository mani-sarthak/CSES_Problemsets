#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007


int solve(vector<int> &arr, int tar){
    vector<int> dp(tar+1, 1e9);
    dp[0] = 0;
    for (auto coin : arr){
        for (int i=0; i<=tar; i++){
            if (i >= coin) dp[i] = min(dp[i], 1+dp[i-coin]);
        }
    }
    return (dp[tar] == 1e9) ? -1 : dp[tar];
}


int main(){
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for (int i=0; i<n; i++) cin >> arr[i];
    cout << solve(arr, target)   << endl;
    return 0;
}