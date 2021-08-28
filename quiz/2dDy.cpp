#include<bits/stdc++.h>
using namespace std;
int N, m, a[50001], dy[4][50001], sum[50001], ans = 0; //dy[소형기관차]][객차] 
int main(){
	ios_base::sync_with_stdio(0);
	freopen("input.txt", "rt", stdin);
	cin >> N;
	for(int i=1; i<=N; i++){
		cin >> a[i];
		sum[i] = sum[i - 1] + a[i]; 
	}
	cin >> m; //연속된 객차
	//점화식
	for(int i = m; i <=N; i++){
		dy[1][i] = max(dy[1][i-1], sum[i] - sum[i-m]);
	}  
    //다음 소형 기관차 만큼 더하기 
	for(int i=2; i<4; i++){
		for(int j = i * m; j <= N; j++){
			dy[i][j] = max(dy[i][j-1], dy[i-1][j - m] + sum[j] - sum[j-m]);
			ans = max(ans, dy[i][j]);
		}
	}
	cout << ans << endl;
	return 0;
} 
