#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <set>

using namespace std;

class Graph{
    public:
        int n, u, s, t, a[100][100];
        vector <int> CE;
        void read();
        void euler(int u);
};

void Graph::read(){
    cin >> n >> u;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++) cin >> a[i][j];
    }
}

void Graph::euler(int u){
    stack <int> st;
    CE.clear();
    st.push(u);
    while(!st.empty()){
        int s=st.top();
        bool xetcanh = false;
        for(int i=1; i<=n; i++){
            if(a[s][i]){
                xetcanh = true;
                st.push(i);
                a[s][i]=a[i][s]=0;
                break;
            }
        }
        if(!xetcanh){
            st.pop();
            CE.push_back(s);
        }
    }
    for(int i=CE.size()-1; i>=0; i--) cout << CE[i] << " ";
}

int main(){
    Graph g;
    g.read();
    g.euler(g.u);
}
/*
6
1
0  0  0  1  1  0  
0  0  1  1  1  1  
0  1  0  1  1  1  
1  1  1  0  1  0  
1  1  1  1  0  0  
0  1  1  0  0  0  
*/