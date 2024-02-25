#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll tron(ll a[], int l, int m, int r){
    int i, j, k, n1=m-l+1, n2=r-m;
    ll L[n1], R[n2];
    for(i=0; i<n1; i++) L[i] = a[l+i];
    for(i=0; i<n2; i++) R[i] = a[m+i+1];
    ll dem=0;
    i=0; j=0; k=l;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]) a[k++] = L[i++];
        else{
            dem = dem + n1 - i;
            a[k++] = R[j++];
        }
    }
    while(i<n1) a[k++] = L[i++];
    while(j<n2) a[k++] = R[j++];
    return dem;
}

ll tinh(ll a[], int l, int r){
    ll ans = 0;
    int mid;
    if(l<r){
        mid = l + (r-l)/2;
        //mid = (l+r) >> 1;
        ans += tinh(a, l, mid);
        ans += tinh(a, mid+1, r);
        ans += tron(a, l, mid, r);
    }
    return ans;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll a[n];
        for(ll i=0; i<n; i++) cin >> a[i];
        cout << tinh (a, 0, n-1) << endl;
    }
}