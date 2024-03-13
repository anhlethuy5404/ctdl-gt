#include <iostream>
#include <vector>
#include <stack>
#define MAX 100
using namespace std;

class Graph{
    public:
    int n, chuaxet[MAX], a[MAX][MAX];
    void readdata();
    void init();
    void stackDFS(int u);
};

void Graph::readdata(){
    cin >> n;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++) cin >> a[i][j];
}

void Graph::init(){
    for (int i=1; i<=n; i++) chuaxet[i]=1;
}

void Graph::stackDFS(int u){
    stack<int> stk;
    cout << u << " ";
    stk.push(u);
    chuaxet[u]=0;
    while(!stk.empty()){
        int s=stk.top(); stk.pop();
        for(int t=1; t<=n; t++)
            if(a[s][t]==1 && chuaxet[t]==1){
                cout << t << " ";
                chuaxet[t]=0;
                stk.push(s);
                stk.push(t);
                break;
            }
    }
}

int main(){
    Graph g;
    g.readdata();
    g.init();
    g.stackDFS(1);
}