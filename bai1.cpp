#include <bits/stdc++.h>
using namespace std;

bool chan(int x){
    return x%2==0;
}

bool sosanh(int a, int b){
    if(chan(a) && chan(b)) return a<b;
    else if(!chan(a) && !chan(b)) return a>b;
    else return chan(a);
}

int main(){
    int n;
    vector<int> v1, v2;
    cin >> n;
    int a[1005];
    for(int i=0; i<n; i++) {
        cin >> a[i];
        if(chan(a[i])) v1.push_back(a[i]);
        else v2.push_back(a[i]);
    }
    sort(v1.begin(), v1.end(), sosanh);
    sort(v2.begin(), v2.end(), sosanh);
    int k=0, l=0;
    for(int i=0; i<n; i++){
        if(chan(a[i])){
            cout << v1[k++] << " ";
        }
        else cout << v2[l++] << " ";
    }
}