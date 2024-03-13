#include <bits/stdc++.h>
using namespace std;

int n, k, x[100];
set <string> s;
vector <string> a;
vector <int> b;

void quay(int i){
    for(int j=x[i-1]+1; j<=n-k+i; j++){
        x[i]=j;
        if(i==k){
            for(int i=1; i<=k; i++){
                cout << a[x[i]] << " ";
            }
            cout << endl;
        }
        else quay(i+1);
    }
}

int main(){
    cin >> n >> k;
    for(int i=1; i<=n; i++){
        string st;
        cin >> st;
        s.insert(st);
    }
    a.push_back("+");
    for(auto i : s) a.push_back(i);
    n=s.size();
    for(int i=1; i<=k; i++) x[i]=i;
    quay(1);
}