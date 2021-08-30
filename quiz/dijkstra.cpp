#include<bits/stdc++.h>
using namespace std;
int N;
# define INF 0x3f3f3f3f
typedef pair<int, int> iPair;

void addEdge(vector <iPair> adj[], int u, int v, int wt){
	adj[u].push_back(make_pair(v, wt));
	adj[v].push_back(make_pair(u, wt));
}

void shortestPath(vector<iPair> adj[], int ans[], int V, int n, int src) {
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
				pq.push(make_pair(dist[v], v));
			}
		}
	}
	for(int j=1; j<=n; j++) ans[j] +=dist[j];
}

int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
//	freopen("input.txt", "rt", stdin);
	cin >> N;
	while(N--){
		int n, m, k, s, ans[101] = {};
		cin >> n>> m;
		vector<iPair> arr[101];
		for(int i=0; i<m; i++){
			int a, b, c;
			cin >> a >> b >> c;
			addEdge(arr, a, b, c);
		}
		cin >> k;
		for(int i=0; i<k; i++){
			cin >> s;
			shortestPath(arr, ans, 101, n, s);
		}
		int result = -1;
		int num;
		for(int i=1; i<=n; i++){
			if(result == -1 || ans[i]<result) {
				result = ans[i];
				num = i;
			}
		}
		cout << num << endl;
	}
	return 0;
}
