#include<bits/stdc++.h>
using namespace std;

long long solve(int n){
    long long size = n*n;
    long long combinations = (size*(size-1))/2;
    long long ruleOut = (2*2*(max(n-2, 0)*max(n-1, 0)));
    return combinations - ruleOut;
}

int main(){
    int n;
    cin >> n ;
    for (int i=1; i<=n; i++) cout << solve(i) << endl;
    return 0;
}