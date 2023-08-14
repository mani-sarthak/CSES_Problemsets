#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007

int digits(long long n, long long a = 1, long long b = 9){
    if (n <= 0) return 0;
    else {
        long long c = a * b;
        return 1 + digits(n-c, a + 1, b * 10);
    }
}


long long cntPrev(int digit){
    long long ans = 0;
    long long a = 1;
    long long b = 9;
    for (int i=1; i<digit; i++){
        long long c = a * b;
        ans += c;
        a ++;
        b *= 10;
    }
    return ans;
}

int main(){
    int t;
    cin >> t ;
    while (t--){
        long long x;
        cin >> x;
        int digit = digits(x);
        x -= cntPrev(digit);
        long long base = 1;
        for (int i=1; i<digit; i++) base *= 10;
        long long num =  base + (x-1)/digit;
        string tmp = to_string(num);
        int index = (x-1)%digit;
        cout << tmp[index] << endl;
    }
}