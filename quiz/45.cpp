#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int main(int arc, char** argv){
	//freopen("input.txt", "rt", stdin);
	int i, n, k, pos=0, bp=0, cnt=0;
	scanf("%d %d", &n, &k);
	vector<int> prince(n+1);
	while(1){
		pos++;
		if(pos>n) pos=1;
		if(prince[pos]==0){
			cnt++;
			if(cnt==k){
				prince[pos]=1;
				cnt=0;
				bp++;
			}
		}
		if(bp==n-1) break;
	}
	for(i=1; i<=n; i++){
		if(prince[i]==0){
			printf("%d\n", i);
			break;
		}
	}
	return 0;
}
	
