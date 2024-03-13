#include <bits/stdc++.h>
using namespace std;

int n, x[100];
vector<string> v;
string s, t;

void tao(){
    for(int i=1; i<=n; i++) x[i]=i;
}

void test(){
    stringstream ss(s);
    string tmp;
    while(ss >> tmp) v.push_back(tmp);
    auto f=find(v.begin(), v.end(), t);
    v.erase(f);
    tao();
    n = v.size();
    sort(v.begin(), v.end());
    do{
        for(int i=1; i<=n; i++)
            cout << v[x[i]-1] << " ";
        cout << t << endl;
    }while(next_permutation(x+1, x+1+n));
}

int main(){
    cin >> n;
    cin.ignore();
    getline(cin, s);
    cin >> t;
    test();
}