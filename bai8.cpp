#include <bits/stdc++.h>
using namespace std;

int n, x[100], ok[100];
char a[100];

void in(){
    for(int i=1; i<=n; i++) 
        cout << a[i];
    for(int i=1; i<=n; i++) 
        cout << x[i];
    cout << endl;
}

void so(int i){
    for(int j=1; j<=n; j++){
        x[i]=j;
        if(i==n) in();
        else so(i+1);
    }
}

void hoanvi(int i){
    for(int j=65; j<=n+64; j++){
        if(ok[j]==0){
            a[i]=j;
            ok[j]=1;
            if(i==n) so(1);
            else hoanvi(i+1);
            ok[j]=0;
        }
    }
}

int main(){
    cin >> n;
    for(int j=1; j<=n; j++) ok[j]=0;
    hoanvi(1);
}