#include <bits/stdc++.h>

using namespace std;

int main(){
    int i, j, n, f[1001], kq=0;
    string s;
    cin >> s;
    n=s.length();
        for(i=0; i<n; i++){
            f[i]=1;
            for(j=0; j<i; j++){
                if(s[j]<=s[i]) f[i] = max(f[i], f[j]+1);
            }
            kq=max(kq, f[i]);
        }
        cout << kq << endl;
}