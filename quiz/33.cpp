#include <stdio.h>
#include <vector>

int main(int argc, char** argv){
	//freopen("input.txt", "rt", stdin);
	int n, i, cnt=0;
	scanf("%d", &n);
	std::vector<int> a(n);
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(i=0; i<n-1; i++){
		int idx = i;
		for(int j=i+1; j<n; j++){
			if (a[idx]< a[j]) idx = j;
		}
		int tmp = a[i];
		a[i] = a[idx];
		a[idx] = tmp;
	}
	
	for(i=1; i<n; i++){
		if(a[i-1]!=a[i]) cnt++;
		if(cnt==2){
			printf("%d\n", a[i]);
			break;
		}
	}
	return 0;
}
