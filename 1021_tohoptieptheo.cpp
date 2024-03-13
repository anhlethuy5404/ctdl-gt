#include <bits/stdc++.h>

using namespace std;

int n, k, x[100], dem;
map <int, int> mp;

void sinh(){
    int i=k;
    while(i>0 && x[i]==n-k+i) i--;
    if(i==0){
        cout << k;
        return;
    }
    else{
        x[i]++;
        for(int j=i+1; j<=k; j++){
            x[j] = x[i] + (j-i);
        }
    }
    for(int j=1; j<=k; j++){
        if(mp[x[j]]==0) dem++;
    }
    cout << dem;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        dem=0;
        mp.clear();
        for(int i=1; i<=k; i++){
            cin >> x[i];
            mp[x[i]]++;
        }
        sinh();
        cout << endl;
    }
}