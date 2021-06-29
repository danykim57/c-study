#include <stdio.h>
int a[10], b[10];
int main(int argc, char** argv){
	//freopen("input.txt", "rt", stdin);
	int n, A=0, B=0, lw=0;
	for(int i=0;i<10;i++){
		scanf("%d", &n);
		a[i]=n;
	}
	for(int i=0;i<10;i++){
		scanf("%d", &n);
		b[i]=n;
	}
	for(int i=0;i<10;i++){
		if(a[i]==b[i]) {
			A++;
			B++;
		}
		else if(a[i]>b[i]){
			A=A+3;
			lw=1;
		}
		else{
		B=B+3;
		lw=2;
	    }
	}
	printf("%d %d\n", A, B);
	if(A==B){
		if(lw==0) printf("D\n");
		else if(lw==1) printf("A\n");
		else printf("B\n");
	}
	else if(A>B) printf("A\n");
	else printf("B\n");
	return 0;
}
