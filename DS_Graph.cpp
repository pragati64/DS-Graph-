#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void print(vector<int> adj[], int V)
{
	for (int v = 0; v < V; ++v) {
		cout << "\n Adjacency list of vertex " << v
			<< "\n head ";
		for (auto x : adj[v])
			cout << "-> " << x;
		printf("\n");
	}
}


int main()
{
	int V = 6;
	vector<int> adj[V];
	addEdge(adj, 0, 3);
	addEdge(adj, 2, 5);
	addEdge(adj, 2, 3);
	addEdge(adj, 1, 5);
	addEdge(adj, 1, 2);
	addEdge(adj, 2, 4);
	addEdge(adj, 3, 3);
	print(adj, V);
	return 0;
}
