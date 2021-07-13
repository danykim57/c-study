#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int n, ch[11];
void DFS(int L){
	if(L==n+1){
		for(int i=1; i<=n; i++){
			if(ch[i]==1) printf("%d ", i);
		}
		puts("");
	}
	else{
		ch[L]=1;
		DFS(L+1);
		ch[L]=0;
		DFS(L+1);
	}
}

int main(int argc, char** argv){
	//freopen("input.txt", "rt", stdin);
	scanf("%d", &n);
    DFS(1);
	return 0;
}
