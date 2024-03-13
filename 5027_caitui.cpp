#include <bits/stdc++.h>
using namespace std;

int f[1005][1005], a[1005], c[1005];
int test(int n, int m){
    int i, j;
    memset(f, 0, sizeof(f));
    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++){
            f[i][j]=f[i-1][j];
            if(j>=a[i])
                f[i][j]=max(f[i][j],f[i-1][j-a[i]]+c[i]);
        }
    }
    return f[n][m];
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        for(int i=1; i<=n; i++)
            cin >> a[i];
        for(int i=1; i<=n; i++)
            cin >> c[i];
        cout << test(n,m) << endl;
    }
}
/*
1
15 10
5 2 1 3 5 2 5 8 9 6 3 1 4 7 8
1 2 3 5 1 2 5 8 7 4 1 2 3 2 1
*/