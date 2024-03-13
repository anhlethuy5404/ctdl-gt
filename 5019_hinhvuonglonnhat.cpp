#include <bits/stdc++.h>

using namespace std;

int a[505][505], f[505][505], n, m;

int test(){
    int i, j, ans=0;
    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++){
            if(a[i][j])
                f[i][j] = min(f[i-1][j]+1, min(f[i][j-1]+1, f[i-1][j-1]+1));
            ans = max(ans, f[i][j]);
        }
    }
    return ans;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m;
        memset(a, 0, sizeof(a));
        memset(f, 0, sizeof(f));
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++) cin >> a[i][j];
        }
        cout << test() << endl;
        /*for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++) cout << f[i][j] << " ";
            cout << endl;
        }*/
    }
}