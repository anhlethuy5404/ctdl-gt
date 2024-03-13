#include <bits/stdc++.h>

using namespace std;

int n, ok[100];
string x, a;

void quay(int i){
    for(int j=0; j<n; j++){
        if(ok[j]){
            x[i]=a[j];
            ok[j]=0;
            if(i==n-1)
                cout << x << " ";
            else quay(i+1);
            ok[j]=1;
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> a;
        sort(a.begin(), a.end());
        n=a.size();
        x.resize(n);
        for(int i=0; i<n; i++) ok[i]=1;
        quay(0);
        cout << endl;
    }
}