#include<iostream>
using namespace std;

struct Edge {
	int src, dest, weight;
};

struct Graph {
	int V, E;

	struct Edge* edge;
};

struct Graph* createGraph(int V, int E) {
	struct Graph* graph = new Graph;
	graph->V = V;
	graph->E = E;
	graph->edge = new Edge[E];
	return graph;
}

void printArr(int dist[], int n) {
	cout << "Vertex Distance from Source" << endl;
	for (int i = 0; i < n; ++i) {
		cout << i << dist[i];
	}
}
