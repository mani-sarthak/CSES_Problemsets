#include<bits/stdc++.h>
using namespace std;


int main(){
    int n ;
    cin >> n ;
    if (n == 1) cout << 1 << endl;
    else if (n < 4) cout << "NO SOLUTION" << endl;
    else {
        vector<int> arr(n, 0);
        int curr = 1;
        for (int i=1; i<n; i+=2){
            arr[i] = curr++;
        }
        for (int i=0; i<n; i+=2) {
            arr[i] = curr++;
        }
        for (auto it: arr) cout << it << " ";
        cout << endl;
    }
    return 0;
}