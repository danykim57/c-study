#include <stdio.h>

int main(int argc, char** argv){
	//freopen("input.txt", "rt", stdin);
	char word[10];
	int c=0, h=0, i, pos;
	scanf("%s",  &word);
	if(word[1]=='H'){
		c=1;
		pos=1;
	}
	else{
		for(i = 1; word[i]!='H'; i++){
			c=c*10+(word[i]-48);
		}
		pos=i;
	}
	if(word[pos+1]=='\0') h=1;
	else{
		for(i = pos+1; word[i]!='\0'; i++){
			h=h*10+(word[i]-48);
		}
	}
	printf("%d", c*12 + h);
	return 0;
}
