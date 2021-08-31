#include<bits/stdc++.h>
using namespace std;
int N, M, ans[1001];
# define INF 0x3f3f3f3f
typedef pair<int, int> iPair;

void addEdge(vector <iPair> adj[], int u, int v, int wt){
	adj[u].push_back(make_pair(v, wt));
	adj[v].push_back(make_pair(u, wt));
}

void shortestPath(vector<iPair> adj[], int ans[], int V, int src) {
	priority_queue< iPair, vector <iPair>, greater<iPair>> pq;
	vector<int> dist(V, INF);
	pq.push(make_pair(0, src));
	dist[src] = 0;
	while(!pq.empty()){
		int u = pq.top().second;
		pq.pop();
		for(auto x : adj[u]){
			int v = x.first;
			int weight = x.second;
			if(dist[v] > dist[u] + weight){
				dist[v] = dist[u] + weight;
				ans[v] = u;
				pq.push(make_pair(dist[v], v));
			}
		}
	}
}

int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
//	freopen("input.txt", "rt", stdin);
	cin >> N >> M;
	vector<iPair> arr[1001];
	for(int i=0; i<M; i++){
		int a, b, c;
		cin >> a >> b >> c;
		addEdge(arr, a, b, c);
	}
	for(int i =0; i<N; i++){
		shortestPath(arr, ans, 1001, 1);
	}
	cout << N - 1 << endl;  //회선의 개수 K = N - 1 
	for(int i=2; i<=N; i++) cout << ans[i] << " " << i << endl;
	
	return 0;
}
