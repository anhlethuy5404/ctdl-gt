#include <bits/stdc++.h>
using namespace std;

int n, x[100];
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

int dem=0;
void in(){
    if(dem>0) cout << ",";
    for(int i=1; i<=n; i++){
        if(x[i]==0) cout << "A";
        else cout << "B";
    }
    dem++;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        ok=false;
        dem=0;
        for(int i=1; i<=n; i++) x[i]=0;
        while(!ok){
            in();
            sinh();
        }
        cout << endl;
    }
}