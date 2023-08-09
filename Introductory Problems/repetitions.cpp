#include<bits/stdc++.h>
using namespace std;


int main(){
    string s ;
    cin >> s;
    int n = s.size();
    int i=0;
    int ans = 0;
    while (i < n){
        int j = i;
        while (s[i] == s[j]) j++;
        ans = max(ans, j-i);
        i = j;
    }
    cout << ans << endl;
    return 0;
}
