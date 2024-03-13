#include <bits/stdc++.h>

using namespace std;

int doi5(string s){
    int x = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='6') s[i]='5';
        x = x*10 + (s[i]-'0');
    }
    return x;
}

int doi6(string s){
    int x = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='5') s[i]='6';
        x = x*10 + (s[i]-'0');
    }
    return x;
}

int main(){
    string a, b;
    cin >> a >> b;
    cout << doi5(a)+doi5(b) << " " << doi6(a)+doi6(b);
}