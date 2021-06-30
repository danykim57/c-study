#include <stdio.h>
#include <vector>

int main(int argc, char** argv){
	//freopen("input.txt", "rt", stdin);
	int n, num;
	scanf("%d", &n);
	std::vector<int> a(n);
	std::vector<int> b(n,1);
	for(int i=0; i<n; i++){
		scanf("%d", &num);
		a[i] = num;
	}
	for(int i=0; i<n; i++){
		for(int j =0; j<n; j++){
			if(a[i]<a[j]) b[i]++;
		}
	}
	for(int i=0; i<n; i++){
		printf("%d ", b[i]);
	}
	return 0;
}
