#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	int n, a[50], dy[50];
	freopen("input.txt", "rt", stdin);
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	dy[0] = 1;
	for(int i=1; i<n; i++){
		int j = i-1, large = INT_MIN;
		while(a[i] > a[j] && j >= 0) {
			if(dy[j] > large) large = dy[j];
			j--;
		}
		if(large == INT_MIN) dy[i] = 1;
		else dy[i] = large + 1;
		dy[n] = max(dy[n], dy[i]);
	}
	
	cout << dy[n];
	return 0;
}
