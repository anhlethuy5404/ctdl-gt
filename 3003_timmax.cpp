#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll MOD=1e9+7;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n; cin >> n;
        ll a[n];
        for(ll &i : a) cin >> i;
        sort(a, a+n);
        ll m=0;
        for(ll i=0; i<n; i++){
            m=(m+a[i]*i) % MOD;
        }
        cout << m << endl;
    }
}