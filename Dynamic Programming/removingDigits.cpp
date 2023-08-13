#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007


int findMaxDigit(int n){
    int ans = 0;
    while (n) {
        ans = max(ans, n%10);
        n = n/10;
    }
    return ans;
}

int solve(int n){
    if (n == 0) return 0;
    else return 1 + solve(n-findMaxDigit(n));
}


int main(){
    int n;
    cin >> n;
    cout << solve(n) << endl;
    return 0;
}