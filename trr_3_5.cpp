#include <iostream>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

class Graph{
    public:
        int n, t, s, a[100][100], truoc1[100], truoc2[100];
        bool xet1[100], xet2[100];
        int path=1;
        void read();
        void init();
        void dfs(int s);
        void bfs(int s);
};

void Graph::read(){
    cin >> n;
    cin >> s >> t;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++) cin >> a[i][j];
    }
}

void Graph::init(){
    for(int i=1; i<=n; i++){
        xet1[i]=1;
        xet2[i]=1;
        truoc1[i]=0;
        truoc2[i]=0;
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
               truoc1[v]=u;
               break; 
            }
        }
    }
    //ghi nhan dg di
    if(truoc1[t]==0) cout << "no path";
    else{
        cout << "DFS path: ";
        cout << t << " ";
        int l=truoc1[t];
        while(l!=s){
            cout << l << " ";
            l=truoc1[l];
        }
        cout << s;
    }
}

void Graph::bfs(int s){
    queue <int> q;
    q.push(s);
    xet2[s]=0;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int v=1; v<=n; v++){
            if(a[u][v] && xet2[v]){
                q.push(v);
                xet2[v]=0;
                truoc2[v]=u;
            }
        }
    }
    //ghi nhan dg di
    if(truoc2[t]==0) path=0;
    else{
        cout << "BFS path: ";
        cout << t << " ";
        int l=truoc2[t];
        while(l!=s){
            cout << l << " ";
            l=truoc2[l];
        }
        cout << s;
    }
}

int main(){
    Graph g;
    g.read();
    g.init();
    g.dfs(g.s);
    cout << endl;
    g.bfs(g.s);
}

//note: bien path k de lam gi!

/*
14
6  14
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

14
14  6
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