#include <bits/stdc++.h>
using namespace std;

int n, a[100];
void check(){
    cin >> n;
    map <int, bool> m;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        if(m[a[i]]==0){
            cout << a[i] << " ";
            m[a[i]]=1;
        }
    }
}

int main (){
    check();
}