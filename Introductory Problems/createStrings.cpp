#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007


void rec(int ind, string &s, set<string> &st){
    if (ind == (int)s.size()) {
        st.insert(s);
        return ;
    }
    for (int i=ind; i<(int)s.size(); i++){
        swap(s[i], s[ind]);
        rec(ind +1, s, st);
        swap(s[i], s[ind]);
    }
}

int main(){
    string s;
    cin >> s;
    set<string> st;
    rec(0, s, st);
    cout << st.size() << endl;
    for (auto &it : st) cout << it << endl;
    return 0;
}