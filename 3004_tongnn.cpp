#include <bits/stdc++.h>
#define ll long long
using namespace std;
//tong cua 2 so xen ke cua day da sap xep
int main(){
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int &i : a) cin >> i;
        sort(a, a+n);
        ll x=0, y=0;
        for(int i=0; i<n; i++){
            if(i%2==0) x=x*10+a[i];
            else y=y*10+a[i];
        }
        cout << x+y << endl;
    }
}