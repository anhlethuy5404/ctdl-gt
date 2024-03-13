#include <bits/stdc++.h>

using namespace std;

bool f[1005][1005]; int n;
int test(string s, int l, int r){
    int n=s.size(), ans=-1e9, i, j;
    memset(f, false, sizeof(f));
    for(i=r; i>=l; i--){
        for(j=i; j<=r; j++){
            if(i==j) f[i][j]=true;
            else if(s[i]==s[j]){
                if(j-i==1) f[i][j]=true;
                else f[i][j]=f[i+1][j-1];
            }
            if(f[i][j]) ans=max(ans, j-i+1);
        }
    }
    if(ans>1) return 1;
    return 0;
}

int main(){
    string s;
    cin >> s;
    int t;
    cin >> t;
    while(t--){
        int l, r;
        cin >> l >> r;
        //(test(s, l, r)) ? cout << "YES" : cout << "NO";
        //cout << endl;
        if(test(s, l, r)) cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }
}