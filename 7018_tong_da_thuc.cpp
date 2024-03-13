#include <bits/stdc++.h>

using namespace std;

class Dathuc{
    public:
        int d[10001]={};
        Dathuc(string s){
            stringstream ss(s);
            string tmp;
            while(ss >> tmp){
                if(tmp=="+") continue;
                int i=0;
                //luu he so
                while(isdigit(tmp[i])) i++;
                int x=stoi(tmp.substr(0, i));
                //luu so mu
                while(!isdigit(tmp[i])) i++;
                int y=stoi(tmp.substr(i));
                d[y]+=x;
            }
        }
};

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string a, b;
        int c[10001]={}, ok=0;
        getline(cin, a);
        getline(cin, b);
        Dathuc x = Dathuc(a);
        Dathuc y = Dathuc(b);
        for(int i=0; i<10001; i++){
            c[i]=x.d[i]+y.d[i];
        }
        for(int i=10000; i>=0; i--){
            if(c[i]>0){
                if(ok) cout << " + ";
                cout << c[i] << "*x^" << i;
                ok=1;
            }
        }
    }
}
/*
1
3*x^8 + 7*x^2 + 4*x^0
11*x^6 + 9*x^2 + 2*x^1 + 3*x^0
*/