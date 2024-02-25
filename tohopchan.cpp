#include <bits/stdc++.h>
using namespace std;
int n, k, x[100];

void in(){
    int sum=0;
    for(int i=1; i<=k; i++){
        sum+=x[i];
    }
    if(sum%2==0){
    for(int i=1; i<=k; i++){
        
        cout << x[i] << " ";
    }
    cout << endl;
    }
}

void quay(int i){
    for(int j=x[i-1]+1; j<=n-k+i; j++){
        x[i]=j;
        if(i==k) in();
        else quay(i+1);
    }
}

main(){
    cin >> n >> k;
    quay(1);
}