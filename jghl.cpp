#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int MOD=1e9+7;
int n, k;
ll a[11][11], x[11][11];

void tinh(ll a[11][11], ll b[11][11]){
    ll c[11][11]={};
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            for(int k=1; j<=n; k++){
                c[i][j] += a[i][k] * b[k][j];
                c[i][j]%=MOD;
            }
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            a[i][j]=c[i][j];
        }
    }
}

void tinh2(ll a[11][11], int k){
    if(k==1) return;
    tinh2(a, k/2);
    tinh(a, a);
    if(k%2==1) tinh(a, x);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                cin >> a[i][j];
                x[i][j]=a[i][j];
            }
        }
        tinh2(a, k);
        ll ans=0;
        for(int i=1; i<=n; i++){
            ans+=a[i][i];
            ans%=MOD;
        }
        cout << ans;
    }
}