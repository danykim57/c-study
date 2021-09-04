#include<bits/stdc++.h>
using namespace std;
int N,cnt=0;
bool flag;
struct str {
	string s;
	int size;
	str(string newS, int newSize) {
		s = newS;
		size = newSize;
	}

	bool operator<(str &a) {
		return size < a.size;
	}
};
int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
//	freopen("input.txt", "rt", stdin);
	cin >> N;
	vector<str> s;
	for (int i = 0; i < N; i++) {
		string tmp;
		cin >> tmp;
		s.push_back(str(tmp, tmp.size()));
	}
	sort(s.begin(), s.end());
	for (int i = 0; i < s.size(); i++) {
	    flag = false;
		for (int j = i + 1; j < s.size(); j++) {
			if (!s[j].s.find(s[i].s)) {
				 flag = true;
			}
		}
		if (flag) cnt++;
	}
	cout << N - cnt << endl;

	return 0;
}
