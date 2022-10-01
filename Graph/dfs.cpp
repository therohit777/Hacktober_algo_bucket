// TIME COMPLEXITY --> O(V+E)
// SPACE COMPLEXITY --> O(V)

#include <bits/stdc++.h>
using namespace std;
// dfs function
void dfs(int node, vector<int> adj[], vector<int>&visited, vector<int>&ans) {
    visited[node] = 1;
    
    ans.push_back(node);
    
    for(auto it: adj[node])
    {
        if(!visited[it])
        {
            dfs(it, adj, visited, ans);
        }
    }
}
//drive code
int main() {
    // output vector
    vector<int> ans;
        
    int nodes, edges;
    cout << "Enter number of nodes and edges : ";
    cin >> nodes >> edges;

    vector<int> visited(nodes, 0);
    // adjencency list
    vector<int> adjlist[nodes];
    
    cout << "Enter "<< edges << " pairs of src, dest vertices of a edge : ";
    for(int i=0; i< edges; i++) {
        int u,v;
        cin >> u >> v;
        // directed graph
        adjlist[u].push_back(v);
    }
    
    // assuming nodes start from 0 and assuming 0 as source vertex here
    dfs(0, adjlist, visited, ans);

    // printing the output array
    for(auto it: ans) {
        cout<<it<<" ";
    }

    return 0;
}