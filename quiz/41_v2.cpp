#include <stdio.h>

int main(int argc, char** argv){
	//freopen("input.txt", "rt", stdin);
	int a, b=1, cnt=0, tmp, i;
	scanf("%d", &a);
	tmp=a;
	a--;
	while(a>0){
		b++;
		a=a-b;
		if(a%b==0){
			for(i=1; i<b; i++){
				printf("%d + ", (a/b)+i);
			}
			printf("%d = %d\n", (a/b)+b, tmp);
			cnt++;
		}
	}
	return 0;
}
