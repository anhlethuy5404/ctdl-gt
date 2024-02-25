#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll F[100];
char fibo (int n, ll k){
    if(n==1) return '0';
    if(n==2) return '1';
    if(k<=F[n-2]) return fibo(n-2, k);
    return fibo(n-1, k-F[n-2]);
}

main(){
    int t, n;
    ll k;
    F[0]=0; F[1]=1;
    for(int i=2; i<=92; i++) F[i]=F[i-1]+F[i-2];
    cin >> t;
    while(t--){
        cin >> n >> k;
        cout << fibo(n, k) << endl;
    }
}