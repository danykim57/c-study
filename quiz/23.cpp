#include <stdio.h>
int main(int argc, char** argv){
	//freopen("input.txt", "rt", stdin);
	int n, i, pre, now, cnt=0, max=-2147000000;
	scanf("%d", &n);
	scanf("%d", &pre);
	cnt=1;
	max=1;
	for(i=2; i<n; i++){
		scanf("%d", &now);
		if(now>=pre){
			cnt++;
			if(cnt>max) max=cnt;
		}
		else cnt=1;
		pre=now;
	}
	printf("%d\n", max);
	return 0;
}
