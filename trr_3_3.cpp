#include <iostream>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

class Graph{
    public:
    int n, a[100][100];
    bool chuaxet[100];
    void read();
    void init();
    void bfs(int u);
};

void Graph::read(){
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++) cin >> a[i][j];
    }
}

void Graph::init(){
    for(int i=1; i<=n; i++) chuaxet[i]=1;
}

void Graph::bfs(int u){
    queue <int> q;
    cout << u << " ";
    q.push(u);
    chuaxet[u]=0;
    while(!q.empty()){
        int s=q.front();
        q.pop();
        for(int t=1; t<=n; t++){
            if(a[s][t]==1 && chuaxet[t]==1){
                cout << t << " ";
                q.push(t);
                chuaxet[t]=0;
            }
        }
    }
}

int main(){
    Graph g;
    g.read();
    g.init();
    g.bfs(1);
}
/*
5
0 1 0 0 1
1 0 1 1 1
0 1 0 1 0
0 1 1 0 1
1 1 0 1 0

5
0 1 0 0 0 
0 0 1 1 0 
0 0 0 0 0
0 0 1 0 0 
1 1 0 1 0 
*/