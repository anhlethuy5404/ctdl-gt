#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll f[55], n, t, i;
    f[0]=1; f[1]=1; f[2]=2;
    for(int i=3; i<=50; i++){
        f[i]=f[i-1]+f[i-2]+f[i-3];
    }
    cin >> t;
    while(t--){
        cin >> n;
        cout << f[n] << endl;
    }
}