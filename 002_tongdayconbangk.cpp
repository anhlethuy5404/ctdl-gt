#include <bits/stdc++.h>
using namespace std;

/*
5 50
5 10 15 20 25
dung pp nhi phan: tinh tong cua day khi bit=1
    5 10 15 20 25
NP: 0  0  0  0  0 x
    0  0  0  0  0 x
    ...
    0  1  1  0  1 v
*/


bool ok=false;

void sinh(int n, int x[]){
    int i=n;
    while(i>0 && x[i]==1) i--;
    if(i==0){
        ok=true; //ch cuoi
        return;
    }
    else{
        for(int j=i; j<=n; j++) 
            x[j]=1-x[i];
    }
}

bool check(int n, int k, int x[], int m[]){
    int sum = 0;
    for (int i=1; i<=n; i++){
        if(x[i]) sum+=m[i];
    }
    if(sum==k) return true;
    return false;
}

void in(int n, int x[], int m[]){
    for (int i=1; i<=n; i++){
        if(x[i]) cout << m[i] << " ";
    }
    cout << endl;
}

int main (){
    int n, k, x[100], m[100];
    int dem=0;
    cin >> n >> k;
    for(int i=1; i<=n; i++) {
        x[i]=0;
        cin >> m[i];
    }
    while(!ok){
        if(check(n, k, x, m)) {
            in(n, x, m);
            dem++;
        }
        sinh(n, x);
    }
    cout << dem << endl;
}