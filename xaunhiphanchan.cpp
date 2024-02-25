#include <bits/stdc++.h>
using namespace std;

int n, b[20];

/*int tong(int n){
    int sum=0;
    for(int i=1; i<=n; i++){
        sum+=b[i];
    }
    return sum;
}
*/
void in(){
    int sum=0;
    for (int i=1; i<=n; i++){
        
        sum+=b[i];   
    }
    if(sum%2==0){
        for(int i=1; i<=n; i++)
        cout << b[i] << " ";
        cout << endl;
    }
    
}

void xau(int i){
    for(int j=0; j<=1; j++){
        b[i]=j;
        if(i==n) {
            in();
        }
        else xau(i+1);
    }
}

main(){
    cin >> n;
    xau(1);
}