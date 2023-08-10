#include<bits/stdc++.h>
using namespace std;

void solve(int n){
    if ( n%4 == 1 || n%4 == 2) cout << "NO" << endl;
    else if (n%4 == 3){
        cout << "YES" << endl;
        cout << (n+1)/2 << endl;
        cout << 1 << " " << 2 << " ";
        int j = 4;
        int k = n;
        int sz = (n-3)/4;
        for (int i=0; i<sz; i++) cout << j ++ << " " << k-- << " ";
        cout << endl;
        cout << n / 2 << endl;
        cout << 3 << " ";
        for (int i=0; i<sz; i++) cout << j ++ << " " << k-- << " ";
        cout << endl;
    }
    else {
        cout << "YES" << endl;
        int j = 1;
        int k = n;
        int sz = (n)/4;
        cout << n/2 << endl;
        for (int i=0; i<sz; i++) cout << j ++ << " " << k-- << " ";
        cout << endl;
        cout << n / 2 << endl;
        for (int i=0; i<sz; i++) cout << j ++ << " " << k-- << " ";
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n ;
    solve(n);
    return 0;
}