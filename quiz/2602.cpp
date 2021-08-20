#include<bits/stdc++.h>
using namespace std;
int dy1[101][21], dy2[101][21], res = 0;  //dy[돌다리 위치][두루마리  위치] 
string script, step1, step2;
int main(void){
	ios_base::sync_with_stdio(0);
//	freopen("input.txt", "rt", stdin);
	getline(cin, script);
	getline(cin, step1);
	getline(cin, step2);
    
    for(int i=0; i<step1.length(); i++){
    	if(script[0] == step1[i]) dy1[i][0] = 1;
	    if(script[0] == step2[i]) dy2[i][0] = 1;
	}
	
	for(int i=0; i<step1.length(); i++){
		for(int j=1; j<script.length(); j++){
			if(step1[i] == script[j]){
				int cnt = 0;
				for (int k = 0; k<i; k++){
					if(dy2[k][j-1] != 0) cnt += dy2[k][j-1];
				}
				dy1[i][j] = cnt;
			}
			if(step2[i] == script[j]){
				int cnt = 0;
				for (int k = 0; k < i; k++){
					if(dy1[k][j-1] != 0) cnt += dy1[k][j-1];
				}
				dy2[i][j] = cnt;
			}
		}
	}
	
    for(int i=0; i<step1.length(); i++){
    	res += dy1[i][script.length() - 1];
    	res += dy2[i][script.length() - 1];
	} 
	
	cout << res << "\n";
	return 0;
}
