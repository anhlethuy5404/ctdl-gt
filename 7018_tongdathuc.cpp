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
                while(isdigit(tmp[i])) i++;
                int x=stoi(tmp.substr(0, i));
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
        getline(cin, a);
        getline(cin, b);
        Dathuc x = Dathuc(a);
        Dathuc y = Dathuc(b);
        int d[10001]={}, dem=0;
        for(int i=0; i<10001; i++){
            d[i]=x.d[i]+y.d[i];
            if(d[i]>0) dem++;
        }
        for(int i=10000; i>=0; i--){
            if(d[i]>0){
                cout << d[i] << "*x^" << i;
                dem--;
                if(dem>0) cout << " + ";
            }
        }
    }
}