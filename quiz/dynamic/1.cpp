#include<bits/stdc++.h>
using namespace std;
int dy[50];
int main(){
	ios_base::sync_with_stdio(false);
	freopen("input.txt", "rt", stdin);
	int n;
	cin>>n;
	dy[1] = 1;
	dy[2] = 2;
	for(int i=3; i<=n; i++){
		dy[i]= dy[i -2] + dy[i - 1];
	}
	cout << dy[n];
	
	return 0;
}
