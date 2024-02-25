#include <bits/stdc++.h>
using namespace std;

int n, k, x[1005];
bool ok=false;

void sinh(){
    int i=k; 
    while(i>0 && x[i]==n-k+i) i--;
    if(i==0){
        ok=true;
        return;
    }
    else{
        x[i]++;
        for(int j=i+1; j<=k; j++)
            x[j]=x[i] + (j-i);
    }
    return;
}

void in(){
    for(int i=1; i<=k; i++){
            cout << x[i]; 
    }
    cout << " ";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        ok=false; //them de reset lai mang
        for(int i=1; i<=k; i++) x[i]=i;
        while(!ok){
            in();
            sinh();
        }
        cout << endl;
    }
}