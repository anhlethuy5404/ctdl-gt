#include <bits/stdc++.h>
using namespace std;

int n, C[20][20], A[20], B[20]={0}, fopt=1e9, cmin=1e9, cost=0;

void quaylui(int i){
    int j;
    for(j=2; j<=n; j++){
        if(B[j]==0){
            A[i]=j; B[j]=1;
            cost = cost + C[A[i-1]][A[i]];
            if(i==n){
                int v = cost + C[A[n]][A[1]];
                fopt = min(fopt, v);
            }
            else if(cost + (n-i+1)*cmin < fopt) quaylui(i+1);
            cost = cost - C[A[i-1]][A[i]];
            B[j]=0;
        }
    }
}

int main(){
    int i, j;
    cin >> n;
    A[1]=1;
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++) {
            cin >> C[i][j];
            if(C[i][j]!=0) cmin = min(cmin, C[i][j]);
        }
    }
    quaylui(2);
    cout << fopt;
}
/*
4
0 20 35 10
20 0 90 50
35 90 0 12
10 50 12 0
*/