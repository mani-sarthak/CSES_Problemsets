#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007


void rec(int ind, vector<int> &arr, long long sum1, long long sum2, long long &ans){
    if (ind < 0) {
        ans = min(ans, abs(sum1-sum2));
        return ;
    }
    rec(ind-1, arr, sum1, sum2+arr[ind], ans);
    rec(ind-1, arr, sum1+arr[ind], sum2, ans);
}

int main(){
    int n;
    cin >> n ;
    vector<int> arr(n);
    for (int i=0; i<n; i++) cin >> arr[i];
    long long sum1 = 0, sum2 = 0;
    long long ans = LLONG_MAX;
    rec(n-1, arr, sum1, sum2, ans);
    cout << ans << endl;
    return 0;
}