#include <bits/stdc++.h>

using namespace std;

string s; int f[45];

int test(){
    int n=s.size();
    if(s[0]=='0') return 0;
    else f[1]=1;
    f[0]=1;
    for(int i=2; i<=n; i++){
        f[i]=0;
        if(s[i-1]>'0') f[i]+=f[i-1];
        if(s[i-2]=='1' || s[i-2]=='2' && s[i-1]<='6') f[i]+=f[i-2];
    }
    return f[n];
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> s;
        cout << test() << endl;
    }
}