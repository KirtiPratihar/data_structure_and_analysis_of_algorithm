// edges are the joining of 2 vertices
//path - contains nodes, and each of them is connected
//a node can't appear twice in a path
// degree- no. of edges connected to that node
// degree = 2* node
//directed graph - indegree(node) - no. of edges pointing toward that specific node.


//Graph Representation -
// n- node, m- edges


#include <iostream>
#include <vector>
using namespace std;

void dfs(vector<vector<int>>& graph,vector<bool>& seen,int node){
    seen[node]=true;
    cout<<node<<endl;
    for(int i:graph[node]){
        if(!seen[i]){
            dfs(graph,seen,i);
        }
    }
    
}


int main(){
    int ver, edge;
    cin>>ver>>edge;
    vector<vector<int>> graph(ver+1);
    for(int i=0;i<edge;i++){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
    }
    vector<bool> seen(ver+1,false);
    vector<vector<int>> result;
    vector<int> curr;
    dfs(graph,seen,1);
    return 0;
}
