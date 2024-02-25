#include <bits/stdc++.h>
using namespace std;

int M=123456789;
long long powMod(long long n, long long r){
    if(r==0) return 1;
    long long x = powMod(n, r/2);
    if(r%2==0) return x*x%M;
    return n*(x*x%M)%M;
}

main(){
    int t; long long n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << powMod(2, n-1) << endl;
    }
}