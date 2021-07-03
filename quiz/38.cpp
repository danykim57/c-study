#include <stdio.h>
#include <vector>

int main(int argc, char** argv){
	//freopen("input.txt", "rt", stdin);
	int n, i, j,target, num;
	scanf("%d", &n);
	std::vector<int> a(n, 0);
	
	for(i=0; i<n; i++){
		target=i+1;
		scanf("%d", &num);
		for(j=0; j<=num; j++){
			if(a[j]<i+1 && a[j]!=0)num++;
		}
		a[num]=i+1;
	}
	
	for(i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	return 0;
}
