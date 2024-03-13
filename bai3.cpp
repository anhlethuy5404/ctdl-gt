#include <bits/stdc++.h>
using namespace std;

int n, x[100];
bool ok=false;

void sinh(){
    int i=n-1;
    while(i>0 && x[i]<x[i+1]) i--;
    if(i==0){
        ok=true;
        return;
    }
    else{
        int k=n;
        while(x[k]>x[i]) k--;
        swap(x[k], x[i]);
        int l=i+1, r=n;
        while(l<=r){
            swap(x[l], x[r]);
            l++; r--;
        }
    }
}

int dem=0;
void in(){
    if(dem>0) cout << ",";
    for(int i=1; i<=n; i++){
        cout << x[i];
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
        for(int i=1; i<=n; i++) x[i]=n-i+1;
        while(!ok){
            in();
            sinh();
        }
        cout << endl;
    }
}