#include <iostream>
#include <stack>
#define MAX 100
using namespace std;

class Graph {
    public:
        int n, chuaxet[MAX], a[MAX][MAX], soTPLT;
        void readdata();
        void init();
        void dfs(int u);
        void duyet();
};

void Graph::readdata(){
    cin >> n;
    for (int i=1; i<=n; i++){
        for(int j=1; j<=n; j++) cin >> a[i][j];
    }
}

void Graph::init(){
    for(int i=1; i<=n; i++) chuaxet[i]=1;
}

void Graph::dfs(int u){
    //cout << u << " ";
    chuaxet[u]=0;
    for(int v=1; v<=n; v++)
        if(a[u][v]==1 && chuaxet[v]==1) 
            dfs(v);
}

void Graph::duyet(){
    soTPLT = 0;
    for(int u=1; u<=n; u++){
        if(chuaxet[u]){
            soTPLT++;
            dfs(u);
        }
    }
    cout << soTPLT << " ";
}

int main(){
    Graph g;
    g.readdata();
    g.init();
    g.duyet();
}
/*
14
0  0  1  0  0  0  0  0  0  0  0  0  0  0  
0  0  1  0  0  0  0  0  0  0  0  0  0  0  
1  1  0  1  1  0  0  0  0  0  0  0  0  0  
0  0  1  0  0  0  0  0  0  0  0  0  0  0  
0  0  1  0  0  1  0  0  0  0  0  0  0  0  
0  0  0  0  1  0  0  0  0  0  0  0  0  0  
0  0  0  0  0  0  0  1  0  0  0  1  0  0  
0  0  0  0  0  0  1  0  1  0  0  0  0  0  
0  0  0  0  0  0  0  1  0  0  0  0  1  0  
0  0  0  0  0  0  0  0  0  0  1  0  1  0  
0  0  0  0  0  0  0  0  0  1  0  1  0  0  
0  0  0  0  0  0  1  0  0  0  1  0  0  0  
0  0  0  0  0  0  0  0  1  1  0  0  0  1  
0  0  0  0  0  0  0  0  0  0  0  0  1  0  
*/