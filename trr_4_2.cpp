#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <set>

using namespace std;

int n, v0;
int x[100];
vector<vector<int>> Ke;
bool chuaxet[100];

void hmt(int k){
    for(int y : Ke[x[k-1]]){
        if(k==n+1 && y==v0){
            for(int j=1; j<=n; j++) {
                cout << x[j] << " ";
            }
            cout << v0 << endl;
        }
        else if(chuaxet[y]==true){
            x[k] = y;
            chuaxet[y] = false;
            hmt(k+1);
            chuaxet[y] = true;
        }
    } 
}

void hmt_cycle(int v0){
    for(int i=1; i<=n; i++) chuaxet[i]=true;
    x[1]=v0;
    chuaxet[v0]=false;
    hmt(2);
}

int main(){
    cin >> n >> v0;
    Ke.resize(n+1);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            int tmp; cin >> tmp;
            if(tmp==1) Ke[i].push_back(j);
        }
    }
    hmt_cycle(v0);
}
/*
5
1
0  1  0  1  0  
1  0  1  0  1  
0  1  0  1  1  
1  0  1  0  1  
0  1  1  1  0  
*/