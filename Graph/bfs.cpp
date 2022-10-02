// TIME COMPLEXITY --> O(V+E)
// SPACE COMPLEXITY --> O(V)

#include <bits/stdc++.h>
using namespace std;
// bfs function
vector<int> bfs(int V, vector<int> adj[]) 
{
    vector<int> ans;
    vector<int> visited(V, 0);
    visited[0] = 1;
    queue<int> q;
    q.push(0);
    
    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        ans.push_back(node);
        
        for(auto it: adj[node])
        {
            if(!visited[it])
            {
                visited[it] = 1;
                q.push(it);
            }
        }
    }
    return ans;
}
//drive code
int main() {
    int nodes, edges;
    cout << "Enter number of nodes and edges : ";
    cin >> nodes >> edges;

    // adjencency list
    vector<int> adjlist[nodes];
    
    cout << "Enter "<< edges << " pairs of src, dest vertices of a edge : ";
    for(int i=0; i< edges; i++) {
        int u,v;
        cin >> u >> v;
        // directed graph
        adjlist[u].push_back(v);
    }
    
    vector<int> ans = bfs(nodes, adjlist);

    // printing the output array
    for(auto it: ans) {
        cout<<it<<" ";
    }

    return 0;
}