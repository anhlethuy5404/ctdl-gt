#include <bits/stdc++.h>
using namespace std;

int n, x[1005];

void sinh(){
    int i=n-1;
    while(i>0 && x[i] > x[i+1]) i--;
    if(i==0){
        //ch cuoi in ch dau
        for(int j=1; j<=n; j++){
            cout << j << " ";
        }
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
        for(int i=1; i<=n; i++){
            cout << x[i] << " ";
        }
    }
}

int main(){
    int t;
    cin >> t;
    while (t--){
        cin >> n;
        for(int i=1; i<=n; i++) cin >> x[i];
        sinh();
        cout << endl;
    }
}