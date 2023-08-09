#include<bits/stdc++.h>
using namespace std;


void solve(long long n, set<long long> &st){
    if (st.find(n) != st.end()) return ;
    cout << n << " ";
    if ( n == 1) return ;
    st.insert(n);
    (n%2) ? solve(n*3+1, st) : solve(n/2, st);
}

int main(){
    long long n ;
    cin >> n;
    set<long long> st;
    solve(n, st);
    cout << endl;
    return 0;
}