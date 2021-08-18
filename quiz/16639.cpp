#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>
#include<climits>
using namespace std;

int N;
string s;
int maxD[10][10];
int minD[10][10];

int calculate(int a, int b , char op){
	switch (op){
		case '+':
			return a + b;
		case '-':
			return a - b;
		case '*':
			return a * b;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin >> N;
	cin >> s;
	
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			maxD[i][j] = INT_MIN;
			minD[i][j] = INT_MAX;
		}
	}
	
	int length = N /2 + 1;
	
	for(int i=0; i<length; i++) maxD[i][i] = minD[i][i] = s[i << 1] - 48;
	
	for(int cnt=1; cnt<length; cnt++){
		for(int idx =  0; idx < length - cnt; idx++){
			for(int i=1, j = cnt; i<=cnt; i++, j--){
				int opIdx = (idx + cnt - j) * 2 + 1;
				char op = s[opIdx];
				
				int candidates[4] = {
					calculate(maxD[idx][idx + cnt - j], maxD[idx + i][idx + cnt], op),
					calculate(maxD[idx][idx + cnt - j], minD[idx + i][idx + cnt], op),
					calculate(minD[idx][idx + cnt - j], maxD[idx + i][idx + cnt], op),
					calculate(minD[idx][idx + cnt - j], minD[idx + i][idx + cnt], op)
				};
				
				sort(candidates, candidates + 4);
				
				maxD[idx][idx + cnt] = max(maxD[idx][idx + cnt], candidates[3]);
				minD[idx][idx + cnt] = min(minD[idx][idx + cnt], candidates[0]);
			}
		}
	}
	
	int result = maxD[0][length - 1];
	cout << result;
	return 0;
}
