#include <stdio.h>

int main(int argc, char** argv){
	//freopen("input.txt", "rt", stdin);
	int n, m, sum, cnt, total=0;
	scanf("%d", &n);
	m = n - 1;
	while(m>0){
		sum = 0;
		cnt = 0;
		while(sum < n){
			sum = sum + m + cnt;
			cnt++;
			if(sum == n) {
				printf("%d ", m);
				for(int i=1; i<cnt; i++){
					printf("+ %d ",m + i);
				}
				printf("= %d\n", n);
				total++;
			};
			
		}
		m--;
	}
	printf("%d",total);
	return 0;
}
