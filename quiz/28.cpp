#include <stdio.h>

int main(int argc, char** argv){
	//freopen("input.txt", "rt", stdin);
	int n, i, j, tmp, cnt=0, cnt1=0;
	scanf("%d", &n);
	for(i=2; i<=n; i++){
		tmp=i;
		j=2;
		while(1){
			if(tmp%j==0){
				if(j==2) cnt++;
				else if(j==5) cnt1++;
				tmp=tmp/j;
			}
			else j++;
			if(tmp==1) break;
		}
	}
	if(cnt<cnt1) printf("%d\n", cnt);
	else printf("%d\n", cnt1);
	
	return 0;
}
