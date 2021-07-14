#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int n, a[11], total=0;
bool flag=false;
void DFS(int L, int sum){
	if(sum>(total/2)) return;
	if(flag==true) return;
	if(L==n+1){
		if(sum == (total-sum)){
			flag=true;
		}
	}
	else{
		DFS(L+1, sum+a[L]);
		DFS(L+1, sum);
	}
}

int main(int argc, char** argv){
	//freopen("input.txt", "rt", stdin);
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
		total+=a[i];
	}
	DFS(1, 0);
	if(flag) printf("YES");
	else printf("NO");
	
	return 0;
}
