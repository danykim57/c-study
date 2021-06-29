#include <stdio.h>
int main(int argc, char** argv){
	freopen("input.txt", "rt", stdin);
	int n, m, max=-2147000000, d, s=0;
	scanf("%d %d", &n, &m);
	for(int i=0; i<n; i++){
		scanf("%d ", &d);
		if(d>m) s++;
		else s=0;
		if(s>max) max=s;
	}
	if(max==0) printf("-1");
	else printf("%d", max);
	return 0;
}
