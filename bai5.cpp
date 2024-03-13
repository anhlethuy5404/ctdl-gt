#include <bits/stdc++.h>
using namespace std;

int n;
void quay(string s, int len, int a, int b, int c){
    if(s.size()==len){
        if(a!=0 && b!=0 && c!=0 && a<=b && b<=c)
            cout << s << endl;
    }
    else if(s.size()<len){
        quay(s+'A', len, a+1, b, c);
        quay(s+'B', len, a, b+1, c);
        quay(s+'C', len, a , b, c+1);
    }
}

int main(){
    cin >> n;
    for(int i=3; i<=n; i++){
        quay("", i, 0, 0, 0);
    }
}