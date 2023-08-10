#include<bits/stdc++.h>
using namespace std;

long long solve(long long r, long long c){
    if (r > c){
        if (r%2 == 0){
            long long prev = r*r;
            return prev - c+1;
        }
        else {
            long long prev = (r-1)*(r-1);
            return prev + c;
        }
    }
    else {
        if (c%2 == 0){
            long long prev = (c-1)*(c-1);
            return prev + r;
        }
        else {
            long long prev = c*c;
            return prev - r +1;
        }
    }
    return 0;
}


int main(){
    int t;
    cin >> t;
    while (t--){
        long long r, c;
        cin >> r >> c;
        cout << solve(r, c) << endl;
    }
    return 0;
}