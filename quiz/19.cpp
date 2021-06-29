#include <stdio.h>
int main(int argc, char** argv){
	//freopen("input.txt", "rt", stdin);
	int n, max=-2147000000, cnt=-1;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n;i++){
		scanf("%d", &a[i]);
	}
	
	for(int i=n-1; i>=0;i--){
		if(a[i]>max){
			max=a[i]; 
			cnt++;	
		}
	}
	printf("%d\n", cnt);
	return 0;
}
