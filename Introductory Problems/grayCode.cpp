#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007


vector<string> solve(int n){
    if (n == 1) {
        vector<string> ans;
        ans.push_back("0");
        ans.push_back("1");
        return ans;
    }
    vector<string> tmp = solve(n-1);
    vector<string> ans ;
    n = tmp.size();
    for (int i=0; i<n; i++) ans.push_back('0'+tmp[i]);
    for (int i=n-1; i>=0; i--) ans.push_back('1'+tmp[i]);
    return ans;
}


int ithGrayNumber(int i){
    return i ^ (i >> 1);
}


void printGray(int n){
    for (int i=0; i<(1<<n); i++) {
        bitset<32> ans(ithGrayNumber(i));
        string final = ans.to_string();
        cout << final.substr(32-n) << endl;
    }
}

int main(){
    int n;
    cin >> n ;
    // vector<string> ans = solve(n);
    // for (auto it: ans) cout << it << endl;
    printGray(n);
    return 0;
}