#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

void D(int v){
	if(v>7) return;
	else{
		D(v*2);
		D(v*2+1);
		printf("%d ", v);
	}
}

int main(int argc, char** argv){
	//freopen("input.txt", "rt", stdin);
    D(1);
    return 0;
	return 0;
}
