#include <bits/stdc++.h>
using namespace std;

int n, k, x[1005];

void sinh(){
    int i=k; 
    while(i>0 && x[i]==n-k+i) i--;
    if(i==0){
        //neu la ch cuoi, in ra ch dau
        for(int i=1; i<=k; i++){
            cout << i << " ";
        }
    }
    else{
        x[i]++;
        for(int j=i+1; j<=k; j++)
            x[j]=x[i] + (j-i);
        for(int i=1; i<=k; i++){
            cout << x[i] << " "; //in ch tiep
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
    cin >> n >> k;
    for(int i=1; i<=k; i++) cin >> x[i];
    sinh();
    cout << endl;
    }
}