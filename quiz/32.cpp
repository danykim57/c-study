#include <stdio.h>
#include <vector>

int main(int argc, char** argv){
	//freopen("input.txt", "rt", stdin);
	int n, i;
	scanf("%d", &n);
	std::vector<int> a(n);
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	for(i =0; i<n-1; i++){
		int idx = i;
		for(int j=i+1; j<n; j++){
			if(a[j]<a[idx]) idx=j;
		}
		int tmp = a[i];
		a[i] = a[idx];
		a[idx] = tmp;
	}
	
	for(i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	
	return 0;
}
