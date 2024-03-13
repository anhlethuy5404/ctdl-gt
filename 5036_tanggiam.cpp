#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n; 
    int kq;
    cin >> t;
    while(t--){
        cin >> n; kq=0;
        float a[n], b[n]; int f[n];
        int i, j;
        for(int l=0; l<n; l++) cin >> a[l] >> b[l];
        for(i=0; i<n; i++){
            f[i]=1;
            for(int j=i-1; j>=0; j--){
                if(a[i]>a[j] && b[i]<b[j]) f[i]=max(f[i], f[j]+1);
            }
            kq=max(kq, f[i]);
        }
        cout << (int) kq << endl;
    }
}