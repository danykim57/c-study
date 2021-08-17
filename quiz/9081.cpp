#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
	ios_base::sync_with_stdio(false);
	string word;
	cin >> n;
	while(n>0){
		int cnt = 0;
		cin >> word;
		int i = word.length() - 1;
		while(i-1 >=0 && word[i-1] >= word[i]) i--;
		if(i<=0) break;
		int j = word.length() - 1;
		while(j >=0 && word[j] <= word[i-1]) j--;
		swap(word[i-1],word[j]);
		j = word.length() - 1;
		while(i < j) {
			swap(word[i], word[j]);
			i++;
			j--;
		}
		cout << word << "\n";
		n--;
	}
	cout << word << "\n";
	return 0;
}
