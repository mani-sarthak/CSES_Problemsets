#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    long long ans = 0;
    int prev = 0;
    for (int i=0; i<n; i++){
        int x;
        cin >> x;
        if (!i) {
            prev = x;
        }
        else {
            ans += max(prev-x, 0);
        }
        prev = max(prev, x);
    }
    cout << ans << endl;
    return 0;
}
