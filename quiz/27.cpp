#include <stdio.h>
#include <vector>

int main(int argc, char** argv){
	//freopen("input.txt", "rt", stdin);
	int n, i, j, tmp;
	scanf("%d", &n);
	std::vector<int> a(n+1);
	for(i=2; i<=n; i++){
		tmp=i;
		j=2;
		while(1){
			if(tmp%j==0){
				tmp=tmp/j;
				a[j]++;
			}
			else j++;
			if(tmp==1) break;
		}
	}
	printf("%d! = ", n);
	for(i=2; i<=n; i++){
		if(a[i]!=0) printf("%d ", a[i]);
	}
	return 0;
}
