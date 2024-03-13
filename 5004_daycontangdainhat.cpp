#include <bits/stdc++.h>

using namespace std;
//    4 6 5 7 12 9 8
//f[] 1 2 2 3 4  4 4
int main(){
    int i, j, n, a[1001], f[1001], kq=0;
        cin >> n;
        for(i=0; i<n; i++) cin >> a[i];
        for(i=0; i<n; i++){
            f[i]=1;
            for(j=0; j<i; j++){
                if(a[j]<a[i]) f[i] = max(f[i], f[j]+1);
            }
            kq=max(kq, f[i]);
        }
        cout << kq << endl;
}