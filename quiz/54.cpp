#include<stdio.h>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
int main(int argc, char** argv){
	//freopen("input.txt", "rt", stdin);
    stack<char> s;
    char a[50];
    int i, flag=1;
    scanf("%s", &a);
    for(i=0; a[i]!='\0'; i++){
    	if(a[i]=='(') s.push(a[i]);
    	else{
    		if(s.empty()){
    			printf("NO\n");
    			flag=0;
    			break;
			}
			else s.pop();
		}
	}
	if(s.empty() && flag==1) printf("YES\n");
	else printf("NO\n");
	return 0;
}
