#include <bits/stdc++.h>
using namespace std;

int n, x[1005];
bool ok=false;

void sinh(){
    int i=n-1;
    while(i>0 && x[i] > x[i+1]) i--;
    if(i==0){
        ok=true;
        return;
    }
    else{
        int k=n; 
        while(x[k] < x[i]) k--;
        swap (x[k], x[i]);
        int l=i+1, r=n;
        while(l<=r){
            swap(x[l], x[r]);
            l++; r--;
        }
    }
}

void in(){
    for(int i=1; i<=n; i++){
        cout << x[i];
    }
    cout << " ";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        cin >> n;
        ok=false;
        for(int i=1; i<=n; i++) x[i]=i;
        while(!ok){
            in();
            sinh();
        }
        cout << endl;
    }
}