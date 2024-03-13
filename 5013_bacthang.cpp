#include <bits/stdc++.h>
#define ll long long
using namespace std;

int m=1e9+7;
int tinh(int n, int k){
    int i, j, f[100005]={0};
    f[0]=1; f[1]=1;
    for(i=2; i<=n; i++){
        for(j=1; j<=min(i,k); j++){
            f[i]=(f[i]+f[i-j])%m;
        }
    }
    return f[n];
}

int main(){
    int t, n ,k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        cout << tinh(n,k) << endl;
    }
}