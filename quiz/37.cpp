#include <stdio.h>
#include <vector>

int main(int argc, char** argv){
	//freopen("input.txt", "rt", stdin);
	int n, m, w, i, j, k;
	scanf("%d", &n);
	std::vector<int> a(n,0);
	scanf("%d", &m);
	for(i=0; i<m; i++){
		int pos=-1;
		scanf("%d", &w);
		for(j=0; j<n; j++){
			if(a[j]==w){
				pos = j;
			}
		}
		if(pos==-1){
			for(j=n-1; j>0; j--){
				a[j] = a[j-1];
			}
		}
		else{
			for(j=pos; j>0; j--){
				a[j] = a[j-1];
			}
		}
		a[j] = w;
		for(k=0; k<n; k++){
		    printf("%d ", a[k]);
	    }
	    printf("\n");
	}
	return 0;
}
