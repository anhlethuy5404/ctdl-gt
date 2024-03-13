#include <bits/stdc++.h>

using namespace std;

int n, x[100];
bool ok=false;
vector <vector<int>> v;

void sinh(){
    int i=n-1;
    while(i>0 && x[i]>x[i+1]) i--;
    if(i==0){
        ok=true;
        return;
    }
    else{
        int k=n; 
        while(x[k]<x[i]) k--;
        swap(x[i], x[k]);
        int l=i+1, r=n;
        while(l<=r){
            swap(x[l], x[r]);
            l++; r--;
        }
    }
}

void test(){
    v.clear();
    while(!ok){
        for(int i=1; i<=n; i++) cout << x[i] << " ";
        cout << endl;
        sinh();
    }
    ok=false;
}

int main(){
    cin >> n;
    for(int i=1; i<=n; i++) cin >> x[i];
    sort(x+1, x+n+1);
    test();
}