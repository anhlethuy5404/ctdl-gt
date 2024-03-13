#include <bits/stdc++.h>

using namespace std;

bool f[1005][1005]; int n;
int test(string s){
    int n=s.size(), ans=-1e9, i, j;
    memset(f, false, sizeof(f));
    for(i=n-1; i>=0; i--){
        for(j=i; j<=n-1; j++){
            if(i==j) f[i][j]=true;
            else if(s[i]==s[j]){
                if(j-i==1) f[i][j]=true;
                else f[i][j]=f[i+1][j-1];
            }
            if(f[i][j]) ans=max(ans, j-i+1);
        }
    }
    return ans;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << test(s) << endl;
    }
}