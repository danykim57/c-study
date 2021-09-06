#include<bits/stdc++.h>
using namespace std;
int N, P, Q;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	freopen("input.txt", "rt", stdin);
	cin >> N;
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	priority_queue<int, vector<int>, greater<int>> seats; //자리 왼쪽부터 채워놓기  
	map<int, int> m;
	vector<int> answer(N); 
	int idx = 0;
	
//	filling map m
	while(N--){
		cin >> P >> Q;
		m.insert({P, Q});
	}
	
	for(auto person : m){
		while(!pq.empty()){  //현재 이용자가 있을경우 최소값 비교 
	    	if(pq.top().first < person.first){
	    		seats.push(pq.top().second);
	    		pq.pop();
			}
			else break;
		} 
		
	    if(seats.empty()){
		    pq.push({person.second, idx});
		    answer[idx++]++;
	    }
	
	    else{  //자리 있을  
		    int tmp = seats.top();
		    pq.push({person.second, tmp});
		    answer[tmp]++;
		    seats.pop();
	    }
    }
	
	//output
	cout << idx << endl;
	
	for(int i=0; i<idx; i++){
		cout << answer[i] << " ";
	}
	
	
	return 0;
}
