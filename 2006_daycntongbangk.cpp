#include <bits/stdc++.h>

using namespace std;

int n, k;
vector <int> x, a;
vector<string> v;
bool ok;

void in(){
    int sum=0;
    for (int i=0; i<x.size(); i++) {
        if(x[i]) sum+=a[i];
    }
    if (sum==k) {
        ok=true;
        //cout << "[";
        string str = "[";
        //int dem=0;
        for (int i=0; i<x.size(); i++) {
            if(x[i]) {
                //if (dem>0) cout << " ";
                //cout << a[i];
                //dem++;
                str+=to_string(a[i]) + " ";
            }            
        }
        //dem=0;
        //cout << "] ";
        str.pop_back();
        str+="]";
        v.push_back(str);
    }
}

void quay(int i){
    for(int j=0; j<=1; j++){
        x[i]=j;
        if(i==n-1){
            in();
        }
        else quay(i+1);
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        a.resize(n);
        x.resize(n);
        v.clear();
        ok=false;
        for(int &i : a) cin >> i;
        sort(a.begin(), a.end());
        quay(0);
        if(!ok) cout << "-1";
        else{
            for(int i=v.size()-1; i>=0; i--) {
                cout << v[i] << " ";
            }
        }
        cout << endl;
    }
}