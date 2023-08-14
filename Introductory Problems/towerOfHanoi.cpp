#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007


void recurse(int steps, int from, int to, int buffer){
    if (!steps) return ;
    recurse(steps-1, from, buffer, to);
    cout << from << " " << to << endl;
    recurse(steps-1, buffer, to, from);
}

int main(){
    int n ;
    cin >> n ;
    cout << (1 << n) -1 << endl;
    recurse(n, 1, 3, 2);
    return 0;
}