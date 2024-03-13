#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a[1001], f[1001], kq;
    int t; cin >> t;
    while(t--){
    cin >> n;
    kq=0;
    memset(f, 0, sizeof(f));
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++){
        f[i]=1;
        for(int j=0; j<i; j++){
            if(a[j]<=a[i]) f[i] = max(f[i], f[j]+1);
        }
        kq=max(kq, f[i]);
    }
    cout << n-kq << endl;
    }
}