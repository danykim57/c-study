#include <bits/stdc++.h>
using namespace std;

const int NUM_ALPHABETS = 26;
int toIndex(char ch) { return ch - 'a';}

struct TrieNode {
	TrieNode* children[NUM_ALPHABETS];
	// unordered_map<string, TrieNode*> children;
	bool isEnd;
	
	TrieNode() : children(), isEnd(false) {
	}
	
	void insert(string& key, int index) {
		if(index == key.length() - 1) isEnd = true;
		else {
			int next = toIndex(key[index]);
			if(children[next] == nullptr) children[next] = new TrieNode;
			children[next]->insert(key, index + 1);
		}
	}
	
	bool find_1(string& key, int depth){   //부분 접두사 검색 
		if(depth == key.length() - 1) return true;
		int next = toIndex(key[depth]);
		if(children[next] == nullptr) return false;
		return children[next]->find_1(key, depth + 1);
	}
	
	bool find_2(string& key, int depth) {
		if(depth == key.length() - 1 && isEnd) return true;
		if(depth == key.length() - 1 && !isEnd) return false;
		int next = toIndex(key[depth]);
		if(children[next] == nullptr) return false;
		return children[next]->find_2(key, depth + 1);
	}
};

int main() {
	vector<string> words = {"why", "how", "what"};
	
	TrieNode root;
	for(string word : words) root.insert(word, 0);
	
	string search = "wh";
	
	if(root.find_1(search, 0)) cout << search << "가 있습니다." << endl;
	else cout << search << "가 없습니다." << endl;
	
	if(root.find_2(search, 0)) cout << search << "가 있습니다." << endl;
	else cout << search << "가 없습니다." << endl;
	return 0;
}
