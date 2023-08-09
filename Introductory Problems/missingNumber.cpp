#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    int x = n;
    for (int i=0; i<n-1; i++){
        int t;
        cin >> t;
        x ^= t;
        x ^= i+1;
    }
    cout << x << endl;
    return 0;
}