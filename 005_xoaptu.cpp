#include <bits/stdc++.h>
using namespace std;

int n, k, x[100];
void check(){
    cin >> n;
    for(int i=0; i<n; i++) cin >> x[i];
    cin >> k;
    for(int i=0; i<n; i++){
        if(x[i]!=k) cout << x[i] << " ";
    }
}

int main (){
    check();
}