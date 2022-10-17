
#include <bits/stdc++.h>
using namespace std;


class Graph {
public:
	map<int, bool> visited;
	map<int, list<int> > adj;

	
	void addEdge(int v12, int w12);


	void DFS(int v12);
};

void Graph::addEdge(int v12, int w12)
{
	adj[v12].push_back(w12); 
}

void Graph::DFS(int v12)
{
	
	visited[v12] = true;
	cout << v12 << " ";


	list<int>::iterator i;
	for (i = adj[v12].begin(); i != adj[v12].end(); ++i)
		if (!visited[*i])
			DFS(*i);
}


int main()
{

	Graph g;
	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 2);
	g.addEdge(2, 0);
	g.addEdge(2, 3);
	g.addEdge(3, 3);

	cout << "Following is Depth First Traversal"
			" (starting from vertex 2) \n";

	// Function call
	g.DFS(2);

	return 0;
}


