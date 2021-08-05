#include<bits/stdc++.h>
using namespace std;

class Graph {
	int vertice;
	list<int> *adj;
	public:
		Graph(int newV) {
			vertice = newV;
			adj = new list<int>[vertice];
		}
		void addEdge(int v, int w) {
			adj[v].push_back(w);
		}
		
		void BFS(int s) {
			bool *visited = new bool[vertice];
			for(int i=0; i<vertice; i++){
				visited[i] = false;
			}
			list<int> queue;
			visited[s] = true;
			queue.push_back(s);
			
			while(!queue.empty()) {
				s = queue.front();
				cout << s << " ";
				queue.pop_front();
				for (list<int>::iterator it = adj[s].begin(); it != adj[s].end(); ++it)
				{
					if (!visited[*it]){
						visited[*it] = true;
						queue.push_back(*it);
					}
				}
			}
       	}
};


int main(){
	ios_base::sync_with_stdio(false);
	Graph g(4);
	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 2);
	g.addEdge(2, 0);
	g.addEdge(2, 3);
	g.addEdge(3, 3);
	
	cout << "BFS Traversal \n";
	g.BFS(2);
	
	return 0;
}

