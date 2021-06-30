#include <stdio.h>
#include <vector>
#include <algorithm>
int main(int argc, char** argv){
	//freopen("input.txt", "rt", stdin);
	int n, pre, now, diff;
	scanf("%d", &n);
	std::vector<int> a(n,0);
	scanf("%d", &pre);
	for(int i =1; i<n; i++) {
		scanf("%d", &now);
		diff = abs(pre - now);
		if(diff>0 && diff<n  && a[diff]==0) a[diff] = 1;
		else{
			printf("NO");
			exit(0);
		}
		pre=now;
	}
	printf("YES");
	return 0;
}
