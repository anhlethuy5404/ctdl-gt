#include <bits/stdc++.h>
using namespace std;

int M=1e9+7;
long long powMod(long long n, long long r){
    if(r==0) return 1;
    long long x = powMod(n, r/2);
    if(r%2==0) return x*x%M;
    return n*(x*x%M)%M;
}

long long sodao(long long n){
    long long r=0;
    while(n>0){
        r=r*10+n%10;
        n/=10;
    }
    return r;
}
main(){
    int t; long long n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << powMod(n, sodao(n)) << endl;
    }
}