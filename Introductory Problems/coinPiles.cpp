#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007


void solve(int a, int b){
    int x = min(a, b);
    int y = max(a, b);
    if (y > 2*x ) cout << "NO" << endl;
    else {
        y -= 2*(y-x);
        if (y%3 == 0) cout << "YES" << endl;
        else cout << "NO" << endl; 
    } 
}


int main(){
    int t;
    cin >> t;
    while (t--){
        int a, b;
        cin >> a >> b;
        solve(a, b);
    }
    return 0;
}