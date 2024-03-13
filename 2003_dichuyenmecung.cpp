#include <bits/stdc++.h>

using namespace std;

int n, a[11][11];
bool ok=false;

void quay(int i, int j, string s){
    if(i==n && j==n){
        cout << s << " ";
        ok=true;
        return;
    }
    if(i<n && a[i+1][j]==1) quay(i+1, j, s+'D');
    if(j<n && a[i][j+1]==1) quay(i, j+1, s+'R');
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++) cin >> a[i][j];
        }
        if(a[1][1]==0 || a[n][n]==0) {
            cout << "-1";
            //break;
        }
        else{
        ok=false;
        quay(1, 1, "");
        if(!ok) cout << "-1";
        }
        cout << endl;
    }
}