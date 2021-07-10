#include<stdio.h>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

int main(int argc, char** argv){
	//freopen("input.txt", "rt", stdin);
    int n, k;
    stack<int> s;
    char str[20]="0123456789ABCDEF";
    scanf("%d %d", &n, &k);
    while(n>0){
    	s.push(n%k);
    	n=n/k;
	}
	while(!s.empty()){
		printf("%c", str[s.top()]);
		s.pop();
	}
	return 0;
}
