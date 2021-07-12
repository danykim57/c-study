#include<stdio.h>
#include<vector>
#include<stack>
using namespace std;
void recur(int x){
	if(x==0) return;
	else{
		recur(x-1);
		printf("%d ", x);
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
