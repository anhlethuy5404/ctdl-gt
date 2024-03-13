#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        vector <ll> a;
        a.resize(n);
        for(ll &i : a) cin >> i;
        int index = upper_bound(a.begin(), a.end(), k) - a.begin();
        if(index>0) cout << index;
        else cout << "-1";
        cout << endl;
    }
}