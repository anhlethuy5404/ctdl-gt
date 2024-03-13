#include <bits/stdc++.h>
using namespace std;

int n, x[100]; string s;
bool ok=false;

int check(){
    if(s.front()=='H' && s.back()=='A' && s.find("HH")==-1)
        return 1;
    return 0;
}

void sinh(){
    int i=n;
    while(i>0 && x[i]==1) i--;
    if(i==0){
        ok=true;
        return;
    }
    else{
        for(int j=i; j<=n; j++){
            x[j]=1-x[j];
        }
    }
    for(int j=1; j<=n; j++){
        if(x[j]==0) s[j-1]='A';
        else s[j-1]='H';
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        s.resize(n);
        ok=false;
        for(int i=1; i<=n; i++) x[i]=0;
        while(!ok){
            if(check()) cout << s << endl;
            sinh();
        }
    }
}