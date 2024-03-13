#include <bits/stdc++.h>
using namespace std;

int n;
vector <int> a, b;

void in(){
    cout << "[";
    for(int i=0; i<a.size(); i++){
        cout << a[i];
        if(i < a.size()-1) cout << " ";
    }
    cout << "]" << endl;
}

void quay(int i){
    in();
    if(i==1) return;
    else{
        for(int i=0; i<n; i++){
            b.push_back(a[i]+a[i+1]);
        }
        a = b;
        a.resize(i-1);
        b.clear();
        quay(i-1);
    } 
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        a.resize(n);
        for(int &i : a) cin >> i;
        quay(n);
    }
}