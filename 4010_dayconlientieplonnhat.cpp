#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        int sum=0, m=0;
        for(int i=0; i<n; i++){
            cin >> a[i];
            sum=max(a[i], sum+a[i]);
            m=max(m, sum);
        }
        cout << m << endl;
    }
}