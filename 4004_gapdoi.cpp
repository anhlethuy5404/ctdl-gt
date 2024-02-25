#include <bits/stdc++.h>
#define ll long long
using namespace std;

int tinh(int n, ll k){
    ll x = pow(2, n-1);
    if(k==x) return n;
    if(k<x) return tinh(n-1, k);
    return tinh(n-1, k-x);
}

main(){
    int t, n;
    ll k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        cout << tinh(n, k) << endl;
    }
}