#include <bits/stdc++.h>

using namespace std;

const int f[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int dem=0;
        for(int i=9; i>=0; i--){
            dem+=n/f[i];
            n%=f[i];
        }
        cout << dem << endl;
    }
}