#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int n, m, a[11], cnt=0;

void DFS(int L, int val){
	if(L==n+1){
		if(val==m) cnt++;
	}
	else{
		DFS(L+1, val+a[L]);
		DFS(L+1, val-a[L]);
		DFS(L+1, val);
	}
}

int main(int argc, char** argv){
	//freopen("input.txt", "rt", stdin);
	scanf("%d %d", &n, &m);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	DFS(1, 0);
	if(cnt==0) printf("-1\n");
	else printf("%d\n", cnt);
	return 0;
}
