#include <iostream>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

class Graph{
    public:
        int n, a[100][100];
        bool xet1[100];
        void read();
        void init();
        void dfs(int s);
        bool connect();
};

void Graph::read(){
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++) cin >> a[i][j];
    }
}

void Graph::init(){
    for(int i=1; i<=n; i++){
        xet1[i]=1;
    }
}

void Graph::dfs(int s){
    stack <int> st;
    st.push(s);
    xet1[s]=0;
    while(!st.empty()){
        int u=st.top();
        st.pop();
        for(int v=1; v<=n; v++){
            if(a[u][v] && xet1[v]){
               xet1[v]=0;
               st.push(u);
               st.push(v);
               break; 
            }
        }
    }
}

bool Graph::connect(){
    init(); 
    for(int u=1; u<=n; u++) {
        dfs(u);
        for(int i=1; i<=n; i++) {
            if(xet1[i]) return false;
        }
        init();
    }
    return true;
}

int main(){
    Graph g;
    g.read();
    g.init();
    (g.connect()) ? cout << "strongly connected" : cout << "not strongly connected";
}

/*
13
0  0  1  0  0  0  0  0  0  0  0  0  0  
1  0  1  0  0  0  0  0  0  0  0  0  0  
0  0  0  1  0  1  0  0  0  0  0  0  0  
0  1  0  0  0  1  0  0  0  0  0  0  0  
0  1  0  1  0  0  0  0  0  0  0  0  0  
0  0  0  0  0  0  1  0  1  0  0  0  0  
0  0  0  0  1  0  0  0  1  0  0  0  0  
0  0  0  0  1  0  1  0  0  0  0  0  0  
0  0  0  0  0  0  0  0  0  1  0  1  0  
0  0  0  0  0  0  0  1  0  0  0  1  0  
0  0  0  0  0  0  0  1  0  1  0  0  0  
0  0  0  0  0  0  0  0  0  0  1  0  1  
0  0  0  0  0  0  0  0  0  0  1  0  0 

14
0  0  1  0  0  0  0  0  0  0  0  0  0  0  
1  0  1  0  0  0  0  0  0  0  0  0  0  0  
0  0  0  1  0  1  0  0  0  0  0  0  0  0  
0  1  0  0  0  1  0  0  0  0  0  0  0  0  
0  1  0  1  0  0  0  0  0  0  0  0  0  0  
0  0  0  0  0  0  1  0  1  0  0  0  0  0  
0  0  0  0  1  0  0  0  1  0  0  0  0  0  
0  0  0  0  1  0  1  0  0  0  0  0  0  0  
0  0  0  0  0  0  0  0  0  1  0  1  0  0  
0  0  0  0  0  0  0  1  0  0  0  1  0  0  
0  0  0  0  0  0  0  1  0  1  0  0  0  0  
0  0  0  0  0  0  0  0  0  0  1  0  1  0  
0  0  0  0  0  0  0  0  0  0  1  0  0  1  
0  0  0  0  0  0  0  0  0  0  0  0  0  0  
*/