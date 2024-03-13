#include <bits/stdc++.h>

using namespace std;

int n, k, x[100];
bool ok=false;
set <int> s;
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
    v.clear();
    while(!ok){
        for(int i=1; i<=k; i++) cout << x[i] << " ";
        cout << endl;
        sinh();
    }
    ok=false;
}

int main(){
        cin >> n >> k;
        for(int i=0; i<n; i++){
            int m;
            cin >> m;
            s.insert(m);
        }
        n=s.size();
        int i=1;
        for (int num : s) {
            x[i++] = num;
            if (i>k) break;
        }
        //for(int j : s) cout << j << " ";
        //for(int j=1; j<=k; j++) cout << x[j] << " ";
        test();
}