#include <stdio.h>
#include <vector>
#include <algorithm>
int a[1001], n;
int Count(int s){
	int i, cnt=1, sum=0;
	for(i=1; i<=n; i++){
		if(sum+a[i]>s){
			cnt++;
			sum=a[i];
		}
		else sum=sum+a[i];
	}
	return cnt;
}
int main(int argc, char** argv){
	//freopen("input.txt", "rt", stdin);
	int m, lt=0, rt=0, mid, res;
	scanf("%d %d", &n, &m);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
		rt=rt+a[i];
	}
	while(lt<=rt){
		mid=(lt+rt)/2;
		if(Count(mid)<=m){
			res=mid;
			rt=mid-1;
		}
		else lt=mid+1;
	}
	printf("%d\n", res);
	
	return 0;
}
