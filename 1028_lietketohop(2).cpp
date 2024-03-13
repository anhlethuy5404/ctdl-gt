#include <bits/stdc++.h>

using namespace std;

int n, k;
bool ok=false;
vector <vector<int>> v;
vector <int> a, x;

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
    //v.clear();
    
    while(!ok){
        for (int i=1; i<=k; i++) {
            cout << a[x[i]] << " ";
        }
        cout << endl;
        sinh();
    }
    ok=false;
}

int main(){
    cin >> n >> k;
    set <int> s;
    for(int i=1; i<=n; ++i) {
        int temp;
        cin >> temp;
        s.insert(temp);
    }
    n=s.size();
    x.resize(n+1);
    a.push_back(-1);
    for(auto i : s) a.push_back(i);
    for (int i=0; i<=n; i++) {
        x[i]=i;
    }
    test();
}