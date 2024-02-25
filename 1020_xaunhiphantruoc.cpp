#include <bits/stdc++.h>
using namespace std;

string s;
void sinh(){
    //neu la xau dau thi truoc no la xau cuoi cung khi toan bo s[i]=0
    //neu k la xau dau thi so 1 dau tien tu phai sang doi thanh so 0 va so con lai ben phai no thanh so 1
    int i=s.length()-1;
    while(i>=0 && s[i]=='0'){
        s[i--]='1';
    }
    if(i>=0) s[i]='0';
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> s;
        sinh();
        cout << s << endl;
    }
}