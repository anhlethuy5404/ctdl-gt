#include <bits/stdc++.h>
using namespace std;

int n, dem=1;
vector <int> a, b;
vector <vector<int>> x;

void in(){
    reverse(x.begin(), x.end());
    for(auto i : x){
        cout << "[";
        for(int j : i){
            if(dem>1) cout << " ";
            cout << j;
            dem++;
        }
        cout << "] ";
        dem=1;
    }
}

void quay(int i){
    x.push_back(a);
    if(i==1) return;
    else{
        for(int j=0; j<n; j++){
            b.push_back(a[j]+a[j+1]);
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
        x.clear();
        for(int &i : a) cin >> i;
        quay(n);
        in();
        cout << endl;
    }
}