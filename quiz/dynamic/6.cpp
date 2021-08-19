#include<bits/stdc++.h>
using namespace std;
int main(void){
	ios_base::sync_with_stdio(0);
	freopen("input.txt", "rt", stdin);
	int n, res = 0, a[101], area[101], weight[101], height[101], dy[101];
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> a[i] >> height[i] >> weight[i];
	}
	
	for(int i=1; i<=n; i++){
		int highest = 0;
		for(int j = i - 1; j>0; j--){
			if(a[i] < a[j] && weight[i] < weight[j] && dy[j] > highest) highest = dy[j];  
		}
		dy[i] = highest + height[i];
		if(res < dy[i]) res = dy[i];
	}
	cout << res;
	return 0;
}
