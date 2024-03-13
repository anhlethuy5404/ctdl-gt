#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int sum=0, ans=0, a[100];
        for(int i=0; i<n; i++){
            cin >> a[i];
            sum=max(sum+a[i], a[i]);
            ans=max(ans, sum);
        }
        cout << ans << endl;
    }
}