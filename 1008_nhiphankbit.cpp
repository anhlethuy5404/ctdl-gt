#include <bits/stdc++.h>
using namespace std;

int n, k, x[1005];
bool ok=false;

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
}

void in(){
    int dem=0;
    for(int i=1; i<=n; i++){
        if(x[i]==1) dem++;
    }
    if(dem==k){
        for(int i=1; i<=n; i++){
         cout << x[i];
        }
        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i=1; i<=n; i++) x[i]=0;
        ok=false;
        while(!ok){
            in();
            sinh();
        }
    }
}