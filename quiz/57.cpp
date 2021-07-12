#include<stdio.h>
#include<vector>
#include<stack>
using namespace std;
void recur(int x){
	if(x==0) return;
	else{
		recur(x/2);
		printf("%d", x % 2);
	}
	return ;
}

int main(int argc, char** argv){
	//freopen("input.txt", "rt", stdin);
    int n;
    scanf("%d", &n);
    recur(n);
	return 0;
}
