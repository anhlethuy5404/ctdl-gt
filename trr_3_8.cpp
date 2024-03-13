#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <set>
using namespace std;

class Graph{
    public:
        int n, a[100][100];
        bool chuaxet[100];
        vector <pair<int, int>> e;
        void read();
        void init();
        void dfs(int s);
        void cau();
};

void Graph::read(){
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++) {
            cin >> a[i][j];
            //vi dt vo huong nen xet 1 nua ma tran
            if(j>i && a[i][j]==1) e.push_back({i,j});
        }
    }
}

void Graph::init(){
    for(int i=1; i<=n; i++){
        chuaxet[i]=1;
    }
}

void Graph::dfs(int s){
    stack <int> st;
    st.push(s);
    chuaxet[s]=0;
    while(!st.empty()){
        int u=st.top();
        st.pop();
        for(int v=1; v<=n; v++){
            if(a[u][v] && chuaxet[v]){
               chuaxet[v]=0;
               st.push(u);
               st.push(v);
               break; 
            }
        }
    }
}

void Graph::cau(){
    init();
    for(auto x : e){
        int u=x.first;
        int v=x.second;
        a[u][v] = a[v][u] = 0;
        dfs(1);
        for(int i=1; i<=n; i++){
            if(chuaxet[i]) {
                cout << u << " " << v << endl;
                break;
            }
        }
        a[u][v] = a[v][u] = 1;
        init();
    }
}

int main(){
    Graph g;
    g.read();
    g.init();
    g.cau();
}