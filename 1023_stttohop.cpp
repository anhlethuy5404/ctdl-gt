#include <bits/stdc++.h>

using namespace std;

int n, k, x[100];
bool ok=false;
vector <vector<int>> v;

void sinh(){
    int i=k;
    while(i>0 && x[i]==n-k+i) i--;
    if(i==0){
        ok=true;
        return;
    }
    else{
        x[i]++;
        for(int j=i+1; j<=k; j++){
            x[j] = x[i] + (j-i);
        }
    }
}

void test(){
    for(int i=1; i<=k; i++) x[i]=i;
    v.clear();
    while(!ok){
        vector<int> temp;
        for(int i=1; i<=k; i++){
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
        cin >> n >> k;
        vector <int> s;
        for(int i=0; i<k; i++){
            int m;
            cin >> m;
            s.push_back(m);
        }
        test();
        cout << find(v, s) << endl;
    }
}