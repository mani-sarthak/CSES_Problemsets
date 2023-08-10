#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007

long long solve(int n){
    long long ans = 0;
    while (n){
        ans += n/5;
        n = n/5;
    }
    return ans;
}



int main(){
    int n;
    cin >> n ;
    cout << solve(n) << endl;
    return 0;
}

