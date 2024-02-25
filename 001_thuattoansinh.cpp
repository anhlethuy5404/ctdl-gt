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
        for(int j=i; j<=n; j++) 
            x[j]=1-x[i];
    }
}

void in(){
    int check=1;
    for (int i=1; i<=n/2; i++){
        if(x[i]!=x[n-i+1]) check=0;
    }
    if(check){
    for (int i=1; i<=n; i++){
        
        cout << x[i] << " ";
    }
    cout << endl;
    }
}

int main (){
    cin >> n;
    for(int i=1; i<=n; i++) x[i]=0;
    while(!ok){
        in();
        sinh();
    }
}