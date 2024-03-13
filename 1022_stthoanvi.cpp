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
    for(int i=1; i<=n; i++) x[i]=i;
    v.clear();
    while(!ok){
        vector<int> temp;
        for(int i=1; i<=n; i++){
            temp.push_back(x[i]);
        }
        v.push_back(temp);
        sinh();
    }
    ok=false;
}

int find(const vector<vector<int>>&v, const vector<int>&s) {
    for (int i=0; i<v.size(); i++) {
        if (v[i] == s) { 
            return i + 1; 
        }
    }
    return -1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        vector <int> s;
        for(int i=0; i<n; i++){
            int m;
            cin >> m;
            s.push_back(m);
        }
        test();
        cout << find(v, s) << endl;
    }
}