#include <stdio.h>
#include <vector>

int main(int argc, char** argv){
	//freopen("input.txt", "rt", stdin);
	int i, j, n, m;
    scanf("%d", &n);
    std::vector<int> a(n);
    std::vector<int> b(n);
    
    for(int i=0; i<n; i++){
    	scanf("%d", &m);
    	a[i] = m;
    	b[i] = i + 1;
	}
	
	for(i= n - 1; i>0; i--){
		for(j= i - 1; j>=0; j--){
			if(a[i]>a[j]) b[i]--; 
		}
	}
	for(int i=0; i<n; i++){
		printf("%d ", b[i]);
	}
	return 0;
}
