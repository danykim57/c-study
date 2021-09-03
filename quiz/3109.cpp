#include<bits/stdc++.h>
using namespace std;
int R, C, ans = 0;
char m[10001][501];
int visited[10001][501];
int dx[] = {-1, 0, 1};
int dy[] = {1, 1, 1};
bool flag;

void dfs(int x, int y){
	visited[x][y] = 1;
	if(y == C - 1){
		flag = true;
		ans++;
	}
	for(int i=0; i<3; i++){
		int nx = x + dx[i];
		int ny = y + dy[i];
		
		if(nx >=0 && ny >=0 && nx < R && ny < C){
			if(m[nx][ny] == '.' && visited[nx][ny] == 0){
				dfs(nx, ny);
				if(flag) return;
			}
		}
	}
}

int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	freopen("input.txt", "rt", stdin);
	cin >> R >> C;
	for(int i=0; i<R; i++){
		for(int j=0; j<C; j++){
		    cin >> m[i][j];	
		}
	}
	
	for(int i=0; i<R; i++){
		flag = false;
		dfs(i, 0);
	}
	cout << ans << endl;
	return 0;
}
