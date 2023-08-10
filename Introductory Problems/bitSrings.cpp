#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007

long long power(long long n, int x){
    if (x == 0) return 1;
    long long tmp = n;
    n *= n;
    n %= mod;
    long long curr = power(n, x/2);
    if (x%2) curr *= tmp;
    curr %= mod;
    return curr;
}



int main(){
    long long n;
    cin >> n ;
    cout << power(2, n) << endl;
    return 0;
}